// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CorStatusInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: protocol
  {
    out << "protocol: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol, out);
    out << ", ";
  }

  // member: err_status
  {
    out << "err_status: ";
    rosidl_generator_traits::value_to_yaml(msg.err_status, out);
    out << ", ";
  }

  // member: msg_used
  {
    out << "msg_used: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_used, out);
    out << ", ";
  }

  // member: correction_id
  {
    out << "correction_id: ";
    rosidl_generator_traits::value_to_yaml(msg.correction_id, out);
    out << ", ";
  }

  // member: msg_type_valid
  {
    out << "msg_type_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type_valid, out);
    out << ", ";
  }

  // member: msg_sub_type_valid
  {
    out << "msg_sub_type_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_sub_type_valid, out);
    out << ", ";
  }

  // member: msg_input_handle
  {
    out << "msg_input_handle: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_input_handle, out);
    out << ", ";
  }

  // member: msg_encrypted
  {
    out << "msg_encrypted: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_encrypted, out);
    out << ", ";
  }

  // member: msg_decrypted
  {
    out << "msg_decrypted: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_decrypted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CorStatusInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: protocol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol, out);
    out << "\n";
  }

  // member: err_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_status: ";
    rosidl_generator_traits::value_to_yaml(msg.err_status, out);
    out << "\n";
  }

  // member: msg_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_used: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_used, out);
    out << "\n";
  }

  // member: correction_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "correction_id: ";
    rosidl_generator_traits::value_to_yaml(msg.correction_id, out);
    out << "\n";
  }

  // member: msg_type_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type_valid, out);
    out << "\n";
  }

  // member: msg_sub_type_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_sub_type_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_sub_type_valid, out);
    out << "\n";
  }

  // member: msg_input_handle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_input_handle: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_input_handle, out);
    out << "\n";
  }

  // member: msg_encrypted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_encrypted: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_encrypted, out);
    out << "\n";
  }

  // member: msg_decrypted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_decrypted: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_decrypted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CorStatusInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ublox_ubx_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ublox_ubx_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ublox_ubx_msgs::msg::CorStatusInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::CorStatusInfo & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::CorStatusInfo>()
{
  return "ublox_ubx_msgs::msg::CorStatusInfo";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::CorStatusInfo>()
{
  return "ublox_ubx_msgs/msg/CorStatusInfo";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::CorStatusInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::CorStatusInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_ubx_msgs::msg::CorStatusInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__TRAITS_HPP_
