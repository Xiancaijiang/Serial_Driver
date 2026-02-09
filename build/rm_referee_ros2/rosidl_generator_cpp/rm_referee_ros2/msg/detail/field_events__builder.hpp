// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/field_events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_FieldEvents_stamp
{
public:
  explicit Init_FieldEvents_stamp(::rm_referee_ros2::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::FieldEvents stamp(::rm_referee_ros2::msg::FieldEvents::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::FieldEvents msg_;
};

class Init_FieldEvents_event_type
{
public:
  Init_FieldEvents_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldEvents_stamp event_type(::rm_referee_ros2::msg::FieldEvents::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_FieldEvents_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::FieldEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::FieldEvents>()
{
  return rm_referee_ros2::msg::builder::Init_FieldEvents_event_type();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_
