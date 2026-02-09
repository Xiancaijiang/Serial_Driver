// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_RobotHurt_stamp
{
public:
  explicit Init_RobotHurt_stamp(::rm_referee_ros2::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::RobotHurt stamp(::rm_referee_ros2::msg::RobotHurt::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotHurt msg_;
};

class Init_RobotHurt_hurt_type
{
public:
  explicit Init_RobotHurt_hurt_type(::rm_referee_ros2::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  Init_RobotHurt_stamp hurt_type(::rm_referee_ros2::msg::RobotHurt::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return Init_RobotHurt_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotHurt msg_;
};

class Init_RobotHurt_armor_id
{
public:
  Init_RobotHurt_armor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHurt_hurt_type armor_id(::rm_referee_ros2::msg::RobotHurt::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_RobotHurt_hurt_type(msg_);
  }

private:
  ::rm_referee_ros2::msg::RobotHurt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::RobotHurt>()
{
  return rm_referee_ros2::msg::builder::Init_RobotHurt_armor_id();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
