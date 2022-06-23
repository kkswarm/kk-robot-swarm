function in = a2pfcResetFcn(in)

% 设置1号小车的位姿
in = setVariable(in,'x_1_0', 1.0);
in = setVariable(in,'y_1_0', 0.0);
in = setVariable(in,'yaw_1_0',0.0);

% 设置2号小车的位姿
in = setVariable(in,'x_2_0',0.5+0.36*rand());
in = setVariable(in,'y_2_0',-0.45+0.9*rand());
in = setVariable(in,'yaw_2_0',0.0);

end


