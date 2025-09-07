// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/ubx_nav_svin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ublox_ubx_msgs__msg__UBXNavSvin__init(ublox_ubx_msgs__msg__UBXNavSvin * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ublox_ubx_msgs__msg__UBXNavSvin__fini(msg);
    return false;
  }
  // version
  // itow
  // dur
  // mean_x
  // mean_y
  // mean_z
  // mean_x_hp
  // mean_y_hp
  // mean_z_hp
  // mean_acc
  // obs
  // valid
  // active
  return true;
}

void
ublox_ubx_msgs__msg__UBXNavSvin__fini(ublox_ubx_msgs__msg__UBXNavSvin * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  // itow
  // dur
  // mean_x
  // mean_y
  // mean_z
  // mean_x_hp
  // mean_y_hp
  // mean_z_hp
  // mean_acc
  // obs
  // valid
  // active
}

bool
ublox_ubx_msgs__msg__UBXNavSvin__are_equal(const ublox_ubx_msgs__msg__UBXNavSvin * lhs, const ublox_ubx_msgs__msg__UBXNavSvin * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // itow
  if (lhs->itow != rhs->itow) {
    return false;
  }
  // dur
  if (lhs->dur != rhs->dur) {
    return false;
  }
  // mean_x
  if (lhs->mean_x != rhs->mean_x) {
    return false;
  }
  // mean_y
  if (lhs->mean_y != rhs->mean_y) {
    return false;
  }
  // mean_z
  if (lhs->mean_z != rhs->mean_z) {
    return false;
  }
  // mean_x_hp
  if (lhs->mean_x_hp != rhs->mean_x_hp) {
    return false;
  }
  // mean_y_hp
  if (lhs->mean_y_hp != rhs->mean_y_hp) {
    return false;
  }
  // mean_z_hp
  if (lhs->mean_z_hp != rhs->mean_z_hp) {
    return false;
  }
  // mean_acc
  if (lhs->mean_acc != rhs->mean_acc) {
    return false;
  }
  // obs
  if (lhs->obs != rhs->obs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXNavSvin__copy(
  const ublox_ubx_msgs__msg__UBXNavSvin * input,
  ublox_ubx_msgs__msg__UBXNavSvin * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // version
  output->version = input->version;
  // itow
  output->itow = input->itow;
  // dur
  output->dur = input->dur;
  // mean_x
  output->mean_x = input->mean_x;
  // mean_y
  output->mean_y = input->mean_y;
  // mean_z
  output->mean_z = input->mean_z;
  // mean_x_hp
  output->mean_x_hp = input->mean_x_hp;
  // mean_y_hp
  output->mean_y_hp = input->mean_y_hp;
  // mean_z_hp
  output->mean_z_hp = input->mean_z_hp;
  // mean_acc
  output->mean_acc = input->mean_acc;
  // obs
  output->obs = input->obs;
  // valid
  output->valid = input->valid;
  // active
  output->active = input->active;
  return true;
}

ublox_ubx_msgs__msg__UBXNavSvin *
ublox_ubx_msgs__msg__UBXNavSvin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXNavSvin * msg = (ublox_ubx_msgs__msg__UBXNavSvin *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXNavSvin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__UBXNavSvin));
  bool success = ublox_ubx_msgs__msg__UBXNavSvin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__UBXNavSvin__destroy(ublox_ubx_msgs__msg__UBXNavSvin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__UBXNavSvin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__init(ublox_ubx_msgs__msg__UBXNavSvin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXNavSvin * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__UBXNavSvin *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__UBXNavSvin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__UBXNavSvin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__UBXNavSvin__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__fini(ublox_ubx_msgs__msg__UBXNavSvin__Sequence * array)
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
      ublox_ubx_msgs__msg__UBXNavSvin__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__UBXNavSvin__Sequence *
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXNavSvin__Sequence * array = (ublox_ubx_msgs__msg__UBXNavSvin__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXNavSvin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__UBXNavSvin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__destroy(ublox_ubx_msgs__msg__UBXNavSvin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__UBXNavSvin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__are_equal(const ublox_ubx_msgs__msg__UBXNavSvin__Sequence * lhs, const ublox_ubx_msgs__msg__UBXNavSvin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXNavSvin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXNavSvin__Sequence__copy(
  const ublox_ubx_msgs__msg__UBXNavSvin__Sequence * input,
  ublox_ubx_msgs__msg__UBXNavSvin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__UBXNavSvin);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__UBXNavSvin * data =
      (ublox_ubx_msgs__msg__UBXNavSvin *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__UBXNavSvin__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__UBXNavSvin__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXNavSvin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
