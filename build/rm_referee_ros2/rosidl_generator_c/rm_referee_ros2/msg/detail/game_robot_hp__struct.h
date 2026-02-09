// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_ros2:msg/GameRobotHp.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_

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

/// Struct defined in msg/GameRobotHp in the package rm_referee_ros2.
typedef struct rm_referee_ros2__msg__GameRobotHp
{
  /// 红方英雄血量
  uint16_t red_1_robot_hp;
  /// 红方工程血量
  uint16_t red_2_robot_hp;
  /// 红方步兵3血量
  uint16_t red_3_robot_hp;
  /// 红方步兵4血量
  uint16_t red_4_robot_hp;
  /// 红方步兵5血量
  uint16_t red_5_robot_hp;
  /// 红方哨兵血量
  uint16_t red_7_robot_hp;
  /// 红方前哨站血量
  uint16_t red_outpost_hp;
  /// 红方基地血量
  uint16_t red_base_hp;
  /// 蓝方英雄血量
  uint16_t blue_1_robot_hp;
  /// 蓝方工程血量
  uint16_t blue_2_robot_hp;
  /// 蓝方步兵3血量
  uint16_t blue_3_robot_hp;
  /// 蓝方步兵4血量
  uint16_t blue_4_robot_hp;
  /// 蓝方步兵5血量
  uint16_t blue_5_robot_hp;
  /// 蓝方哨兵血量
  uint16_t blue_7_robot_hp;
  /// 蓝方前哨站血量
  uint16_t blue_outpost_hp;
  /// 蓝方基地血量
  uint16_t blue_base_hp;
  /// 时间戳
  builtin_interfaces__msg__Time stamp;
} rm_referee_ros2__msg__GameRobotHp;

// Struct for a sequence of rm_referee_ros2__msg__GameRobotHp.
typedef struct rm_referee_ros2__msg__GameRobotHp__Sequence
{
  rm_referee_ros2__msg__GameRobotHp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_ros2__msg__GameRobotHp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
