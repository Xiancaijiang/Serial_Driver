// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_referee_ros2/msg/detail/bullet_remaining__rosidl_typesupport_introspection_c.h"
#include "rm_referee_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_referee_ros2/msg/detail/bullet_remaining__functions.h"
#include "rm_referee_ros2/msg/detail/bullet_remaining__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_referee_ros2__msg__BulletRemaining__init(message_memory);
}

void rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_fini_function(void * message_memory)
{
  rm_referee_ros2__msg__BulletRemaining__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_member_array[4] = {
  {
    "bullet_allowance_num_17_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_ros2__msg__BulletRemaining, bullet_allowance_num_17_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bullet_allowance_num_42_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_ros2__msg__BulletRemaining, bullet_allowance_num_42_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coin_remaining_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_ros2__msg__BulletRemaining, coin_remaining_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_ros2__msg__BulletRemaining, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_members = {
  "rm_referee_ros2__msg",  // message namespace
  "BulletRemaining",  // message name
  4,  // number of fields
  sizeof(rm_referee_ros2__msg__BulletRemaining),
  rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_member_array,  // message members
  rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_type_support_handle = {
  0,
  &rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_referee_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_referee_ros2, msg, BulletRemaining)() {
  rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_type_support_handle.typesupport_identifier) {
    rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_referee_ros2__msg__BulletRemaining__rosidl_typesupport_introspection_c__BulletRemaining_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
