// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_ros2:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_ros2/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_ros2
{

namespace msg
{

namespace builder
{

class Init_GameResult_stamp
{
public:
  explicit Init_GameResult_stamp(::rm_referee_ros2::msg::GameResult & msg)
  : msg_(msg)
  {}
  ::rm_referee_ros2::msg::GameResult stamp(::rm_referee_ros2::msg::GameResult::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameResult msg_;
};

class Init_GameResult_winner
{
public:
  Init_GameResult_winner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameResult_stamp winner(::rm_referee_ros2::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return Init_GameResult_stamp(msg_);
  }

private:
  ::rm_referee_ros2::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_ros2::msg::GameResult>()
{
  return rm_referee_ros2::msg::builder::Init_GameResult_winner();
}

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
