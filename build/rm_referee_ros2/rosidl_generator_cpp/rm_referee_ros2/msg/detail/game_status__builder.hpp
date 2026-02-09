// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_GameStatus_stamp
{
public:
  explicit Init_GameStatus_stamp(::rm_referee_ros2::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::GameStatus stamp(::rm_referee_ros2::msg::GameStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameStatus msg_;
};

class Init_GameStatus_sync_time_stamp
{
public:
  explicit Init_GameStatus_sync_time_stamp(::rm_referee_ros2::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stamp sync_time_stamp(::rm_referee_ros2::msg::GameStatus::_sync_time_stamp_type arg)
  {
    msg_.sync_time_stamp = std::move(arg);
    return Init_GameStatus_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::rm_referee_ros2::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_time_stamp stage_remain_time(::rm_referee_ros2::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_time_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::rm_referee_ros2::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::rm_referee_ros2::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  Init_GameStatus_game_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_progress game_type(::rm_referee_ros2::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::GameStatus>()
{
  return rm_referee_ros2::msg::builder::Init_GameStatus_game_type();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
