// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_ubx_msgs:msg/UBXMonComms.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/ubx_mon_comms__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ports`
#include "ublox_ubx_msgs/msg/detail/comms_port_info__functions.h"

bool
ublox_ubx_msgs__msg__UBXMonComms__init(ublox_ubx_msgs__msg__UBXMonComms * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ublox_ubx_msgs__msg__UBXMonComms__fini(msg);
    return false;
  }
  // version
  // n_ports
  // tx_errors
  // reserved0
  // prot_ids
  // ports
  if (!ublox_ubx_msgs__msg__CommsPortInfo__Sequence__init(&msg->ports, 0)) {
    ublox_ubx_msgs__msg__UBXMonComms__fini(msg);
    return false;
  }
  return true;
}

void
ublox_ubx_msgs__msg__UBXMonComms__fini(ublox_ubx_msgs__msg__UBXMonComms * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  // n_ports
  // tx_errors
  // reserved0
  // prot_ids
  // ports
  ublox_ubx_msgs__msg__CommsPortInfo__Sequence__fini(&msg->ports);
}

bool
ublox_ubx_msgs__msg__UBXMonComms__are_equal(const ublox_ubx_msgs__msg__UBXMonComms * lhs, const ublox_ubx_msgs__msg__UBXMonComms * rhs)
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
  // n_ports
  if (lhs->n_ports != rhs->n_ports) {
    return false;
  }
  // tx_errors
  if (lhs->tx_errors != rhs->tx_errors) {
    return false;
  }
  // reserved0
  if (lhs->reserved0 != rhs->reserved0) {
    return false;
  }
  // prot_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->prot_ids[i] != rhs->prot_ids[i]) {
      return false;
    }
  }
  // ports
  if (!ublox_ubx_msgs__msg__CommsPortInfo__Sequence__are_equal(
      &(lhs->ports), &(rhs->ports)))
  {
    return false;
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXMonComms__copy(
  const ublox_ubx_msgs__msg__UBXMonComms * input,
  ublox_ubx_msgs__msg__UBXMonComms * output)
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
  // n_ports
  output->n_ports = input->n_ports;
  // tx_errors
  output->tx_errors = input->tx_errors;
  // reserved0
  output->reserved0 = input->reserved0;
  // prot_ids
  for (size_t i = 0; i < 4; ++i) {
    output->prot_ids[i] = input->prot_ids[i];
  }
  // ports
  if (!ublox_ubx_msgs__msg__CommsPortInfo__Sequence__copy(
      &(input->ports), &(output->ports)))
  {
    return false;
  }
  return true;
}

ublox_ubx_msgs__msg__UBXMonComms *
ublox_ubx_msgs__msg__UBXMonComms__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXMonComms * msg = (ublox_ubx_msgs__msg__UBXMonComms *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXMonComms), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_ubx_msgs__msg__UBXMonComms));
  bool success = ublox_ubx_msgs__msg__UBXMonComms__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_ubx_msgs__msg__UBXMonComms__destroy(ublox_ubx_msgs__msg__UBXMonComms * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_ubx_msgs__msg__UBXMonComms__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_ubx_msgs__msg__UBXMonComms__Sequence__init(ublox_ubx_msgs__msg__UBXMonComms__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXMonComms * data = NULL;

  if (size) {
    data = (ublox_ubx_msgs__msg__UBXMonComms *)allocator.zero_allocate(size, sizeof(ublox_ubx_msgs__msg__UBXMonComms), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_ubx_msgs__msg__UBXMonComms__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_ubx_msgs__msg__UBXMonComms__fini(&data[i - 1]);
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
ublox_ubx_msgs__msg__UBXMonComms__Sequence__fini(ublox_ubx_msgs__msg__UBXMonComms__Sequence * array)
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
      ublox_ubx_msgs__msg__UBXMonComms__fini(&array->data[i]);
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

ublox_ubx_msgs__msg__UBXMonComms__Sequence *
ublox_ubx_msgs__msg__UBXMonComms__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_ubx_msgs__msg__UBXMonComms__Sequence * array = (ublox_ubx_msgs__msg__UBXMonComms__Sequence *)allocator.allocate(sizeof(ublox_ubx_msgs__msg__UBXMonComms__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_ubx_msgs__msg__UBXMonComms__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_ubx_msgs__msg__UBXMonComms__Sequence__destroy(ublox_ubx_msgs__msg__UBXMonComms__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_ubx_msgs__msg__UBXMonComms__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_ubx_msgs__msg__UBXMonComms__Sequence__are_equal(const ublox_ubx_msgs__msg__UBXMonComms__Sequence * lhs, const ublox_ubx_msgs__msg__UBXMonComms__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXMonComms__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_ubx_msgs__msg__UBXMonComms__Sequence__copy(
  const ublox_ubx_msgs__msg__UBXMonComms__Sequence * input,
  ublox_ubx_msgs__msg__UBXMonComms__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_ubx_msgs__msg__UBXMonComms);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_ubx_msgs__msg__UBXMonComms * data =
      (ublox_ubx_msgs__msg__UBXMonComms *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_ubx_msgs__msg__UBXMonComms__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_ubx_msgs__msg__UBXMonComms__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_ubx_msgs__msg__UBXMonComms__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
