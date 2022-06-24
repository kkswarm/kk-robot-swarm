# kk-robot-swarm
<span style="display: flex; flex-direction: column;">
    <img src = https://qiniu.md.amovlab.com/img/m/202206/20220623/1748557588781156770676736.png>
 <p style="text-align: center">
    KKswarm
 </p>
</span>

## 简介
KK（Kilo Ken）Swarm， 致敬Kevin Kelly机器社会进化论，一个奉行极简主义的自组织机器人集群，具有丰富的机器人功能，如视觉、控制、学习、协同。同时追求超低成本、超大规模，致力于使群体智慧走进物理世界。

众多低成本机器人互相连接，进而产生他们的信息交流和反馈，相互学习，产生秩序，以达到集体目标，将其称为“群智涌现”。

KKSwarm项目旨在为研究人员搭建一个高效、易用的集群研究平台。结合[ROS](https://www.ros.org/)强大的开源生态，让研究人员或者工程师能够快速上手开发。同时也兼顾到理论研究和工程落地之间的跨度，`KKSwarm`项目通过搭建轻量级的仿真环境，再通过参数拟合让仿真和真实环境一致，让仿真环境和真实环境高度匹配，可以实现多智能体等算法的直接过渡，配合上低成本的机器人集群，可以快速在物理环境中验证算法，以达到工程落地的目的。

`KKSwarm`项目通过视觉定位，获取当前机器人的位置和方向。然后根据当前位置和方向，通过算法来控制其下一步的行为。目前`KKSwarm`项目拥有的功能有：

1. 基于强化学习的多车跟随 
2. 基于强化学习的边界反弹
3. 基于`MATLAB`搭建仿真环境，该环境可以实现无缝过渡到物理环境
4. 基于`PURE PURSUIT`路径跟踪算法
5. 仿真环境中（基于`MATLAB`搭建）支持虚拟雷达、集群路径避障功能
6. 自主避障蜂拥控制多机器人分布式自主导航
7. 编队控制
8. ROS日志分析
9. 支持ROS2(TODO)

## 系统说明
<span style="display: flex; flex-direction: column;">
    <img src = https://qiniu.md.amovlab.com/img/m/202206/20220614/1223273051877547387027456.jpg>
 <p style="text-align: center">
    系统数据流向图
 </p>
</span>

`kkswarm`项目通过路由器搭建局域网，集群小车为客户端。所有的算法和定位系统均在服务器主机上进行计算。然后通过TCP/IP协议，将控制指令发送给集群小车，从而控制小车的运动。同时主机服务器通过摄像机实时获取集群小车的位置和方向。

## 软件安装

### 系统要求
   ubuntu18.04 以及 ROS Melodic

### KKswarm项目安装
```bash
git clone https://github.com/kkswarm/kk-robot-swarm
```

### 海康威视相机Linux SDK
1. 进入[海康威视官网](https://www.hikrobotics.com/cn/machinevision/service/download?module=0)，选择`机器视觉工业相机客户端MVS V2.1.0（Linux）` 进行下载

<blockquote style="background-color:#fff7d0;border-left:.5rem solid #e7c000;color: #4e5969;padding-bottom: 15px;">
<p style="font-weight: 600;color:#b29400">注意</p>

根据实际情况，版本可能有小更新。选择 `机器视觉工业相机客户端MVS V2.1.x (Linux)`。本项目使用的是 2.1.0版本
</blockquote>
 
2. 下载完成以后，解压。解压后将会显示适应各种架构的计算机的压缩包。这里选择 `MVS-2.1.0_x86_64_20201228.tar.gz` 这个压缩包进行安装。

3. 解压第2步选择的压缩包
   ```bash
   tar -xvzf MVS-2.1.0_x86_64_20201228.tar.gz
   cd MVS-2.1.0_x86_64_20201228
   sudo bash setup.sh
   ```
    相机驱动将会安装在 `/opt/MVS` 中
   
    启动相机界面的命令为 
   
    ```bash
    cd /opt/MVS/bin
    ./MVS.sh
    ```
    
    界面如图1所示：

      <span style="display: flex; flex-direction: column; width:70%">
         <img src = https://qiniu.md.amovlab.com/img/m/202206/20220609/1529298816925102823079936.png>
      <p style="text-align: center">
         图1 相机启动界面
      </p>
      </span>


    相机驱动的动态链接库路径为 `/opt/MVS/lib/64`

    相机驱动头文件路径为 `/opt/MVS/include/`

4. 安装完毕后，将海康威视的动态库加入到系统动态库中。否则程序将无法运行。
   ```bash
   cd /etc/ld.so.conf.d
   sudo vim hik.conf ## 如果不会vim,则输入 sudo gedit hik.conf
   #在第一行加入相机驱动的动态链接库路径
   /opt/MVS/lib/64
   sudo ldconfig # 刷新配置
   ```
### Apritag以及Apritag_ros

[apriltag官方简介](https://april.eecs.umich.edu/software/apriltag.html)

[apriltao_ros官方简介](http://wiki.ros.org/apriltag_ros)

`KKSWARM` 项目采用的标签家族是 `Tag36h11`，尺寸是`7cm`。 详情见 `doc/apritags1-50.pdf`。您也可以通过软件自动生成该家族标签。详情点击[通过openmv生成apriltag标签](https://blog.csdn.net/wangmj_hdu/article/details/112933915)

#### apritag安装
```bash
cd ~/kk-robot-swarm/
git clone https://github.com/AprilRobotics/apriltag.git
cd apriltag
mkdir build
cmake ..
make -j4
sudo make install
```
1. Apriltag相关头文件将会被安装在 `/usr/local/include/apriltag`
2. Apriltag相关的库将会被安装在 `/usr/local/lib/`
3. 有关Aprilt

### 编译
```bash
cd ~/kk-robot-swarm
catkin_make
```
## 仿真Demo演示(基于Matlab)

### 单车航点
![](doc/pp_demo.gif)


### 单车边界回弹
![](doc/border_demo.gif)

### 基于强化学习的多车跟随
![](doc/rl_demo.gif)

### 队形变换仿真
![](doc/formation_demo.gif)

### 分布式自主导航
![](doc/lidar_demo.gif)

## 真车Demo演示(基于ROS)

### 单车航点
![](doc/c1_waypoint.gif)

### 单车边界回弹
![](doc/border.gif)

### 基于强化学习的多车跟随
![](doc/rl.gif)

### 队形变换
![](doc/formation.gif)

### 分布式自主导航
![](doc/lidar.gif)

### pure pursuit
![](doc/pp.gif)
