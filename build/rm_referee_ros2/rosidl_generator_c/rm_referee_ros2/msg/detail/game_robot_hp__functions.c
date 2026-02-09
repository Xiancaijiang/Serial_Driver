// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_ros2:msg/GameRobotHp.idl
// generated code does not contain a copyright notice
#include "rm_referee_ros2/msg/detail/game_robot_hp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rm_referee_ros2__msg__GameRobotHp__init(rm_referee_ros2__msg__GameRobotHp * msg)
{
  if (!msg) {
    return false;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rm_referee_ros2__msg__GameRobotHp__fini(msg);
    return false;
  }
  return true;
}

void
rm_referee_ros2__msg__GameRobotHp__fini(rm_referee_ros2__msg__GameRobotHp * msg)
{
  if (!msg) {
    return;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rm_referee_ros2__msg__GameRobotHp__are_equal(const rm_referee_ros2__msg__GameRobotHp * lhs, const rm_referee_ros2__msg__GameRobotHp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_1_robot_hp
  if (lhs->red_1_robot_hp != rhs->red_1_robot_hp) {
    return false;
  }
  // red_2_robot_hp
  if (lhs->red_2_robot_hp != rhs->red_2_robot_hp) {
    return false;
  }
  // red_3_robot_hp
  if (lhs->red_3_robot_hp != rhs->red_3_robot_hp) {
    return false;
  }
  // red_4_robot_hp
  if (lhs->red_4_robot_hp != rhs->red_4_robot_hp) {
    return false;
  }
  // red_5_robot_hp
  if (lhs->red_5_robot_hp != rhs->red_5_robot_hp) {
    return false;
  }
  // red_7_robot_hp
  if (lhs->red_7_robot_hp != rhs->red_7_robot_hp) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_1_robot_hp
  if (lhs->blue_1_robot_hp != rhs->blue_1_robot_hp) {
    return false;
  }
  // blue_2_robot_hp
  if (lhs->blue_2_robot_hp != rhs->blue_2_robot_hp) {
    return false;
  }
  // blue_3_robot_hp
  if (lhs->blue_3_robot_hp != rhs->blue_3_robot_hp) {
    return false;
  }
  // blue_4_robot_hp
  if (lhs->blue_4_robot_hp != rhs->blue_4_robot_hp) {
    return false;
  }
  // blue_5_robot_hp
  if (lhs->blue_5_robot_hp != rhs->blue_5_robot_hp) {
    return false;
  }
  // blue_7_robot_hp
  if (lhs->blue_7_robot_hp != rhs->blue_7_robot_hp) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rm_referee_ros2__msg__GameRobotHp__copy(
  const rm_referee_ros2__msg__GameRobotHp * input,
  rm_referee_ros2__msg__GameRobotHp * output)
{
  if (!input || !output) {
    return false;
  }
  // red_1_robot_hp
  output->red_1_robot_hp = input->red_1_robot_hp;
  // red_2_robot_hp
  output->red_2_robot_hp = input->red_2_robot_hp;
  // red_3_robot_hp
  output->red_3_robot_hp = input->red_3_robot_hp;
  // red_4_robot_hp
  output->red_4_robot_hp = input->red_4_robot_hp;
  // red_5_robot_hp
  output->red_5_robot_hp = input->red_5_robot_hp;
  // red_7_robot_hp
  output->red_7_robot_hp = input->red_7_robot_hp;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1_robot_hp
  output->blue_1_robot_hp = input->blue_1_robot_hp;
  // blue_2_robot_hp
  output->blue_2_robot_hp = input->blue_2_robot_hp;
  // blue_3_robot_hp
  output->blue_3_robot_hp = input->blue_3_robot_hp;
  // blue_4_robot_hp
  output->blue_4_robot_hp = input->blue_4_robot_hp;
  // blue_5_robot_hp
  output->blue_5_robot_hp = input->blue_5_robot_hp;
  // blue_7_robot_hp
  output->blue_7_robot_hp = input->blue_7_robot_hp;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rm_referee_ros2__msg__GameRobotHp *
rm_referee_ros2__msg__GameRobotHp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__GameRobotHp * msg = (rm_referee_ros2__msg__GameRobotHp *)allocator.allocate(sizeof(rm_referee_ros2__msg__GameRobotHp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_ros2__msg__GameRobotHp));
  bool success = rm_referee_ros2__msg__GameRobotHp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_ros2__msg__GameRobotHp__destroy(rm_referee_ros2__msg__GameRobotHp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_ros2__msg__GameRobotHp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_ros2__msg__GameRobotHp__Sequence__init(rm_referee_ros2__msg__GameRobotHp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__GameRobotHp * data = NULL;

  if (size) {
    data = (rm_referee_ros2__msg__GameRobotHp *)allocator.zero_allocate(size, sizeof(rm_referee_ros2__msg__GameRobotHp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_ros2__msg__GameRobotHp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_ros2__msg__GameRobotHp__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_referee_ros2__msg__GameRobotHp__Sequence__fini(rm_referee_ros2__msg__GameRobotHp__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_referee_ros2__msg__GameRobotHp__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_referee_ros2__msg__GameRobotHp__Sequence *
rm_referee_ros2__msg__GameRobotHp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__GameRobotHp__Sequence * array = (rm_referee_ros2__msg__GameRobotHp__Sequence *)allocator.allocate(sizeof(rm_referee_ros2__msg__GameRobotHp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_ros2__msg__GameRobotHp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_ros2__msg__GameRobotHp__Sequence__destroy(rm_referee_ros2__msg__GameRobotHp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_ros2__msg__GameRobotHp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_ros2__msg__GameRobotHp__Sequence__are_equal(const rm_referee_ros2__msg__GameRobotHp__Sequence * lhs, const rm_referee_ros2__msg__GameRobotHp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_ros2__msg__GameRobotHp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_ros2__msg__GameRobotHp__Sequence__copy(
  const rm_referee_ros2__msg__GameRobotHp__Sequence * input,
  rm_referee_ros2__msg__GameRobotHp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_ros2__msg__GameRobotHp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_ros2__msg__GameRobotHp * data =
      (rm_referee_ros2__msg__GameRobotHp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_ros2__msg__GameRobotHp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_ros2__msg__GameRobotHp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_ros2__msg__GameRobotHp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
