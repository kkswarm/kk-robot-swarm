 

wppub = rospublisher('/wp','std_msgs/Float64','DataFormat','struct');
msg = rosmessage(wppub);


% msg.Data = 123456;
%msg.Data = 235467;
msg.Data = 156724;
% msg.Data = 812345;


send(wppub,msg);
topic = wppub.TopicName;
b = wppub.rosmessage;