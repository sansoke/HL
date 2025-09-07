// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmCor.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/ubx_rxm_cor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status_info'
#include "ublox_ubx_msgs/msg/detail/cor_status_info__traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UBXRxmCor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: ebno
  {
    out << "ebno: ";
    rosidl_generator_traits::value_to_yaml(msg.ebno, out);
    out << ", ";
  }

  // member: status_info
  {
    out << "status_info: ";
    to_flow_style_yaml(msg.status_info, out);
    out << ", ";
  }

  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: msg_sub_type
  {
    out << "msg_sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_sub_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UBXRxmCor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: ebno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ebno: ";
    rosidl_generator_traits::value_to_yaml(msg.ebno, out);
    out << "\n";
  }

  // member: status_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_info:\n";
    to_block_style_yaml(msg.status_info, out, indentation + 2);
  }

  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: msg_sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_sub_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UBXRxmCor & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::UBXRxmCor & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::UBXRxmCor & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::UBXRxmCor>()
{
  return "ublox_ubx_msgs::msg::UBXRxmCor";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::UBXRxmCor>()
{
  return "ublox_ubx_msgs/msg/UBXRxmCor";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::UBXRxmCor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<ublox_ubx_msgs::msg::CorStatusInfo>::value> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::UBXRxmCor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<ublox_ubx_msgs::msg::CorStatusInfo>::value> {};

template<>
struct is_message<ublox_ubx_msgs::msg::UBXRxmCor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__TRAITS_HPP_
