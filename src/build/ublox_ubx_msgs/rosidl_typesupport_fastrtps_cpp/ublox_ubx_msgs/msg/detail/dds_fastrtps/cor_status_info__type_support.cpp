// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice
#include "ublox_ubx_msgs/msg/detail/cor_status_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ublox_ubx_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_ubx_msgs
cdr_serialize(
  const ublox_ubx_msgs::msg::CorStatusInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: protocol
  cdr << ros_message.protocol;
  // Member: err_status
  cdr << ros_message.err_status;
  // Member: msg_used
  cdr << ros_message.msg_used;
  // Member: correction_id
  cdr << ros_message.correction_id;
  // Member: msg_type_valid
  cdr << (ros_message.msg_type_valid ? true : false);
  // Member: msg_sub_type_valid
  cdr << (ros_message.msg_sub_type_valid ? true : false);
  // Member: msg_input_handle
  cdr << (ros_message.msg_input_handle ? true : false);
  // Member: msg_encrypted
  cdr << ros_message.msg_encrypted;
  // Member: msg_decrypted
  cdr << ros_message.msg_decrypted;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_ubx_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ublox_ubx_msgs::msg::CorStatusInfo & ros_message)
{
  // Member: protocol
  cdr >> ros_message.protocol;

  // Member: err_status
  cdr >> ros_message.err_status;

  // Member: msg_used
  cdr >> ros_message.msg_used;

  // Member: correction_id
  cdr >> ros_message.correction_id;

  // Member: msg_type_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.msg_type_valid = tmp ? true : false;
  }

  // Member: msg_sub_type_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.msg_sub_type_valid = tmp ? true : false;
  }

  // Member: msg_input_handle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.msg_input_handle = tmp ? true : false;
  }

  // Member: msg_encrypted
  cdr >> ros_message.msg_encrypted;

  // Member: msg_decrypted
  cdr >> ros_message.msg_decrypted;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_ubx_msgs
get_serialized_size(
  const ublox_ubx_msgs::msg::CorStatusInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: protocol
  {
    size_t item_size = sizeof(ros_message.protocol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_status
  {
    size_t item_size = sizeof(ros_message.err_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_used
  {
    size_t item_size = sizeof(ros_message.msg_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: correction_id
  {
    size_t item_size = sizeof(ros_message.correction_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_type_valid
  {
    size_t item_size = sizeof(ros_message.msg_type_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_sub_type_valid
  {
    size_t item_size = sizeof(ros_message.msg_sub_type_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_input_handle
  {
    size_t item_size = sizeof(ros_message.msg_input_handle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_encrypted
  {
    size_t item_size = sizeof(ros_message.msg_encrypted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_decrypted
  {
    size_t item_size = sizeof(ros_message.msg_decrypted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ublox_ubx_msgs
max_serialized_size_CorStatusInfo(
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


  // Member: protocol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: correction_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: msg_type_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_sub_type_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_input_handle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_encrypted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_decrypted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ublox_ubx_msgs::msg::CorStatusInfo;
    is_plain =
      (
      offsetof(DataType, msg_decrypted) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CorStatusInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ublox_ubx_msgs::msg::CorStatusInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CorStatusInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ublox_ubx_msgs::msg::CorStatusInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CorStatusInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ublox_ubx_msgs::msg::CorStatusInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CorStatusInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CorStatusInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CorStatusInfo__callbacks = {
  "ublox_ubx_msgs::msg",
  "CorStatusInfo",
  _CorStatusInfo__cdr_serialize,
  _CorStatusInfo__cdr_deserialize,
  _CorStatusInfo__get_serialized_size,
  _CorStatusInfo__max_serialized_size
};

static rosidl_message_type_support_t _CorStatusInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CorStatusInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ublox_ubx_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ublox_ubx_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ublox_ubx_msgs::msg::CorStatusInfo>()
{
  return &ublox_ubx_msgs::msg::typesupport_fastrtps_cpp::_CorStatusInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ublox_ubx_msgs, msg, CorStatusInfo)() {
  return &ublox_ubx_msgs::msg::typesupport_fastrtps_cpp::_CorStatusInfo__handle;
}

#ifdef __cplusplus
}
#endif
