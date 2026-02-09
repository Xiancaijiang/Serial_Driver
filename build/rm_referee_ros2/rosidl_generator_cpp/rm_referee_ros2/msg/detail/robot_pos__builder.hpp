// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_RobotPos_stamp
{
public:
  explicit Init_RobotPos_stamp(::rm_referee_ros2::msg::RobotPos & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::RobotPos stamp(::rm_referee_ros2::msg::RobotPos::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotPos msg_;
};

class Init_RobotPos_angle
{
public:
  explicit Init_RobotPos_angle(::rm_referee_ros2::msg::RobotPos & msg)
  : msg_(msg)
  {}
  Init_RobotPos_stamp angle(::rm_referee_ros2::msg::RobotPos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_RobotPos_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotPos msg_;
};

class Init_RobotPos_y
{
public:
  explicit Init_RobotPos_y(::rm_referee_ros2::msg::RobotPos & msg)
  : msg_(msg)
  {}
  Init_RobotPos_angle y(::rm_referee_ros2::msg::RobotPos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPos_angle(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotPos msg_;
};

class Init_RobotPos_x
{
public:
  Init_RobotPos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPos_y x(::rm_referee_ros2::msg::RobotPos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPos_y(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::RobotPos>()
{
  return rm_referee_ros2::msg::builder::Init_RobotPos_x();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
