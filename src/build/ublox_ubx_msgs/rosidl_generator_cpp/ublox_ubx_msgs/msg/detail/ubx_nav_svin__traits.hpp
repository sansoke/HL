// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__TRAITS_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_ubx_msgs/msg/detail/ubx_nav_svin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ublox_ubx_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UBXNavSvin & msg,
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

  // member: itow
  {
    out << "itow: ";
    rosidl_generator_traits::value_to_yaml(msg.itow, out);
    out << ", ";
  }

  // member: dur
  {
    out << "dur: ";
    rosidl_generator_traits::value_to_yaml(msg.dur, out);
    out << ", ";
  }

  // member: mean_x
  {
    out << "mean_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_x, out);
    out << ", ";
  }

  // member: mean_y
  {
    out << "mean_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_y, out);
    out << ", ";
  }

  // member: mean_z
  {
    out << "mean_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_z, out);
    out << ", ";
  }

  // member: mean_x_hp
  {
    out << "mean_x_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_x_hp, out);
    out << ", ";
  }

  // member: mean_y_hp
  {
    out << "mean_y_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_y_hp, out);
    out << ", ";
  }

  // member: mean_z_hp
  {
    out << "mean_z_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_z_hp, out);
    out << ", ";
  }

  // member: mean_acc
  {
    out << "mean_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_acc, out);
    out << ", ";
  }

  // member: obs
  {
    out << "obs: ";
    rosidl_generator_traits::value_to_yaml(msg.obs, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UBXNavSvin & msg,
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

  // member: itow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itow: ";
    rosidl_generator_traits::value_to_yaml(msg.itow, out);
    out << "\n";
  }

  // member: dur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dur: ";
    rosidl_generator_traits::value_to_yaml(msg.dur, out);
    out << "\n";
  }

  // member: mean_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_x, out);
    out << "\n";
  }

  // member: mean_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_y, out);
    out << "\n";
  }

  // member: mean_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_z, out);
    out << "\n";
  }

  // member: mean_x_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_x_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_x_hp, out);
    out << "\n";
  }

  // member: mean_y_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_y_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_y_hp, out);
    out << "\n";
  }

  // member: mean_z_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_z_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_z_hp, out);
    out << "\n";
  }

  // member: mean_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_acc, out);
    out << "\n";
  }

  // member: obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs: ";
    rosidl_generator_traits::value_to_yaml(msg.obs, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UBXNavSvin & msg, bool use_flow_style = false)
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
  const ublox_ubx_msgs::msg::UBXNavSvin & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_ubx_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_ubx_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_ubx_msgs::msg::UBXNavSvin & msg)
{
  return ublox_ubx_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_ubx_msgs::msg::UBXNavSvin>()
{
  return "ublox_ubx_msgs::msg::UBXNavSvin";
}

template<>
inline const char * name<ublox_ubx_msgs::msg::UBXNavSvin>()
{
  return "ublox_ubx_msgs/msg/UBXNavSvin";
}

template<>
struct has_fixed_size<ublox_ubx_msgs::msg::UBXNavSvin>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ublox_ubx_msgs::msg::UBXNavSvin>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ublox_ubx_msgs::msg::UBXNavSvin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__TRAITS_HPP_
