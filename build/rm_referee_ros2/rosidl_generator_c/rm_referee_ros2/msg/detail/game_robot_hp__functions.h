// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_referee_ros2:msg/GameRobotHp.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__FUNCTIONS_H_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rm_referee_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "rm_referee_ros2/msg/detail/game_robot_hp__struct.h"

/// Initialize msg/GameRobotHp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_referee_ros2__msg__GameRobotHp
 * )) before or use
 * rm_referee_ros2__msg__GameRobotHp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__init(rm_referee_ros2__msg__GameRobotHp * msg);

/// Finalize msg/GameRobotHp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
void
rm_referee_ros2__msg__GameRobotHp__fini(rm_referee_ros2__msg__GameRobotHp * msg);

/// Create msg/GameRobotHp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_referee_ros2__msg__GameRobotHp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
rm_referee_ros2__msg__GameRobotHp *
rm_referee_ros2__msg__GameRobotHp__create();

/// Destroy msg/GameRobotHp message.
/**
 * It calls
 * rm_referee_ros2__msg__GameRobotHp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
void
rm_referee_ros2__msg__GameRobotHp__destroy(rm_referee_ros2__msg__GameRobotHp * msg);

/// Check for msg/GameRobotHp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__are_equal(const rm_referee_ros2__msg__GameRobotHp * lhs, const rm_referee_ros2__msg__GameRobotHp * rhs);

/// Copy a msg/GameRobotHp message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__copy(
  const rm_referee_ros2__msg__GameRobotHp * input,
  rm_referee_ros2__msg__GameRobotHp * output);

/// Initialize array of msg/GameRobotHp messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_referee_ros2__msg__GameRobotHp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__Sequence__init(rm_referee_ros2__msg__GameRobotHp__Sequence * array, size_t size);

/// Finalize array of msg/GameRobotHp messages.
/**
 * It calls
 * rm_referee_ros2__msg__GameRobotHp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
void
rm_referee_ros2__msg__GameRobotHp__Sequence__fini(rm_referee_ros2__msg__GameRobotHp__Sequence * array);

/// Create array of msg/GameRobotHp messages.
/**
 * It allocates the memory for the array and calls
 * rm_referee_ros2__msg__GameRobotHp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
rm_referee_ros2__msg__GameRobotHp__Sequence *
rm_referee_ros2__msg__GameRobotHp__Sequence__create(size_t size);

/// Destroy array of msg/GameRobotHp messages.
/**
 * It calls
 * rm_referee_ros2__msg__GameRobotHp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
void
rm_referee_ros2__msg__GameRobotHp__Sequence__destroy(rm_referee_ros2__msg__GameRobotHp__Sequence * array);

/// Check for msg/GameRobotHp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__Sequence__are_equal(const rm_referee_ros2__msg__GameRobotHp__Sequence * lhs, const rm_referee_ros2__msg__GameRobotHp__Sequence * rhs);

/// Copy an array of msg/GameRobotHp messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_ros2
bool
rm_referee_ros2__msg__GameRobotHp__Sequence__copy(
  const rm_referee_ros2__msg__GameRobotHp__Sequence * input,
  rm_referee_ros2__msg__GameRobotHp__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_ROBOT_HP__FUNCTIONS_H_
