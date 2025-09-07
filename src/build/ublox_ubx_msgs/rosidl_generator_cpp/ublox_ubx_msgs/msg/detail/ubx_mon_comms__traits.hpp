// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/UBXMonComms.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/ubx_mon_comms__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ports'
#include "ublox_ubx_msgs/msg/detail/comms_port_info__traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UBXMonComms & msg,
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

  // member: n_ports
  {
    out << "n_ports: ";
    rosidl_generator_traits::value_to_yaml(msg.n_ports, out);
    out << ", ";
  }

  // member: tx_errors
  {
    out << "tx_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_errors, out);
    out << ", ";
  }

  // member: reserved0
  {
    out << "reserved0: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved0, out);
    out << ", ";
  }

  // member: prot_ids
  {
    if (msg.prot_ids.size() == 0) {
      out << "prot_ids: []";
    } else {
      out << "prot_ids: [";
      size_t pending_items = msg.prot_ids.size();
      for (auto item : msg.prot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ports
  {
    if (msg.ports.size() == 0) {
      out << "ports: []";
    } else {
      out << "ports: [";
      size_t pending_items = msg.ports.size();
      for (auto item : msg.ports) {
        to_flow_style_yaml(item, out);
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
  const UBXMonComms & msg,
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

  // member: n_ports
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_ports: ";
    rosidl_generator_traits::value_to_yaml(msg.n_ports, out);
    out << "\n";
  }

  // member: tx_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_errors, out);
    out << "\n";
  }

  // member: reserved0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved0: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved0, out);
    out << "\n";
  }

  // member: prot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prot_ids.size() == 0) {
      out << "prot_ids: []\n";
    } else {
      out << "prot_ids:\n";
      for (auto item : msg.prot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ports
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ports.size() == 0) {
      out << "ports: []\n";
    } else {
      out << "ports:\n";
      for (auto item : msg.ports) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UBXMonComms & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::UBXMonComms & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::UBXMonComms & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::UBXMonComms>()
{
  return "ublox_ubx_msgs::msg::UBXMonComms";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::UBXMonComms>()
{
  return "ublox_ubx_msgs/msg/UBXMonComms";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::UBXMonComms>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::UBXMonComms>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ublox_ubx_msgs::msg::UBXMonComms>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__TRAITS_HPP_
