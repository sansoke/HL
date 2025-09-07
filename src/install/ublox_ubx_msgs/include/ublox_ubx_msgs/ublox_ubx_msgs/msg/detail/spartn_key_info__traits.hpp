// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/spartn_key_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpartnKeyInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << ", ";
  }

  // member: key_length_bytes
  {
    out << "key_length_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.key_length_bytes, out);
    out << ", ";
  }

  // member: valid_from_wno
  {
    out << "valid_from_wno: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_from_wno, out);
    out << ", ";
  }

  // member: valid_from_tow
  {
    out << "valid_from_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_from_tow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpartnKeyInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << "\n";
  }

  // member: key_length_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_length_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.key_length_bytes, out);
    out << "\n";
  }

  // member: valid_from_wno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_from_wno: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_from_wno, out);
    out << "\n";
  }

  // member: valid_from_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_from_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_from_tow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpartnKeyInfo & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::SpartnKeyInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::SpartnKeyInfo & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::SpartnKeyInfo>()
{
  return "ublox_ubx_msgs::msg::SpartnKeyInfo";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::SpartnKeyInfo>()
{
  return "ublox_ubx_msgs/msg/SpartnKeyInfo";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::SpartnKeyInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::SpartnKeyInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_ubx_msgs::msg::SpartnKeyInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__TRAITS_HPP_
