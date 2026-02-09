// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_ros2:msg/RobotHurt.idl
// generated code does not contain a copyright notice
#include "rm_referee_ros2/msg/detail/robot_hurt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rm_referee_ros2__msg__RobotHurt__init(rm_referee_ros2__msg__RobotHurt * msg)
{
  if (!msg) {
    return false;
  }
  // armor_id
  // hurt_type
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rm_referee_ros2__msg__RobotHurt__fini(msg);
    return false;
  }
  return true;
}

void
rm_referee_ros2__msg__RobotHurt__fini(rm_referee_ros2__msg__RobotHurt * msg)
{
  if (!msg) {
    return;
  }
  // armor_id
  // hurt_type
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rm_referee_ros2__msg__RobotHurt__are_equal(const rm_referee_ros2__msg__RobotHurt * lhs, const rm_referee_ros2__msg__RobotHurt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // armor_id
  if (lhs->armor_id != rhs->armor_id) {
    return false;
  }
  // hurt_type
  if (lhs->hurt_type != rhs->hurt_type) {
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
rm_referee_ros2__msg__RobotHurt__copy(
  const rm_referee_ros2__msg__RobotHurt * input,
  rm_referee_ros2__msg__RobotHurt * output)
{
  if (!input || !output) {
    return false;
  }
  // armor_id
  output->armor_id = input->armor_id;
  // hurt_type
  output->hurt_type = input->hurt_type;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rm_referee_ros2__msg__RobotHurt *
rm_referee_ros2__msg__RobotHurt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__RobotHurt * msg = (rm_referee_ros2__msg__RobotHurt *)allocator.allocate(sizeof(rm_referee_ros2__msg__RobotHurt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_ros2__msg__RobotHurt));
  bool success = rm_referee_ros2__msg__RobotHurt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_ros2__msg__RobotHurt__destroy(rm_referee_ros2__msg__RobotHurt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_ros2__msg__RobotHurt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_ros2__msg__RobotHurt__Sequence__init(rm_referee_ros2__msg__RobotHurt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__RobotHurt * data = NULL;

  if (size) {
    data = (rm_referee_ros2__msg__RobotHurt *)allocator.zero_allocate(size, sizeof(rm_referee_ros2__msg__RobotHurt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_ros2__msg__RobotHurt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_ros2__msg__RobotHurt__fini(&data[i - 1]);
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
rm_referee_ros2__msg__RobotHurt__Sequence__fini(rm_referee_ros2__msg__RobotHurt__Sequence * array)
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
      rm_referee_ros2__msg__RobotHurt__fini(&array->data[i]);
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

rm_referee_ros2__msg__RobotHurt__Sequence *
rm_referee_ros2__msg__RobotHurt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__RobotHurt__Sequence * array = (rm_referee_ros2__msg__RobotHurt__Sequence *)allocator.allocate(sizeof(rm_referee_ros2__msg__RobotHurt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_ros2__msg__RobotHurt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_ros2__msg__RobotHurt__Sequence__destroy(rm_referee_ros2__msg__RobotHurt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_ros2__msg__RobotHurt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_ros2__msg__RobotHurt__Sequence__are_equal(const rm_referee_ros2__msg__RobotHurt__Sequence * lhs, const rm_referee_ros2__msg__RobotHurt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_ros2__msg__RobotHurt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_ros2__msg__RobotHurt__Sequence__copy(
  const rm_referee_ros2__msg__RobotHurt__Sequence * input,
  rm_referee_ros2__msg__RobotHurt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_ros2__msg__RobotHurt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_ros2__msg__RobotHurt * data =
      (rm_referee_ros2__msg__RobotHurt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_ros2__msg__RobotHurt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_ros2__msg__RobotHurt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_ros2__msg__RobotHurt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
