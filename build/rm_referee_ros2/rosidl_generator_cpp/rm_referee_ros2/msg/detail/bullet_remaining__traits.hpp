// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_ros2/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_referee_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_allowance_num_17_mm
  {
    out << "bullet_allowance_num_17_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_allowance_num_17_mm, out);
    out << ", ";
  }

  // member: bullet_allowance_num_42_mm
  {
    out << "bullet_allowance_num_42_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_allowance_num_42_mm, out);
    out << ", ";
  }

  // member: coin_remaining_num
  {
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
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
  const BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_allowance_num_17_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_allowance_num_17_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_allowance_num_17_mm, out);
    out << "\n";
  }

  // member: bullet_allowance_num_42_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_allowance_num_42_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_allowance_num_42_mm, out);
    out << "\n";
  }

  // member: coin_remaining_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
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

inline std::string to_yaml(const BulletRemaining & msg, bool use_flow_style = false)
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
  const rm_referee_ros2::msg::BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_ros2::msg::BulletRemaining & msg)
{
  return rm_referee_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_ros2::msg::BulletRemaining>()
{
  return "rm_referee_ros2::msg::BulletRemaining";
}

template<>
inline const char * name<rm_referee_ros2::msg::BulletRemaining>()
{
  return "rm_referee_ros2/msg/BulletRemaining";
}

template<>
struct has_fixed_size<rm_referee_ros2::msg::BulletRemaining>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_referee_ros2::msg::BulletRemaining>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_referee_ros2::msg::BulletRemaining>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
