# Serial Driver

基于 ROS2 实现的串口通信驱动，用于上位机与电控系统的双向通讯。

## 功能特性

- **双向数据传输**：支持接收和发送多种类型的数据包
- **云台姿态接收**：实时获取云台的roll、pitch、yaw角度信息
- **目标跟踪**：发送目标位置、速度、装甲板信息到电控端
- **底盘控制**：支持底盘导航控制指令的发送
- **射击数据**：发送射击相关参数（子弹类型、射速、频率）
- **机器人状态**：发送机器人血量、功率、等级等状态信息
- **自动检测颜色**：根据接收到的颜色信息自动设置检测参数
- **追踪器重置**：支持远程重置追踪器
- **TF变换广播**：发布odom到gimbal_link的坐标变换
- **延迟监控**：实时监控数据传输延迟
- **异常处理**：自动重连机制，确保通讯稳定性

## 环境搭建与编译

### 安装依赖

```sh
rosdep install --from-paths src --ignore-src -r -y
sudo apt install ros-humble-serial-driver
```

### 克隆仓库

```sh
git clone https://github.com/Xiancaijiang/Serial_Driver.git
cd Serial_Driver
```

### 编译

```sh
colcon build --symlink-install
```

## 使用帮助

### 配置串口参数

编辑配置文件 [serial_driver.yaml](src/rm_serial_driver/config/serial_driver.yaml)：

```yaml
/rm_serial_driver:
  ros__parameters:
    device_name: /dev/ttyACM1    # 串口设备名称
    baud_rate: 115200            # 波特率
    flow_control: none           # 流控制
    parity: none                 # 校验位
    stop_bits: "1"               # 停止位
```

### 串口权限设置

```sh
sudo chmod 777 /dev/ttyACM0
```

### 启动串口模块

```sh
source install/setup.bash
ros2 launch rm_serial_driver serial_driver.launch.py
```

## 通讯协议

### 数据包类型

| 数据包类型 | 头部标识 | 传输方向 | 功能描述 |
|:---|:---:|:---:|:---|
| ReceivePacketVision | 0x5A | 接收 | 接收云台姿态和瞄准点信息 |
| SendPacketVision | 0xA5 | 发送 | 发送目标跟踪信息到电控 |
| SendPacketTwist | 0xA4 | 发送 | 发送底盘导航控制指令 |
| ShootDataPacket | 0xA6 | 发送 | 发送射击数据 |
| RobotStatusPacket | 0xA7 | 发送 | 发送机器人状态信息 |

### ReceivePacketVision (0x5A)

接收云台姿态信息用于自瞄系统。

**字段说明：**
- `detect_color`: 机器人自身颜色（0-红色，1-蓝色），用于判断识别目标颜色
- `reset_tracker`: 重置追踪器标志
- `roll, pitch, yaw`: 云台姿态角度，单位：弧度
- `aim_x, aim_y, aim_z`: 当前云台瞄准位置，用于发布可视化Marker

**ROS话题：**
- TF变换：odom → gimbal_link
- Marker话题：/aiming_point

### SendPacketVision (0xA5)

发送视觉端目标观测信息，具体的运动预测、装甲板选择、弹道解算在电控端完成。

**字段说明：**
- `tracking`: 是否正在跟踪目标
- `id`: 目标ID（0-前哨站，1-5-机器人编号，6-哨兵，7-基地）
- `armors_num`: 装甲板数量（2-平衡步兵，3-前哨站，4-普通机器人）
- `x, y, z`: 目标位置坐标，单位：米
- `yaw`: 目标偏航角，单位：弧度
- `vx, vy, vz`: 目标速度分量，单位：米/秒
- `v_yaw`: 目标偏航角速度，单位：弧度/秒
- `r1, r2`: 目标半径信息
- `dz`: 目标高度差

**ROS话题：**
- 订阅：/tracker/target (auto_aim_interfaces::msg::Target)

### SendPacketTwist (0xA4)

由导航模块输出，用于哨兵机器人底盘运动控制。

