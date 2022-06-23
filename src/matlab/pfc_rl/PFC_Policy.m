function action1 = PFC_Policy(observation1)
%#codegen

% Reinforcement Learning Toolbox
% Generated on: 09-Jun-2022 17:14:04

action1 = localEvaluate(observation1);
end
%% Local Functions
function action1 = localEvaluate(observation1)
persistent policy
if isempty(policy)
	policy = coder.loadDeepLearningNetwork('PFC_Agent.mat','policy');
end
observation1 = observation1(:)';
action1 = predict(policy, observation1);
end