// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/spartn_key_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_ubx_msgs__msg__SpartnKeyInfo__init(ublox_ubx_msgs__msg__SpartnKeyInfo * msg)
{
  if (!msg) {
    return false;
  }
  // reserved1
  // key_length_bytes
  // valid_from_wno
  // valid_from_tow
  return true;
}

void
ublox_ubx_msgs__msg__SpartnKeyInfo__fini(ublox_ubx_msgs__msg__SpartnKeyInfo * msg)
{
  if (!msg) {
    return;
  }
  // reserved1
  // key_length_bytes
  // valid_from_wno
  // valid_from_tow
}

bool
ublox_ubx_msgs__msg__SpartnKeyInfo__are_equal(const ublox_ubx_msgs__msg__SpartnKeyInfo * lhs, const ublox_ubx_msgs__msg__SpartnKeyInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // key_length_bytes
  if (lhs->key_length_bytes != rhs->key_length_bytes) {
    return false;
  }
  // valid_from_wno
  if (lhs->valid_from_wno != rhs->valid_from_wno) {
    return false;
  }
  // valid_from_tow
  if (lhs->valid_from_tow != rhs->valid_from_tow) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__SpartnKeyInfo__copy(
  const ublox_ubx_msgs__msg__SpartnKeyInfo * input,
  ublox_ubx_msgs__msg__SpartnKeyInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // reserved1
  output->reserved1 = input->reserved1;
  // key_length_bytes
  output->key_length_bytes = input->key_length_bytes;
  // valid_from_wno
  output->valid_from_wno = input->valid_from_wno;
  // valid_from_tow
  output->valid_from_tow = input->valid_from_tow;
  return true;
}

ublox_ubx_msgs__msg__SpartnKeyInfo *
ublox_ubx_msgs__msg__SpartnKeyInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__SpartnKeyInfo * msg = (ublox_ubx_msgs__msg__SpartnKeyInfo *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__SpartnKeyInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__SpartnKeyInfo));
  bool success = ublox_ubx_msgs__msg__SpartnKeyInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__SpartnKeyInfo__destroy(ublox_ubx_msgs__msg__SpartnKeyInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__SpartnKeyInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__init(ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__SpartnKeyInfo * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__SpartnKeyInfo *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__SpartnKeyInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__SpartnKeyInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__SpartnKeyInfo__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__fini(ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * array)
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
      ublox_ubx_msgs__msg__SpartnKeyInfo__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence *
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * array = (ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__destroy(ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__are_equal(const ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * lhs, const ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__SpartnKeyInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__copy(
  const ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * input,
  ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__SpartnKeyInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__SpartnKeyInfo * data =
      (ublox_ubx_msgs__msg__SpartnKeyInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__SpartnKeyInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__SpartnKeyInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__SpartnKeyInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
