// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice
#include "rm_referee_ros2/msg/detail/bullet_remaining__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rm_referee_ros2__msg__BulletRemaining__init(rm_referee_ros2__msg__BulletRemaining * msg)
{
  if (!msg) {
    return false;
  }
  // bullet_allowance_num_17_mm
  // bullet_allowance_num_42_mm
  // coin_remaining_num
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rm_referee_ros2__msg__BulletRemaining__fini(msg);
    return false;
  }
  return true;
}

void
rm_referee_ros2__msg__BulletRemaining__fini(rm_referee_ros2__msg__BulletRemaining * msg)
{
  if (!msg) {
    return;
  }
  // bullet_allowance_num_17_mm
  // bullet_allowance_num_42_mm
  // coin_remaining_num
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rm_referee_ros2__msg__BulletRemaining__are_equal(const rm_referee_ros2__msg__BulletRemaining * lhs, const rm_referee_ros2__msg__BulletRemaining * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bullet_allowance_num_17_mm
  if (lhs->bullet_allowance_num_17_mm != rhs->bullet_allowance_num_17_mm) {
    return false;
  }
  // bullet_allowance_num_42_mm
  if (lhs->bullet_allowance_num_42_mm != rhs->bullet_allowance_num_42_mm) {
    return false;
  }
  // coin_remaining_num
  if (lhs->coin_remaining_num != rhs->coin_remaining_num) {
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
rm_referee_ros2__msg__BulletRemaining__copy(
  const rm_referee_ros2__msg__BulletRemaining * input,
  rm_referee_ros2__msg__BulletRemaining * output)
{
  if (!input || !output) {
    return false;
  }
  // bullet_allowance_num_17_mm
  output->bullet_allowance_num_17_mm = input->bullet_allowance_num_17_mm;
  // bullet_allowance_num_42_mm
  output->bullet_allowance_num_42_mm = input->bullet_allowance_num_42_mm;
  // coin_remaining_num
  output->coin_remaining_num = input->coin_remaining_num;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rm_referee_ros2__msg__BulletRemaining *
rm_referee_ros2__msg__BulletRemaining__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__BulletRemaining * msg = (rm_referee_ros2__msg__BulletRemaining *)allocator.allocate(sizeof(rm_referee_ros2__msg__BulletRemaining), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_ros2__msg__BulletRemaining));
  bool success = rm_referee_ros2__msg__BulletRemaining__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_ros2__msg__BulletRemaining__destroy(rm_referee_ros2__msg__BulletRemaining * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_ros2__msg__BulletRemaining__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_ros2__msg__BulletRemaining__Sequence__init(rm_referee_ros2__msg__BulletRemaining__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__BulletRemaining * data = NULL;

  if (size) {
    data = (rm_referee_ros2__msg__BulletRemaining *)allocator.zero_allocate(size, sizeof(rm_referee_ros2__msg__BulletRemaining), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_ros2__msg__BulletRemaining__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_ros2__msg__BulletRemaining__fini(&data[i - 1]);
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
rm_referee_ros2__msg__BulletRemaining__Sequence__fini(rm_referee_ros2__msg__BulletRemaining__Sequence * array)
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
      rm_referee_ros2__msg__BulletRemaining__fini(&array->data[i]);
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

rm_referee_ros2__msg__BulletRemaining__Sequence *
rm_referee_ros2__msg__BulletRemaining__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_ros2__msg__BulletRemaining__Sequence * array = (rm_referee_ros2__msg__BulletRemaining__Sequence *)allocator.allocate(sizeof(rm_referee_ros2__msg__BulletRemaining__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_ros2__msg__BulletRemaining__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_ros2__msg__BulletRemaining__Sequence__destroy(rm_referee_ros2__msg__BulletRemaining__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_ros2__msg__BulletRemaining__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_ros2__msg__BulletRemaining__Sequence__are_equal(const rm_referee_ros2__msg__BulletRemaining__Sequence * lhs, const rm_referee_ros2__msg__BulletRemaining__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_ros2__msg__BulletRemaining__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_ros2__msg__BulletRemaining__Sequence__copy(
  const rm_referee_ros2__msg__BulletRemaining__Sequence * input,
  rm_referee_ros2__msg__BulletRemaining__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_ros2__msg__BulletRemaining);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_ros2__msg__BulletRemaining * data =
      (rm_referee_ros2__msg__BulletRemaining *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_ros2__msg__BulletRemaining__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_ros2__msg__BulletRemaining__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_ros2__msg__BulletRemaining__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
