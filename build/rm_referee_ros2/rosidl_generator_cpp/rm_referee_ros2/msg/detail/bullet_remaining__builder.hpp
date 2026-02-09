// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_BulletRemaining_stamp
{
public:
  explicit Init_BulletRemaining_stamp(::rm_referee_ros2::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::BulletRemaining stamp(::rm_referee_ros2::msg::BulletRemaining::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_coin_remaining_num
{
public:
  explicit Init_BulletRemaining_coin_remaining_num(::rm_referee_ros2::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_stamp coin_remaining_num(::rm_referee_ros2::msg::BulletRemaining::_coin_remaining_num_type arg)
  {
    msg_.coin_remaining_num = std::move(arg);
    return Init_BulletRemaining_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_allowance_num_42_mm
{
public:
  explicit Init_BulletRemaining_bullet_allowance_num_42_mm(::rm_referee_ros2::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_coin_remaining_num bullet_allowance_num_42_mm(::rm_referee_ros2::msg::BulletRemaining::_bullet_allowance_num_42_mm_type arg)
  {
    msg_.bullet_allowance_num_42_mm = std::move(arg);
    return Init_BulletRemaining_coin_remaining_num(msg_);
  }

private:
  ::rm_referee_ros2::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_allowance_num_17_mm
{
public:
  Init_BulletRemaining_bullet_allowance_num_17_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulletRemaining_bullet_allowance_num_42_mm bullet_allowance_num_17_mm(::rm_referee_ros2::msg::BulletRemaining::_bullet_allowance_num_17_mm_type arg)
  {
    msg_.bullet_allowance_num_17_mm = std::move(arg);
    return Init_BulletRemaining_bullet_allowance_num_42_mm(msg_);
  }

private:
  ::rm_referee_ros2::msg::BulletRemaining msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::BulletRemaining>()
{
  return rm_referee_ros2::msg::builder::Init_BulletRemaining_bullet_allowance_num_17_mm();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
