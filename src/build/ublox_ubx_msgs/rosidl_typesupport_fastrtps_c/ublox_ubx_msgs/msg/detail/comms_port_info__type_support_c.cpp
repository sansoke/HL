// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/comms_port_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_ubx_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CommsPortInfo__ros_msg_type = ublox_ubx_msgs__msg__CommsPortInfo;

static bool _CommsPortInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CommsPortInfo__ros_msg_type * ros_message = static_cast<const _CommsPortInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: port_id
  {
    cdr << ros_message->port_id;
  }

  // Field name: tx_pending
  {
    cdr << ros_message->tx_pending;
  }

  // Field name: tx_bytes
  {
    cdr << ros_message->tx_bytes;
  }

  // Field name: tx_usage
  {
    cdr << ros_message->tx_usage;
  }

  // Field name: tx_peak_usage
  {
    cdr << ros_message->tx_peak_usage;
  }

  // Field name: rx_pending
  {
    cdr << ros_message->rx_pending;
  }

  // Field name: rx_bytes
  {
    cdr << ros_message->rx_bytes;
  }

  // Field name: rx_usage
  {
    cdr << ros_message->rx_usage;
  }

  // Field name: rx_peak_usage
  {
    cdr << ros_message->rx_peak_usage;
  }

  // Field name: overrun_errs
  {
    cdr << ros_message->overrun_errs;
  }

  // Field name: msgs
  {
    size_t size = 4;
    auto array_ptr = ros_message->msgs;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: skipped
  {
    cdr << ros_message->skipped;
  }

  return true;
}

static bool _CommsPortInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CommsPortInfo__ros_msg_type * ros_message = static_cast<_CommsPortInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: port_id
  {
    cdr >> ros_message->port_id;
  }

  // Field name: tx_pending
  {
    cdr >> ros_message->tx_pending;
  }

  // Field name: tx_bytes
  {
    cdr >> ros_message->tx_bytes;
  }

  // Field name: tx_usage
  {
    cdr >> ros_message->tx_usage;
  }

  // Field name: tx_peak_usage
  {
    cdr >> ros_message->tx_peak_usage;
  }

  // Field name: rx_pending
  {
    cdr >> ros_message->rx_pending;
  }

  // Field name: rx_bytes
  {
    cdr >> ros_message->rx_bytes;
  }

  // Field name: rx_usage
  {
    cdr >> ros_message->rx_usage;
  }

  // Field name: rx_peak_usage
  {
    cdr >> ros_message->rx_peak_usage;
  }

  // Field name: overrun_errs
  {
    cdr >> ros_message->overrun_errs;
  }

  // Field name: msgs
  {
    size_t size = 4;
    auto array_ptr = ros_message->msgs;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: skipped
  {
    cdr >> ros_message->skipped;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_ubx_msgs
size_t get_serialized_size_ublox_ubx_msgs__msg__CommsPortInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CommsPortInfo__ros_msg_type * ros_message = static_cast<const _CommsPortInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name port_id
  {
    size_t item_size = sizeof(ros_message->port_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_pending
  {
    size_t item_size = sizeof(ros_message->tx_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_bytes
  {
    size_t item_size = sizeof(ros_message->tx_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_usage
  {
    size_t item_size = sizeof(ros_message->tx_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_peak_usage
  {
    size_t item_size = sizeof(ros_message->tx_peak_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_pending
  {
    size_t item_size = sizeof(ros_message->rx_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_bytes
  {
    size_t item_size = sizeof(ros_message->rx_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_usage
  {
    size_t item_size = sizeof(ros_message->rx_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_peak_usage
  {
    size_t item_size = sizeof(ros_message->rx_peak_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overrun_errs
  {
    size_t item_size = sizeof(ros_message->overrun_errs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgs
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->msgs;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name skipped
  {
    size_t item_size = sizeof(ros_message->skipped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CommsPortInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_ubx_msgs__msg__CommsPortInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_ubx_msgs
size_t max_serialized_size_ublox_ubx_msgs__msg__CommsPortInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: port_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tx_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tx_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tx_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_peak_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rx_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rx_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rx_peak_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overrun_errs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: msgs
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: skipped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ublox_ubx_msgs__msg__CommsPortInfo;
    is_plain =
      (
      offsetof(DataType, skipped) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CommsPortInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ublox_ubx_msgs__msg__CommsPortInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CommsPortInfo = {
  "ublox_ubx_msgs::msg",
  "CommsPortInfo",
  _CommsPortInfo__cdr_serialize,
  _CommsPortInfo__cdr_deserialize,
  _CommsPortInfo__get_serialized_size,
  _CommsPortInfo__max_serialized_size
};

static rosidl_message_type_support_t _CommsPortInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CommsPortInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_ubx_msgs, msg, CommsPortInfo)() {
  return &_CommsPortInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
