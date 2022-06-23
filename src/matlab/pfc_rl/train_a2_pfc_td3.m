% 设置打开的多车跟随策略仿真训练环境
mdl = "a2_pfc_rl";
open_system(mdl);


obsInfo = rlNumericSpec([9 1]);
actInfo = rlNumericSpec([2 1],'LowerLimit',[0.1; -pi],'UpperLimit',[0.5; pi]);



% 加载强化学习训练模块
blks = mdl + ["/RL Agent"];
env = rlSimulinkEnv(mdl,blks,obsInfo,actInfo);

% 重置仿真训练环境的部分参数，如小车的位置，具体详见a2pfcResetFcn.m脚本文件
env.ResetFcn = @a2pfcResetFcn;

rng(0);



% 创建跟随策略训练智能体-TD3算法
agent = createPFCAgent(obsInfo,actInfo);

% 设置仿真结束时间Tf为120秒，采样时间Ts为0.1秒，最大训练回合数maxepisodes为30000，每个回合的仿真步长为maxsteps
Tf = 120; 
Ts = 0.1;
maxepisodes = 30000;
maxsteps = ceil(Tf/Ts);

% 不会根据跟随仿真设置的奖励值（如某个回合的奖励值达到100以上）中途停止训练
% trainingOpts = rlTrainingOptions(...
%     'MaxEpisodes',maxepisodes,...
%     'MaxStepsPerEpisode',maxsteps,...
%     'Verbose',false,...
%     'Plots','training-progress',...
%     'StopTrainingCriteria','EpisodeReward',...
%     'StopTrainingValue',100,...    
%     'ScoreAveragingWindowLength',10); 

% 不根据跟随仿真设置的奖励值中途停止训练
trainingOpts = rlTrainingOptions(...
    'MaxEpisodes',maxepisodes,...
    'MaxStepsPerEpisode',maxsteps,...
    'Verbose',false,...
    'Plots','training-progress',...
    'ScoreAveragingWindowLength',10); 

% 是否开启异步分布式训练 硬件性能配置较高时建议开启
% trainingOpts.UseParallel = true;
% trainingOpts.ParallelizationOptions.Mode = "async";
% trainingOpts.ParallelizationOptions.DataToSendFromWorkers = "Experiences";
% trainingOpts.ParallelizationOptions.StepsUntilDataIsSent = 32;

% 是否开启训练模式 true为训练模式 false为评估模式
doTraining = false;

if doTraining    
    trainingStats = train(agent,env,trainingOpts);   
else
    % 加载训练的神经网络策略数据
    load('a2_pfc_rl.mat','agent');

end

% 保存已训练好的神经网络策略数据
save('a2_pfc_rl.mat', 'agent');

% 评估模式查看仿真运行效果
simOptions = rlSimulationOptions('MaxSteps',1200);
experience = sim(env,agent,simOptions); 
totalReward = sum(experience.Reward);


function agent = createPFCAgent(obsInfo,actInfo)

numObs = obsInfo.Dimension(1);
numAct = 2;

statePath1 = [
    featureInputLayer(numObs,'Normalization','none','Name','observation')
    fullyConnectedLayer(400,'Name','CriticStateFC1')
    reluLayer('Name','CriticStateRelu1')
    fullyConnectedLayer(300,'Name','CriticStateFC2')
    ];
actionPath1 = [
    featureInputLayer(numAct,'Normalization','none','Name','action')
    fullyConnectedLayer(300,'Name','CriticActionFC1')
    ];
commonPath1 = [
    additionLayer(2,'Name','add')
    reluLayer('Name','CriticCommonRelu1')
    fullyConnectedLayer(1,'Name','CriticOutput')
    ];

criticNet = layerGraph(statePath1);
criticNet = addLayers(criticNet,actionPath1);
criticNet = addLayers(criticNet,commonPath1);
criticNet = connectLayers(criticNet,'CriticStateFC2','add/in1');
criticNet = connectLayers(criticNet,'CriticActionFC1','add/in2');

criticOptions = rlRepresentationOptions('Optimizer','adam','LearnRate',1e-3,... 
                                        'GradientThreshold',1,'L2RegularizationFactor',2e-4);
critic1 = rlQValueRepresentation(criticNet,obsInfo,actInfo,...
    'Observation',{'observation'},'Action',{'action'},criticOptions);
critic2 = rlQValueRepresentation(criticNet,obsInfo,actInfo,...
    'Observation',{'observation'},'Action',{'action'},criticOptions);


actorNet = [
    featureInputLayer(numObs,'Normalization','none','Name','observation')
    fullyConnectedLayer(400,'Name','ActorFC1')
    reluLayer('Name','ActorRelu1')
    fullyConnectedLayer(300,'Name','ActorFC2')
    reluLayer('Name','ActorRelu2')
    fullyConnectedLayer(numAct,'Name','ActorFC3')                       
    tanhLayer('Name','ActorTanh1')
    ];

actorOptions = rlRepresentationOptions('Optimizer','adam','LearnRate',1e-3,...
                                       'GradientThreshold',1,'L2RegularizationFactor',1e-5);
actor  = rlDeterministicActorRepresentation(actorNet,obsInfo,actInfo,...
    'Observation',{'observation'},'Action',{'ActorTanh1'},actorOptions);


agentOptions = rlTD3AgentOptions;
agentOptions.DiscountFactor = 0.99;
agentOptions.TargetSmoothFactor = 5e-3;
agentOptions.TargetPolicySmoothModel.Variance = 0.2;
agentOptions.TargetPolicySmoothModel.LowerLimit = -0.5;
agentOptions.TargetPolicySmoothModel.UpperLimit = 0.5;


agent = rlTD3Agent(actor,[critic1 critic2],agentOptions);


end




