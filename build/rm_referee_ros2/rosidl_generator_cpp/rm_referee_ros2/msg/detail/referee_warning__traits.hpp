// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_ros2:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_ros2/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_referee_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RefereeWarning & msg,
  std::ostream & out)
{
  out << "{";
  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: foul_robot_id
  {
    out << "foul_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.foul_robot_id, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
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
  const RefereeWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: foul_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foul_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.foul_robot_id, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
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

inline std::string to_yaml(const RefereeWarning & msg, bool use_flow_style = false)
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
  const rm_referee_ros2::msg::RefereeWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_ros2::msg::RefereeWarning & msg)
{
  return rm_referee_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_ros2::msg::RefereeWarning>()
{
  return "rm_referee_ros2::msg::RefereeWarning";
}

template<>
inline const char * name<rm_referee_ros2::msg::RefereeWarning>()
{
  return "rm_referee_ros2/msg/RefereeWarning";
}

template<>
struct has_fixed_size<rm_referee_ros2::msg::RefereeWarning>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_referee_ros2::msg::RefereeWarning>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_referee_ros2::msg::RefereeWarning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__TRAITS_HPP_
