clc;clear
bagPath='robot_1_waypoint.bag';%设定为当前文件夹下日志文件名称
bag = rosbag(bagPath);
bag.AvailableTopics            %显示日志文件的话题

%% 读取位置数据生成轨迹
poseselect=select(bag,'Topic','/robot_1/pose');
% ---------nav_msgs/Odometry 固有数据格式
[ts,cols]=timeseries(poseselect);pdata=ts.data;
pT=ts.time-ts.time(1);
pX=pdata(:,4);
pY=pdata(:,5);
pYaw=atan2(2*pdata(:,10).*pdata(:,9),1-2*pdata(:,9).^2);
% ---------nav_msgs/Odometry 固有数据格式
figure("Name","轨迹图");
%轨迹
plot(pX,pY,'--bs',...
    'LineWidth',1,...
    'MarkerSize',3,...
    'MarkerIndices',...
    1:1:length(pT),...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor',[0.5,0.5,0.5]);
axis equal;
hold on;grid on;
%四角顶点
wpx=[0,2,0,2];wpy=[0,2,2,0];
scatter(wpx,wpy,100,'g','p','filled');
hold on
scatter(wpx,wpy,600,'+');
hold on
%legend(bagPath);
xlabel('x轴');ylabel('Y轴');title("轨迹");
%% 读取Vref，Wref,显示指令数据
cmdselect=select(bag,'Topic','/robot_1/cmd_vel');
%--------geometry_msgs/Twist  固有数据格式
[ts,cols]=timeseries(cmdselect);vdata=ts.data;
vT=ts.time-ts.time(1);vT0=ts.time(1);
Vref=vdata(:,1);Wref=vdata(:,6);
%--------geometry_msgs/Twist  固有数据格式
figure("Name","指令图");
subplot(2,1,1);plot(vT,Vref);title("速度指令");
subplot(2,1,2);plot(vT,180/pi*Wref);title("角速度指令");
%%  读取comm话题数据，对编码器数据进行分析
commselect=select(bag,'Topic','/comm');
commmsg = readMessages(commselect,'DataFormat','struct');%commmsg{1}
% -----------kkswarm_msgs/kkSwarmState
data_Car=zeros(length(commmsg),5);
for i=1:length(commmsg)
    data_Car(i,:)=[double(commmsg{i,1}.Mark),commmsg{i,1}.LinearSpeed,commmsg{i,1}.AngularSpeed,commmsg{i,1}.LeftEncoder,commmsg{i,1}.RightEncoder];
                    %车辆编号，车辆速度，车辆角速度，车辆左轮速度，车辆右轮速度
end
ts=commselect.MessageList.Time;
data_Car1=[ts-ts(1),data_Car];%将数据加上时间标签
% -------对数据进行按车分发
i1=1;i2=1;i3=1;i4=1;i5=1;i6=1;i7=1;i8=1;i9=1;i10=1;
nCar=1;dCarlongmax=ceil(length(commmsg)/nCar)+100;%按照需要修改车辆数量
dCar1=zeros(dCarlongmax,6);dCar2=zeros(dCarlongmax,6);dCar3=zeros(dCarlongmax,6);dCar4=zeros(dCarlongmax,6);dCar5=zeros(dCarlongmax,6);
dCar6=zeros(dCarlongmax,6);dCar7=zeros(dCarlongmax,6);dCar8=zeros(dCarlongmax,6);dCar9=zeros(dCarlongmax,6);dCar10=zeros(dCarlongmax,6);
for i=1:length(data_Car1(:,1))
    switch data_Car1(i,2)
        case 1
            dCar1(i1,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i1=i1+1;
        case 2
            dCar2(i2,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i2=i2+1;
        case 3
            dCar3(i3,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i3=i3+1;
        case 4
            dCar4(i4,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i4=i4+1;
        case 5
            dCar5(i5,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i5=i5+1;
        case 6
            dCar6(i6,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i6=i6+1;
        case 7
            dCar7(i7,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i7=i7+1;
        case 8
            dCar8(i8,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i8=i8+1;
        case 9
            dCar9(i9,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i9=i9+1;
        case 10
            dCar10(i10,:)=[data_Car1(i,2),data_Car1(i,1),data_Car1(i,3:end)];i10=i10+1;
    end
end
dCar1(i1:end,:)=[];dCar2(i2:end,:)=[];dCar3(i3:end,:)=[];dCar4(i4:end,:)=[];dCar5(i5:end,:)=[];
dCar6(i6:end,:)=[];dCar7(i7:end,:)=[];dCar8(i8:end,:)=[];dCar9(i9:end,:)=[];dCar10(i10:end,:)=[];
% -------对数据进行按车分发
% -----------kkswarm_msgs/kkSwarmState
figure("Name","车载传感器数据")
subplot(2,3,[1 2]);plot(dCar1(:,2),dCar1(:,3));title("速度");
subplot(2,3,[4 5]);plot(dCar1(:,2),dCar1(:,4)*180/pi);title("角速度");
subplot(2,3,3);plot(dCar1(:,2),dCar1(:,5));title("左轮速度");
subplot(2,3,6);plot(dCar1(:,2),dCar1(:,6));title("右轮速度");
