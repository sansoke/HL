// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommsPortInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: port_id
  {
    out << "port_id: ";
    rosidl_generator_traits::value_to_yaml(msg.port_id, out);
    out << ", ";
  }

  // member: tx_pending
  {
    out << "tx_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_pending, out);
    out << ", ";
  }

  // member: tx_bytes
  {
    out << "tx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bytes, out);
    out << ", ";
  }

  // member: tx_usage
  {
    out << "tx_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_usage, out);
    out << ", ";
  }

  // member: tx_peak_usage
  {
    out << "tx_peak_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_peak_usage, out);
    out << ", ";
  }

  // member: rx_pending
  {
    out << "rx_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_pending, out);
    out << ", ";
  }

  // member: rx_bytes
  {
    out << "rx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bytes, out);
    out << ", ";
  }

  // member: rx_usage
  {
    out << "rx_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_usage, out);
    out << ", ";
  }

  // member: rx_peak_usage
  {
    out << "rx_peak_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_peak_usage, out);
    out << ", ";
  }

  // member: overrun_errs
  {
    out << "overrun_errs: ";
    rosidl_generator_traits::value_to_yaml(msg.overrun_errs, out);
    out << ", ";
  }

  // member: msgs
  {
    if (msg.msgs.size() == 0) {
      out << "msgs: []";
    } else {
      out << "msgs: [";
      size_t pending_items = msg.msgs.size();
      for (auto item : msg.msgs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: skipped
  {
    out << "skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.skipped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommsPortInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: port_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_id: ";
    rosidl_generator_traits::value_to_yaml(msg.port_id, out);
    out << "\n";
  }

  // member: tx_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_pending, out);
    out << "\n";
  }

  // member: tx_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_bytes, out);
    out << "\n";
  }

  // member: tx_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_usage, out);
    out << "\n";
  }

  // member: tx_peak_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_peak_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_peak_usage, out);
    out << "\n";
  }

  // member: rx_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_pending, out);
    out << "\n";
  }

  // member: rx_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_bytes, out);
    out << "\n";
  }

  // member: rx_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_usage, out);
    out << "\n";
  }

  // member: rx_peak_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_peak_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_peak_usage, out);
    out << "\n";
  }

  // member: overrun_errs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overrun_errs: ";
    rosidl_generator_traits::value_to_yaml(msg.overrun_errs, out);
    out << "\n";
  }

  // member: msgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.msgs.size() == 0) {
      out << "msgs: []\n";
    } else {
      out << "msgs:\n";
      for (auto item : msg.msgs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: skipped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.skipped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommsPortInfo & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::CommsPortInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::CommsPortInfo & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::CommsPortInfo>()
{
  return "ublox_ubx_msgs::msg::CommsPortInfo";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::CommsPortInfo>()
{
  return "ublox_ubx_msgs/msg/CommsPortInfo";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::CommsPortInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::CommsPortInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_ubx_msgs::msg::CommsPortInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__TRAITS_HPP_
