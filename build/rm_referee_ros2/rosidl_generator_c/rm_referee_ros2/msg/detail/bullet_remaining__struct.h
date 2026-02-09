// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_

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

/// Struct defined in msg/BulletRemaining in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__BulletRemaining
{
  /// 17mm子弹剩余发射数目
  uint16_t bullet_allowance_num_17_mm;
  /// 42mm子弹剩余发射数目
  uint16_t bullet_allowance_num_42_mm;
  /// 剩余金币数
  uint16_t coin_remaining_num;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__BulletRemaining;

// Struct for a sequence of rm_referee_ros2__msg__BulletRemaining.
typedef struct rm_referee_ros2__msg__BulletRemaining__Sequence
{
  rm_referee_ros2__msg__BulletRemaining * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__BulletRemaining__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
