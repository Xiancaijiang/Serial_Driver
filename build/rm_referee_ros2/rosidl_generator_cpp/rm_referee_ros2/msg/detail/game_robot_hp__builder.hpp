// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/GameRobotHp.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/game_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_GameRobotHp_stamp
{
public:
  explicit Init_GameRobotHp_stamp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::GameRobotHp stamp(::rm_referee_ros2::msg::GameRobotHp::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_base_hp
{
public:
  explicit Init_GameRobotHp_blue_base_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_stamp blue_base_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return Init_GameRobotHp_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_outpost_hp
{
public:
  explicit Init_GameRobotHp_blue_outpost_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_base_hp blue_outpost_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_GameRobotHp_blue_base_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_7_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_7_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_outpost_hp blue_7_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_7_robot_hp_type arg)
  {
    msg_.blue_7_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_outpost_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_5_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_5_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_7_robot_hp blue_5_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_5_robot_hp_type arg)
  {
    msg_.blue_5_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_7_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_4_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_4_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_5_robot_hp blue_4_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_4_robot_hp_type arg)
  {
    msg_.blue_4_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_5_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_3_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_3_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_4_robot_hp blue_3_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_3_robot_hp_type arg)
  {
    msg_.blue_3_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_4_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_2_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_2_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_3_robot_hp blue_2_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_2_robot_hp_type arg)
  {
    msg_.blue_2_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_3_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_blue_1_robot_hp
{
public:
  explicit Init_GameRobotHp_blue_1_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_2_robot_hp blue_1_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_blue_1_robot_hp_type arg)
  {
    msg_.blue_1_robot_hp = std::move(arg);
    return Init_GameRobotHp_blue_2_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_base_hp
{
public:
  explicit Init_GameRobotHp_red_base_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_blue_1_robot_hp red_base_hp(::rm_referee_ros2::msg::GameRobotHp::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_GameRobotHp_blue_1_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_outpost_hp
{
public:
  explicit Init_GameRobotHp_red_outpost_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_base_hp red_outpost_hp(::rm_referee_ros2::msg::GameRobotHp::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_GameRobotHp_red_base_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_7_robot_hp
{
public:
  explicit Init_GameRobotHp_red_7_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_outpost_hp red_7_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_7_robot_hp_type arg)
  {
    msg_.red_7_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_outpost_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_5_robot_hp
{
public:
  explicit Init_GameRobotHp_red_5_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_7_robot_hp red_5_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_5_robot_hp_type arg)
  {
    msg_.red_5_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_7_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_4_robot_hp
{
public:
  explicit Init_GameRobotHp_red_4_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_5_robot_hp red_4_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_4_robot_hp_type arg)
  {
    msg_.red_4_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_5_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_3_robot_hp
{
public:
  explicit Init_GameRobotHp_red_3_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_4_robot_hp red_3_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_3_robot_hp_type arg)
  {
    msg_.red_3_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_4_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_2_robot_hp
{
public:
  explicit Init_GameRobotHp_red_2_robot_hp(::rm_referee_ros2::msg::GameRobotHp & msg)
  : msg_(msg)
  {}
  Init_GameRobotHp_red_3_robot_hp red_2_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_2_robot_hp_type arg)
  {
    msg_.red_2_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_3_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

class Init_GameRobotHp_red_1_robot_hp
{
public:
  Init_GameRobotHp_red_1_robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotHp_red_2_robot_hp red_1_robot_hp(::rm_referee_ros2::msg::GameRobotHp::_red_1_robot_hp_type arg)
  {
    msg_.red_1_robot_hp = std::move(arg);
    return Init_GameRobotHp_red_2_robot_hp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameRobotHp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::GameRobotHp>()
{
  return rm_referee_ros2::msg::builder::Init_GameRobotHp_red_1_robot_hp();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
