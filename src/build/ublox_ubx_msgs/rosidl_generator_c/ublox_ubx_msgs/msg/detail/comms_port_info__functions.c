// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/comms_port_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_ubx_msgs__msg__CommsPortInfo__init(ublox_ubx_msgs__msg__CommsPortInfo * msg)
{
  if (!msg) {
    return false;
  }
  // port_id
  // tx_pending
  // tx_bytes
  // tx_usage
  // tx_peak_usage
  // rx_pending
  // rx_bytes
  // rx_usage
  // rx_peak_usage
  // overrun_errs
  // msgs
  // skipped
  return true;
}

void
ublox_ubx_msgs__msg__CommsPortInfo__fini(ublox_ubx_msgs__msg__CommsPortInfo * msg)
{
  if (!msg) {
    return;
  }
  // port_id
  // tx_pending
  // tx_bytes
  // tx_usage
  // tx_peak_usage
  // rx_pending
  // rx_bytes
  // rx_usage
  // rx_peak_usage
  // overrun_errs
  // msgs
  // skipped
}

bool
ublox_ubx_msgs__msg__CommsPortInfo__are_equal(const ublox_ubx_msgs__msg__CommsPortInfo * lhs, const ublox_ubx_msgs__msg__CommsPortInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // port_id
  if (lhs->port_id != rhs->port_id) {
    return false;
  }
  // tx_pending
  if (lhs->tx_pending != rhs->tx_pending) {
    return false;
  }
  // tx_bytes
  if (lhs->tx_bytes != rhs->tx_bytes) {
    return false;
  }
  // tx_usage
  if (lhs->tx_usage != rhs->tx_usage) {
    return false;
  }
  // tx_peak_usage
  if (lhs->tx_peak_usage != rhs->tx_peak_usage) {
    return false;
  }
  // rx_pending
  if (lhs->rx_pending != rhs->rx_pending) {
    return false;
  }
  // rx_bytes
  if (lhs->rx_bytes != rhs->rx_bytes) {
    return false;
  }
  // rx_usage
  if (lhs->rx_usage != rhs->rx_usage) {
    return false;
  }
  // rx_peak_usage
  if (lhs->rx_peak_usage != rhs->rx_peak_usage) {
    return false;
  }
  // overrun_errs
  if (lhs->overrun_errs != rhs->overrun_errs) {
    return false;
  }
  // msgs
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->msgs[i] != rhs->msgs[i]) {
      return false;
    }
  }
  // skipped
  if (lhs->skipped != rhs->skipped) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__CommsPortInfo__copy(
  const ublox_ubx_msgs__msg__CommsPortInfo * input,
  ublox_ubx_msgs__msg__CommsPortInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // port_id
  output->port_id = input->port_id;
  // tx_pending
  output->tx_pending = input->tx_pending;
  // tx_bytes
  output->tx_bytes = input->tx_bytes;
  // tx_usage
  output->tx_usage = input->tx_usage;
  // tx_peak_usage
  output->tx_peak_usage = input->tx_peak_usage;
  // rx_pending
  output->rx_pending = input->rx_pending;
  // rx_bytes
  output->rx_bytes = input->rx_bytes;
  // rx_usage
  output->rx_usage = input->rx_usage;
  // rx_peak_usage
  output->rx_peak_usage = input->rx_peak_usage;
  // overrun_errs
  output->overrun_errs = input->overrun_errs;
  // msgs
  for (size_t i = 0; i < 4; ++i) {
    output->msgs[i] = input->msgs[i];
  }
  // skipped
  output->skipped = input->skipped;
  return true;
}

ublox_ubx_msgs__msg__CommsPortInfo *
ublox_ubx_msgs__msg__CommsPortInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CommsPortInfo * msg = (ublox_ubx_msgs__msg__CommsPortInfo *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__CommsPortInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__CommsPortInfo));
  bool success = ublox_ubx_msgs__msg__CommsPortInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__CommsPortInfo__destroy(ublox_ubx_msgs__msg__CommsPortInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__CommsPortInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__init(ublox_ubx_msgs__msg__CommsPortInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CommsPortInfo * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__CommsPortInfo *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__CommsPortInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__CommsPortInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__CommsPortInfo__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__fini(ublox_ubx_msgs__msg__CommsPortInfo__Sequence * array)
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
      ublox_ubx_msgs__msg__CommsPortInfo__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__CommsPortInfo__Sequence *
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CommsPortInfo__Sequence * array = (ublox_ubx_msgs__msg__CommsPortInfo__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__CommsPortInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__CommsPortInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__destroy(ublox_ubx_msgs__msg__CommsPortInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__CommsPortInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__are_equal(const ublox_ubx_msgs__msg__CommsPortInfo__Sequence * lhs, const ublox_ubx_msgs__msg__CommsPortInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__CommsPortInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__CommsPortInfo__Sequence__copy(
  const ublox_ubx_msgs__msg__CommsPortInfo__Sequence * input,
  ublox_ubx_msgs__msg__CommsPortInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__CommsPortInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__CommsPortInfo * data =
      (ublox_ubx_msgs__msg__CommsPortInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__CommsPortInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__CommsPortInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__CommsPortInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
