// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/ubx_rxm_spartn_key__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `key_info`
#include "ublox_ubx_msgs/msg/detail/spartn_key_info__functions.h"
// Member `key_payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__init(ublox_ubx_msgs__msg__UBXRxmSpartnKey * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(msg);
    return false;
  }
  // version
  // num_keys
  // reserved0
  // key_info
  if (!ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__init(&msg->key_info, 0)) {
    ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(msg);
    return false;
  }
  // key_payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->key_payload, 0)) {
    ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(msg);
    return false;
  }
  return true;
}

void
ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(ublox_ubx_msgs__msg__UBXRxmSpartnKey * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  // num_keys
  // reserved0
  // key_info
  ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__fini(&msg->key_info);
  // key_payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->key_payload);
}

bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__are_equal(const ublox_ubx_msgs__msg__UBXRxmSpartnKey * lhs, const ublox_ubx_msgs__msg__UBXRxmSpartnKey * rhs)
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
  // num_keys
  if (lhs->num_keys != rhs->num_keys) {
    return false;
  }
  // reserved0
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved0[i] != rhs->reserved0[i]) {
      return false;
    }
  }
  // key_info
  if (!ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__are_equal(
      &(lhs->key_info), &(rhs->key_info)))
  {
    return false;
  }
  // key_payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->key_payload), &(rhs->key_payload)))
  {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__copy(
  const ublox_ubx_msgs__msg__UBXRxmSpartnKey * input,
  ublox_ubx_msgs__msg__UBXRxmSpartnKey * output)
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
  // num_keys
  output->num_keys = input->num_keys;
  // reserved0
  for (size_t i = 0; i < 2; ++i) {
    output->reserved0[i] = input->reserved0[i];
  }
  // key_info
  if (!ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence__copy(
      &(input->key_info), &(output->key_info)))
  {
    return false;
  }
  // key_payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->key_payload), &(output->key_payload)))
  {
    return false;
  }
  return true;
}

ublox_ubx_msgs__msg__UBXRxmSpartnKey *
ublox_ubx_msgs__msg__UBXRxmSpartnKey__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmSpartnKey * msg = (ublox_ubx_msgs__msg__UBXRxmSpartnKey *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXRxmSpartnKey), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__UBXRxmSpartnKey));
  bool success = ublox_ubx_msgs__msg__UBXRxmSpartnKey__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__UBXRxmSpartnKey__destroy(ublox_ubx_msgs__msg__UBXRxmSpartnKey * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__init(ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmSpartnKey * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__UBXRxmSpartnKey *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__UBXRxmSpartnKey), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__UBXRxmSpartnKey__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__fini(ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * array)
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
      ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence *
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * array = (ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__destroy(ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__are_equal(const ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * lhs, const ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXRxmSpartnKey__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence__copy(
  const ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * input,
  ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__UBXRxmSpartnKey);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__UBXRxmSpartnKey * data =
      (ublox_ubx_msgs__msg__UBXRxmSpartnKey *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__UBXRxmSpartnKey__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__UBXRxmSpartnKey__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXRxmSpartnKey__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
