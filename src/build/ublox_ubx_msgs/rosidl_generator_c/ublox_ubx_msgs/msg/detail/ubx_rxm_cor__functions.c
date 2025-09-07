// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/UBXRxmCor.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/ubx_rxm_cor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status_info`
#include "ublox_ubx_msgs/msg/detail/cor_status_info__functions.h"

bool
ublox_ubx_msgs__msg__UBXRxmCor__init(ublox_ubx_msgs__msg__UBXRxmCor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ublox_ubx_msgs__msg__UBXRxmCor__fini(msg);
    return false;
  }
  // version
  // ebno
  // status_info
  if (!ublox_ubx_msgs__msg__CorStatusInfo__init(&msg->status_info)) {
    ublox_ubx_msgs__msg__UBXRxmCor__fini(msg);
    return false;
  }
  // msg_type
  // msg_sub_type
  return true;
}

void
ublox_ubx_msgs__msg__UBXRxmCor__fini(ublox_ubx_msgs__msg__UBXRxmCor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  // ebno
  // status_info
  ublox_ubx_msgs__msg__CorStatusInfo__fini(&msg->status_info);
  // msg_type
  // msg_sub_type
}

bool
ublox_ubx_msgs__msg__UBXRxmCor__are_equal(const ublox_ubx_msgs__msg__UBXRxmCor * lhs, const ublox_ubx_msgs__msg__UBXRxmCor * rhs)
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
  // ebno
  if (lhs->ebno != rhs->ebno) {
    return false;
  }
  // status_info
  if (!ublox_ubx_msgs__msg__CorStatusInfo__are_equal(
      &(lhs->status_info), &(rhs->status_info)))
  {
    return false;
  }
  // msg_type
  if (lhs->msg_type != rhs->msg_type) {
    return false;
  }
  // msg_sub_type
  if (lhs->msg_sub_type != rhs->msg_sub_type) {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXRxmCor__copy(
  const ublox_ubx_msgs__msg__UBXRxmCor * input,
  ublox_ubx_msgs__msg__UBXRxmCor * output)
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
  // ebno
  output->ebno = input->ebno;
  // status_info
  if (!ublox_ubx_msgs__msg__CorStatusInfo__copy(
      &(input->status_info), &(output->status_info)))
  {
    return false;
  }
  // msg_type
  output->msg_type = input->msg_type;
  // msg_sub_type
  output->msg_sub_type = input->msg_sub_type;
  return true;
}

ublox_ubx_msgs__msg__UBXRxmCor *
ublox_ubx_msgs__msg__UBXRxmCor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmCor * msg = (ublox_ubx_msgs__msg__UBXRxmCor *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXRxmCor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__UBXRxmCor));
  bool success = ublox_ubx_msgs__msg__UBXRxmCor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__UBXRxmCor__destroy(ublox_ubx_msgs__msg__UBXRxmCor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__UBXRxmCor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__init(ublox_ubx_msgs__msg__UBXRxmCor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmCor * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__UBXRxmCor *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__UBXRxmCor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__UBXRxmCor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__UBXRxmCor__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__fini(ublox_ubx_msgs__msg__UBXRxmCor__Sequence * array)
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
      ublox_ubx_msgs__msg__UBXRxmCor__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__UBXRxmCor__Sequence *
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmCor__Sequence * array = (ublox_ubx_msgs__msg__UBXRxmCor__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXRxmCor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__UBXRxmCor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__destroy(ublox_ubx_msgs__msg__UBXRxmCor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__UBXRxmCor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__are_equal(const ublox_ubx_msgs__msg__UBXRxmCor__Sequence * lhs, const ublox_ubx_msgs__msg__UBXRxmCor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXRxmCor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXRxmCor__Sequence__copy(
  const ublox_ubx_msgs__msg__UBXRxmCor__Sequence * input,
  ublox_ubx_msgs__msg__UBXRxmCor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__UBXRxmCor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__UBXRxmCor * data =
      (ublox_ubx_msgs__msg__UBXRxmCor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__UBXRxmCor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__UBXRxmCor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXRxmCor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
