// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_RefereeWarning_stamp
{
public:
  explicit Init_RefereeWarning_stamp(::rm_referee_ros2::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::RefereeWarning stamp(::rm_referee_ros2::msg::RefereeWarning::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_count
{
public:
  explicit Init_RefereeWarning_count(::rm_referee_ros2::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_stamp count(::rm_referee_ros2::msg::RefereeWarning::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_RefereeWarning_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_foul_robot_id
{
public:
  explicit Init_RefereeWarning_foul_robot_id(::rm_referee_ros2::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_count foul_robot_id(::rm_referee_ros2::msg::RefereeWarning::_foul_robot_id_type arg)
  {
    msg_.foul_robot_id = std::move(arg);
    return Init_RefereeWarning_count(msg_);
  }

private:
  ::rm_referee_ros2::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_level
{
public:
  Init_RefereeWarning_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeWarning_foul_robot_id level(::rm_referee_ros2::msg::RefereeWarning::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_RefereeWarning_foul_robot_id(msg_);
  }

private:
  ::rm_referee_ros2::msg::RefereeWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::RefereeWarning>()
{
  return rm_referee_ros2::msg::builder::Init_RefereeWarning_level();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
