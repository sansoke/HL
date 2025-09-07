// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ublox_ubx_msgs/msg/detail/comms_port_info__rosidl_typesupport_introspection_c.h"
#include "ublox_ubx_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__functions.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ublox_ubx_msgs__msg__CommsPortInfo__init(message_memory);
}

void ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_fini_function(void * message_memory)
{
  ublox_ubx_msgs__msg__CommsPortInfo__fini(message_memory);
}

size_t ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__size_function__CommsPortInfo__msgs(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_const_function__CommsPortInfo__msgs(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_function__CommsPortInfo__msgs(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__fetch_function__CommsPortInfo__msgs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_const_function__CommsPortInfo__msgs(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__assign_function__CommsPortInfo__msgs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_function__CommsPortInfo__msgs(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_member_array[12] = {
  {
    "port_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, port_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_pending",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, tx_pending),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, tx_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, tx_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_peak_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, tx_peak_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_pending",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, rx_pending),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, rx_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, rx_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx_peak_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, rx_peak_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overrun_errs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, overrun_errs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, msgs),  // bytes offset in struct
    NULL,  // default value
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__size_function__CommsPortInfo__msgs,  // size() function pointer
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_const_function__CommsPortInfo__msgs,  // get_const(index) function pointer
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__get_function__CommsPortInfo__msgs,  // get(index) function pointer
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__fetch_function__CommsPortInfo__msgs,  // fetch(index, &value) function pointer
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__assign_function__CommsPortInfo__msgs,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "skipped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ublox_ubx_msgs__msg__CommsPortInfo, skipped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_members = {
  "ublox_ubx_msgs__msg",  // message namespace
  "CommsPortInfo",  // message name
  12,  // number of fields
  sizeof(ublox_ubx_msgs__msg__CommsPortInfo),
  ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_member_array,  // message members
  ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_type_support_handle = {
  0,
  &ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ublox_ubx_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ublox_ubx_msgs, msg, CommsPortInfo)() {
  if (!ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_type_support_handle.typesupport_identifier) {
    ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ublox_ubx_msgs__msg__CommsPortInfo__rosidl_typesupport_introspection_c__CommsPortInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
