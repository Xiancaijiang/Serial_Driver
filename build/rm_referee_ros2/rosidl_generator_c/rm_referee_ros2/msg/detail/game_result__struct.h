// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_H_

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

/// Struct defined in msg/GameResult in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__GameResult
{
  /// 获胜方 0:平局 1:红方胜利 2:蓝方胜利
  uint8_t winner;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__GameResult;

// Struct for a sequence of rm_referee_ros2__msg__GameResult.
typedef struct rm_referee_ros2__msg__GameResult__Sequence
{
  rm_referee_ros2__msg__GameResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__GameResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_H_
