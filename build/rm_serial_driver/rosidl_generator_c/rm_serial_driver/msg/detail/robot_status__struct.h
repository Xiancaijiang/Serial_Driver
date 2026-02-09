// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_serial_driver:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_SERIAL_DRIVER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define RM_SERIAL_DRIVER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/RobotStatus in the package rm_serial_driver.
typedef struct rm_serial_driver__msg__RobotStatus
{
  uint8_t robot_id;
  uint8_t robot_level;
  uint16_t current_hp;
  uint16_t maximum_hp;
  uint16_t shooter_barrel_cooling_value;
  uint16_t shooter_barrel_heat_limit;
  uint16_t chassis_power_limit;
  uint8_t power_management_gimbal_output;
  uint8_t power_management_chassis_output;
  uint8_t power_management_shooter_output;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_serial_driver__msg__RobotStatus;

// Struct for a sequence of rm_serial_driver__msg__RobotStatus.
typedef struct rm_serial_driver__msg__RobotStatus__Sequence
{
  rm_serial_driver__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_serial_driver__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_SERIAL_DRIVER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
