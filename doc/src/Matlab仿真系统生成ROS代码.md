# MatLab仿真系统生成ROS代码

## 前期准备

### MatLab2021b

1. 首先安装好MalLab2021b版本（其他matlab版本尚未测试，理论上均可使用）
2. 在MatLab “附加功能” 搜索并安装 **Mobile Robotics Simulation Toolbox**（选择**添加到MatLab**）



### 程序列表

1. a1_waypoint：纯仿真模型。包含小车动力学模块（Dynamics）和控制器模块（Controller），并且这两个模块直接相连，仿真速度更快。主要用于验证算法的正确性。
2. b1_waypoint：ROS仿真模型。Dynamics 和 Controller 通过ROS主题交换数据，仿真速度相对较慢。主要用于验证ROS主题通信的正确性。
3. c1_waypoint：控制器模块。此模块硬件设置针对目标控制器进行了针对性设置，将b1_waypoint 中的 Controller 拷贝进去后，可生成小车上使用的ROS代码。



### 仿真系统

如图1所示

![图片1.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0927504772257126821036032.png)

<center>图1 仿真系统</center>

仿真系统包括 Dynamics（小车动力学模块）和 Controller（控制器模块），设计算法只需要修改 Controller，内含PID航路点导航算法。

在MatLab中打开仿真系统，双击 Controller，内部如图2所示：

![图片2.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0930125367247150885273600.png)

<center>图2 Controller</center>

其中：

 - pose1：输入 $x,y,yaw$ 

 - vw1：输出 $v(速度)$ ，$\omega(角速度)$

 - 距离单位：m，角度单位：rad，速度单位：m/s，角速度单位：rad/s

 - WAY_P：预定义航路点。在“建模--模型设置--模型属性--回调--InitFcn内修改初始化参数”（如图3所示）

   ![图片3.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0939537802561215237881856.png)

   ![图片4.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0939567818043760511451136.png)

<center>图3 设置航路点</center>

算法采用了 **Mobile Robotics Simulation Toolbox** 中的 **Waypoint Tracking Logic**，算法逻辑如图4所示：

![图片5.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0941558316925525687697408.png)

<center>图4 算法逻辑</center>

小车运动学模型如下图所示：

![图片6.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0943568822140027518484480.png)

<center>图5 运动学模型</center>

注意：Simulink 的 Differential Drive Kinematic Model 模块中的 d 为两轮之间的距离，与matlab不同，主流教课书中$d'$的通常为：小车轮子与车中央的距离。即$d'=1/2TrackWidth$,请读者注意区分。 Simulink差分小车运动学模型如图6所示

![图片7.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0945389195371598327152640.png)

<center>图6 simulink中的差分模型</center>

参考文献：

- https://husarion.com/tutorials/ros-tutorials/3-simple-kinematics-for-mobile-robot/
- https://ww2.mathworks.cn/help/releases/R2021b/robotics/ref/differentialdrivekinematicmodel.html



### ROS仿真模块

b1_waypoint 相比于 a1_waypoint 增加了ROS通信模块， Controller 与 Dynamics 之间通过ROS模块交换数据。通信如图7所示：

![图片8.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0948098564122707636092928.png)

<center>图7 ROS通信</center>

b1_waypoint中可以根据需要自定义ROS主题名称与格式。

在MatLab中双击 ROS模块，其内部如图8所示：

![图片9.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0949438169467195391311872.png)

<center>图8 ROS控制</center>

![图片10.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0950347955612159164121088.png)

<center>图9 ROS话题通信</center>

修改或自定义ROS主题，可以参考： https://ww2.mathworks.cn/help/ros/ref/publish.html 



### 运行ROS仿真模块

（是否添加ROS仿真模块的安装，TODO）

1. 操作系统 Windows10。

2. 在MatLab命令行中输入 `rosinit` 。如果运行失败，则需要确认是否正确安装Python2.7，以及将Python2.7路径写入环境变量中。

3. 运行正常后，将会弹出 ROS master工作窗口，如图10所示（**切勿关闭，最小化即可**）

![图片11.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0953447156945559629168640.png)

<center>图10 ROS master运行界面</center>

点击 "仿真--运行"。编译成功后，便会显示如图11运行的轨迹，按航路点运行多圈以后便会原地旋转。

![图片12.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0955436656475798020653056.png)

<center>图11 轨迹</center>

更多内容可以查阅官网： https://ww2.mathworks.cn/help/ros/ug/get-started-with-ros.html 



### 生成ROS代码

打开 c1_waypoint，按下 `Ctrl+a` 选中所有内容后，按`Del` 键删除掉已有内容。将b1_waypoint 中的控制器部分拷贝至 c1_waypoint ，如图12所示：

![图片13.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0957346192993152681476096.png)

<center>图12 生成ROS代码</center>

![图片14.png](https://qiniu.md.amovlab.com/img/m/202204/20220406/0957586091563543231037440.png)

<center>图13 生成ROS代码</center>

点击**ROS选项卡-Build Model-Build Model**，代码生成成功后，在当前目录下会出现一个同名压缩包。将其拷贝至ROS工作空间中src目录下解压，编译，便可生成可执行的ROS节点。

