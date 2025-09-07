// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/cor_status_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_ubx_msgs__msg__CorStatusInfo__init(ublox_ubx_msgs__msg__CorStatusInfo * msg)
{
  if (!msg) {
    return false;
  }
  // protocol
  // err_status
  // msg_used
  // correction_id
  // msg_type_valid
  // msg_sub_type_valid
  // msg_input_handle
  // msg_encrypted
  // msg_decrypted
  return true;
}

void
ublox_ubx_msgs__msg__CorStatusInfo__fini(ublox_ubx_msgs__msg__CorStatusInfo * msg)
{
  if (!msg) {
    return;
  }
  // protocol
  // err_status
  // msg_used
  // correction_id
  // msg_type_valid
  // msg_sub_type_valid
  // msg_input_handle
  // msg_encrypted
  // msg_decrypted
}

bool
ublox_ubx_msgs__msg__CorStatusInfo__are_equal(const ublox_ubx_msgs__msg__CorStatusInfo * lhs, const ublox_ubx_msgs__msg__CorStatusInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // protocol
  if (lhs->protocol != rhs->protocol) {
    return false;
  }
  // err_status
  if (lhs->err_status != rhs->err_status) {
    return false;
  }
  // msg_used
  if (lhs->msg_used != rhs->msg_used) {
    return false;
  }
  // correction_id
  if (lhs->correction_id != rhs->correction_id) {
    return false;
  }
  // msg_type_valid
  if (lhs->msg_type_valid != rhs->msg_type_valid) {
    return false;
  }
  // msg_sub_type_valid
  if (lhs->msg_sub_type_valid != rhs->msg_sub_type_valid) {
    return false;
  }
  // msg_input_handle
  if (lhs->msg_input_handle != rhs->msg_input_handle) {
    return false;
  }
  // msg_encrypted
  if (lhs->msg_encrypted != rhs->msg_encrypted) {
    return false;
  }
  // msg_decrypted
  if (lhs->msg_decrypted != rhs->msg_decrypted) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__CorStatusInfo__copy(
  const ublox_ubx_msgs__msg__CorStatusInfo * input,
  ublox_ubx_msgs__msg__CorStatusInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // protocol
  output->protocol = input->protocol;
  // err_status
  output->err_status = input->err_status;
  // msg_used
  output->msg_used = input->msg_used;
  // correction_id
  output->correction_id = input->correction_id;
  // msg_type_valid
  output->msg_type_valid = input->msg_type_valid;
  // msg_sub_type_valid
  output->msg_sub_type_valid = input->msg_sub_type_valid;
  // msg_input_handle
  output->msg_input_handle = input->msg_input_handle;
  // msg_encrypted
  output->msg_encrypted = input->msg_encrypted;
  // msg_decrypted
  output->msg_decrypted = input->msg_decrypted;
  return true;
}

ublox_ubx_msgs__msg__CorStatusInfo *
ublox_ubx_msgs__msg__CorStatusInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CorStatusInfo * msg = (ublox_ubx_msgs__msg__CorStatusInfo *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__CorStatusInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__CorStatusInfo));
  bool success = ublox_ubx_msgs__msg__CorStatusInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__CorStatusInfo__destroy(ublox_ubx_msgs__msg__CorStatusInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__CorStatusInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__init(ublox_ubx_msgs__msg__CorStatusInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CorStatusInfo * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__CorStatusInfo *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__CorStatusInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__CorStatusInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__CorStatusInfo__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__fini(ublox_ubx_msgs__msg__CorStatusInfo__Sequence * array)
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
      ublox_ubx_msgs__msg__CorStatusInfo__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__CorStatusInfo__Sequence *
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__CorStatusInfo__Sequence * array = (ublox_ubx_msgs__msg__CorStatusInfo__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__CorStatusInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__CorStatusInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__destroy(ublox_ubx_msgs__msg__CorStatusInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__CorStatusInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__are_equal(const ublox_ubx_msgs__msg__CorStatusInfo__Sequence * lhs, const ublox_ubx_msgs__msg__CorStatusInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__CorStatusInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__CorStatusInfo__Sequence__copy(
  const ublox_ubx_msgs__msg__CorStatusInfo__Sequence * input,
  ublox_ubx_msgs__msg__CorStatusInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__CorStatusInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__CorStatusInfo * data =
      (ublox_ubx_msgs__msg__CorStatusInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__CorStatusInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__CorStatusInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__CorStatusInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
