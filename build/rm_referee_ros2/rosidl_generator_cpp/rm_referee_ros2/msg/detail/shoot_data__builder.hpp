// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_ShootData_stamp
{
public:
  explicit Init_ShootData_stamp(::rm_referee_ros2::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::ShootData stamp(::rm_referee_ros2::msg::ShootData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::ShootData msg_;
};

class Init_ShootData_bullet_speed
{
public:
  explicit Init_ShootData_bullet_speed(::rm_referee_ros2::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_stamp bullet_speed(::rm_referee_ros2::msg::ShootData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return Init_ShootData_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::ShootData msg_;
};

class Init_ShootData_bullet_freq
{
public:
  explicit Init_ShootData_bullet_freq(::rm_referee_ros2::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_speed bullet_freq(::rm_referee_ros2::msg::ShootData::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_ShootData_bullet_speed(msg_);
  }

private:
  ::rm_referee_ros2::msg::ShootData msg_;
};

class Init_ShootData_shooter_id
{
public:
  explicit Init_ShootData_shooter_id(::rm_referee_ros2::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_freq shooter_id(::rm_referee_ros2::msg::ShootData::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_ShootData_bullet_freq(msg_);
  }

private:
  ::rm_referee_ros2::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  Init_ShootData_bullet_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_shooter_id bullet_type(::rm_referee_ros2::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_id(msg_);
  }

private:
  ::rm_referee_ros2::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::ShootData>()
{
  return rm_referee_ros2::msg::builder::Init_ShootData_bullet_type();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
