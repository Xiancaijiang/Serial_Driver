// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_serial_driver:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_SERIAL_DRIVER__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
#define RM_SERIAL_DRIVER__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_serial_driver/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_serial_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShootData & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_type
  {
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << ", ";
  }

  // member: shooter_id
  {
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << ", ";
  }

  // member: bullet_freq
  {
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << ", ";
  }

  // member: bullet_speed
  {
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
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
  const ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << "\n";
  }

  // member: shooter_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << "\n";
  }

  // member: bullet_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << "\n";
  }

  // member: bullet_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
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

inline std::string to_yaml(const ShootData & msg, bool use_flow_style = false)
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

}  // namespace rm_serial_driver

namespace rosidl_generator_traits
{

[[deprecated("use rm_serial_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_serial_driver::msg::ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_serial_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_serial_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_serial_driver::msg::ShootData & msg)
{
  return rm_serial_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_serial_driver::msg::ShootData>()
{
  return "rm_serial_driver::msg::ShootData";
}

template<>
inline const char * name<rm_serial_driver::msg::ShootData>()
{
  return "rm_serial_driver/msg/ShootData";
}

template<>
struct has_fixed_size<rm_serial_driver::msg::ShootData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_serial_driver::msg::ShootData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_serial_driver::msg::ShootData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_SERIAL_DRIVER__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
