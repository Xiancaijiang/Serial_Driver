// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_ros2:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_ros2/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_referee_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_type
  {
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << ", ";
  }

  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: sync_time_stamp
  {
    out << "sync_time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_time_stamp, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: sync_time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_time_stamp, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_referee_ros2

namespace rosidl_generator_traits
{

[[deprecated("use rm_referee_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_referee_ros2::msg::GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_ros2::msg::GameStatus & msg)
{
  return rm_referee_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_ros2::msg::GameStatus>()
{
  return "rm_referee_ros2::msg::GameStatus";
}

template<>
inline const char * name<rm_referee_ros2::msg::GameStatus>()
{
  return "rm_referee_ros2/msg/GameStatus";
}

template<>
struct has_fixed_size<rm_referee_ros2::msg::GameStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_referee_ros2::msg::GameStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_referee_ros2::msg::GameStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
