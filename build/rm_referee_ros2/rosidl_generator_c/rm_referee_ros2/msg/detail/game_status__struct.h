// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__STRUCT_H_

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

/// Struct defined in msg/GameStatus in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__GameStatus
{
  /// 比赛类型
  uint8_t game_type;
  /// 比赛阶段
  uint8_t game_progress;
  /// 当前阶段剩余时间，单位s
  uint16_t stage_remain_time;
  /// 机器人接收到该指令的精确 Unix 时间
  uint64_t sync_time_stamp;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__GameStatus;

// Struct for a sequence of rm_referee_ros2__msg__GameStatus.
typedef struct rm_referee_ros2__msg__GameStatus__Sequence
{
  rm_referee_ros2__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_STATUS__STRUCT_H_
