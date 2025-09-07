// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/ubx_rxm_spartn_key__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'key_info'
#include "ublox_ubx_msgs/msg/detail/spartn_key_info__traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UBXRxmSpartnKey & msg,
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

  // member: num_keys
  {
    out << "num_keys: ";
    rosidl_generator_traits::value_to_yaml(msg.num_keys, out);
    out << ", ";
  }

  // member: reserved0
  {
    if (msg.reserved0.size() == 0) {
      out << "reserved0: []";
    } else {
      out << "reserved0: [";
      size_t pending_items = msg.reserved0.size();
      for (auto item : msg.reserved0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: key_info
  {
    if (msg.key_info.size() == 0) {
      out << "key_info: []";
    } else {
      out << "key_info: [";
      size_t pending_items = msg.key_info.size();
      for (auto item : msg.key_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: key_payload
  {
    if (msg.key_payload.size() == 0) {
      out << "key_payload: []";
    } else {
      out << "key_payload: [";
      size_t pending_items = msg.key_payload.size();
      for (auto item : msg.key_payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UBXRxmSpartnKey & msg,
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

  // member: num_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_keys: ";
    rosidl_generator_traits::value_to_yaml(msg.num_keys, out);
    out << "\n";
  }

  // member: reserved0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved0.size() == 0) {
      out << "reserved0: []\n";
    } else {
      out << "reserved0:\n";
      for (auto item : msg.reserved0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: key_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_info.size() == 0) {
      out << "key_info: []\n";
    } else {
      out << "key_info:\n";
      for (auto item : msg.key_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: key_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_payload.size() == 0) {
      out << "key_payload: []\n";
    } else {
      out << "key_payload:\n";
      for (auto item : msg.key_payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UBXRxmSpartnKey & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::UBXRxmSpartnKey>()
{
  return "ublox_ubx_msgs::msg::UBXRxmSpartnKey";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::UBXRxmSpartnKey>()
{
  return "ublox_ubx_msgs/msg/UBXRxmSpartnKey";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::UBXRxmSpartnKey>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::UBXRxmSpartnKey>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ublox_ubx_msgs::msg::UBXRxmSpartnKey>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__TRAITS_HPP_
