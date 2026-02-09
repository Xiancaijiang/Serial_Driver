// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_

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

/// Struct defined in msg/RefereeWarning in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__RefereeWarning
{
  /// 警告等级：1（双方黄牌），2（黄牌），3（红牌），4（判负）
  uint8_t level;
  /// 违规机器人ID（双方黄牌和判负时，该值为0）
  uint8_t foul_robot_id;
  /// 该违规等级的违规次数（开局默认为0）
  uint8_t count;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__RefereeWarning;

// Struct for a sequence of rm_referee_ros2__msg__RefereeWarning.
typedef struct rm_referee_ros2__msg__RefereeWarning__Sequence
{
  rm_referee_ros2__msg__RefereeWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__RefereeWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