**字段说明：**
- `linear_x, linear_y, linear_z`: 线速度分量，单位：米/秒
- `angular_x, angular_y, angular_z`: 角速度分量，单位：弧度/秒

**ROS话题：**
- 订阅：/cmd_vel_chassis (geometry_msgs::msg::Twist)

### ShootDataPacket (0xA6)

发送射击相关数据到电控系统。

**字段说明：**
- `bullet_type`: 子弹类型（1-17mm弹丸，2-42mm弹丸）
- `shooter_id`: 发射机构ID（1,2-17mm发射机构，3-42mm发射机构）
- `bullet_freq`: 射频，单位：Hz
- `bullet_speed`: 射速，单位：米/秒

**ROS话题：**
- 订阅：/referee/shoot_data (rm_referee_ros2::msg::ShootData)

### RobotStatusPacket (0xA7)

发送比赛机器人状态信息到电控系统。

**字段说明：**
- `robot_id`: 机器人ID
- `robot_level`: 机器人等级
- `current_hp`: 当前血量
- `maximum_hp`: 最大血量
- `shooter_barrel_cooling_value`: 发射机构冷却值
- `shooter_barrel_heat_limit`: 发射机构热量限制
- `chassis_power_limit`: 底盘功率限制
- `power_management_gimbal_output`: 云台输出功率管理
- `power_management_chassis_output`: 底盘输出功率管理
- `power_management_shooter_output`: 发射机构输出功率管理

**ROS话题：**
- 订阅：/referee/robot_status (rm_referee_ros2::msg::RobotStatus)

## ROS接口

### 发布的话题

| 话题名称 | 消息类型 | 描述 |
|:---|:---|:---|
| /latency | std_msgs::msg::Float64 | 数据传输延迟（毫秒） |
| /aiming_point | visualization_msgs::msg::Marker | 瞄准点可视化 |

### 订阅的话题

| 话题名称 | 消息类型 | 描述 |
|:---|:---|:---|
| /tracker/target | auto_aim_interfaces::msg::Target | 目标跟踪信息 |
| /cmd_vel_chassis | geometry_msgs::msg::Twist | 底盘速度控制 |
| /referee/shoot_data | rm_referee_ros2::msg::ShootData | 射击数据 |
| /referee/robot_status | rm_referee_ros2::msg::RobotStatus | 机器人状态 |

### 提供的服务

| 服务名称 | 服务类型 | 描述 |
|:---|:---|:---|
| /tracker/reset | std_srvs::srv::Trigger | 重置追踪器 |

### 参数

| 参数名称 | 类型 | 默认值 | 描述 |
|:---|:---|:---|:---|
| device_name | string | - | 串口设备名称 |
| baud_rate | int | 115200 | 波特率 |
| flow_control | string | none | 流控制（none/hardware/software） |
| parity | string | none | 校验位（none/odd/even） |
| stop_bits | string | 1 | 停止位（1/1.5/2） |
| timestamp_offset | double | 0.0 | 时间戳偏移量（秒） |

## 依赖项

- `rclcpp`: ROS2 C++客户端库
- `rclcpp_components`: ROS2组件支持
- `serial_driver`: 串口驱动
- `geometry_msgs`: 几何消息类型
- `tf2_ros`: TF变换库
- `tf2_geometry_msgs`: TF几何消息
- `visualization_msgs`: 可视化消息
- `auto_aim_interfaces`: 自瞄接口消息
- `std_srvs`: 标准服务
- `rm_referee_ros2`: 裁判系统消息

## 故障排除

### 串口连接失败

1. 检查串口设备名称是否正确
2. 确认串口权限设置：`sudo chmod 777 /dev/ttyACM0`
3. 检查波特率等参数是否匹配

### CRC校验错误

- 检查串口连接稳定性
- 确认数据包格式与电控端一致
- 检查通讯协议版本

### 参数设置失败

- 确认armor_detector和rm_rune_detector节点已启动
- 检查参数服务是否可用

## 许可证

MIT License

## 相关信息

详细的通讯协议说明请参考：[README (rm_serial_driver)](/src/rm_serial_driver/README.md)
