// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__STRUCT_H_

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

/// Struct defined in msg/RobotPos in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__RobotPos
{
  /// 机器人位置x坐标，单位：米
  float x;
  /// 机器人位置y坐标，单位：米
  float y;
  /// 机器人朝向角度，单位：度，正北为0度
  float angle;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__RobotPos;

// Struct for a sequence of rm_referee_ros2__msg__RobotPos.
typedef struct rm_referee_ros2__msg__RobotPos__Sequence
{
  rm_referee_ros2__msg__RobotPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__RobotPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_POS__STRUCT_H_
