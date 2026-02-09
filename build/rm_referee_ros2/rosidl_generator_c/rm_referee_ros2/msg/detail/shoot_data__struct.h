// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__STRUCT_H_

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

/// Struct defined in msg/ShootData in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__ShootData
{
  /// 子弹类型: 1(17mm弹丸), 2(42mm弹丸)
  uint8_t bullet_type;
  /// 发射机构ID: 1,2为17mm, 3为42mm
  uint8_t shooter_id;
  /// 射频(Hz)
  uint8_t bullet_freq;
  /// 射速(m/s)
  float bullet_speed;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__ShootData;

// Struct for a sequence of rm_referee_ros2__msg__ShootData.
typedef struct rm_referee_ros2__msg__ShootData__Sequence
{
  rm_referee_ros2__msg__ShootData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__ShootData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
