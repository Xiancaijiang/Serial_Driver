// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_H_

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

/// Struct defined in msg/RobotHurt in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__RobotHurt
{
  /// 受击装甲板ID：0-3：前后左右装甲板，4：上装甲板，5：下装甲板
  uint8_t armor_id;
  /// 伤害类型：0：装甲板伤害，1：模块掉线，2：超射速，3：超热量，4：超功率，5：撞击
  uint8_t hurt_type;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__RobotHurt;

// Struct for a sequence of rm_referee_ros2__msg__RobotHurt.
typedef struct rm_referee_ros2__msg__RobotHurt__Sequence
{
  rm_referee_ros2__msg__RobotHurt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__RobotHurt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
