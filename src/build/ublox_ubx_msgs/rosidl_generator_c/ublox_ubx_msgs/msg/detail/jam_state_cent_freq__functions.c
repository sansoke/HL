// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/JamStateCentFreq.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/jam_state_cent_freq__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_ubx_msgs__msg__JamStateCentFreq__init(ublox_ubx_msgs__msg__JamStateCentFreq * msg)
{
  if (!msg) {
    return false;
  }
  // cent_freq
  // jammed
  return true;
}

void
ublox_ubx_msgs__msg__JamStateCentFreq__fini(ublox_ubx_msgs__msg__JamStateCentFreq * msg)
{
  if (!msg) {
    return;
  }
  // cent_freq
  // jammed
}

bool
ublox_ubx_msgs__msg__JamStateCentFreq__are_equal(const ublox_ubx_msgs__msg__JamStateCentFreq * lhs, const ublox_ubx_msgs__msg__JamStateCentFreq * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cent_freq
  if (lhs->cent_freq != rhs->cent_freq) {
    return false;
  }
  // jammed
  if (lhs->jammed != rhs->jammed) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__JamStateCentFreq__copy(
  const ublox_ubx_msgs__msg__JamStateCentFreq * input,
  ublox_ubx_msgs__msg__JamStateCentFreq * output)
{
  if (!input || !output) {
    return false;
  }
  // cent_freq
  output->cent_freq = input->cent_freq;
  // jammed
  output->jammed = input->jammed;
  return true;
}

ublox_ubx_msgs__msg__JamStateCentFreq *
ublox_ubx_msgs__msg__JamStateCentFreq__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__JamStateCentFreq * msg = (ublox_ubx_msgs__msg__JamStateCentFreq *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__JamStateCentFreq), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__JamStateCentFreq));
  bool success = ublox_ubx_msgs__msg__JamStateCentFreq__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__JamStateCentFreq__destroy(ublox_ubx_msgs__msg__JamStateCentFreq * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__JamStateCentFreq__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__init(ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__JamStateCentFreq * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__JamStateCentFreq *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__JamStateCentFreq), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__JamStateCentFreq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__JamStateCentFreq__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__fini(ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * array)
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
      ublox_ubx_msgs__msg__JamStateCentFreq__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__JamStateCentFreq__Sequence *
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * array = (ublox_ubx_msgs__msg__JamStateCentFreq__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__JamStateCentFreq__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__destroy(ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__are_equal(const ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * lhs, const ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__JamStateCentFreq__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__JamStateCentFreq__Sequence__copy(
  const ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * input,
  ublox_ubx_msgs__msg__JamStateCentFreq__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__JamStateCentFreq);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__JamStateCentFreq * data =
      (ublox_ubx_msgs__msg__JamStateCentFreq *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__JamStateCentFreq__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__JamStateCentFreq__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__JamStateCentFreq__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
