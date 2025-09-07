// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartn.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/ubx_rxm_spartn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_UBXRxmSpartn_msg_type
{
public:
  explicit Init_UBXRxmSpartn_msg_type(::ublox_ubx_msgs::msg::UBXRxmSpartn & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_type(::ublox_ubx_msgs::msg::UBXRxmSpartn::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_;
};

class Init_UBXRxmSpartn_sub_type
{
public:
  explicit Init_UBXRxmSpartn_sub_type(::ublox_ubx_msgs::msg::UBXRxmSpartn & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartn_msg_type sub_type(::ublox_ubx_msgs::msg::UBXRxmSpartn::_sub_type_type arg)
  {
    msg_.sub_type = std::move(arg);
    return Init_UBXRxmSpartn_msg_type(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_;
};

class Init_UBXRxmSpartn_msg_used
{
public:
  explicit Init_UBXRxmSpartn_msg_used(::ublox_ubx_msgs::msg::UBXRxmSpartn & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartn_sub_type msg_used(::ublox_ubx_msgs::msg::UBXRxmSpartn::_msg_used_type arg)
  {
    msg_.msg_used = std::move(arg);
    return Init_UBXRxmSpartn_sub_type(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_;
};

class Init_UBXRxmSpartn_version
{
public:
  explicit Init_UBXRxmSpartn_version(::ublox_ubx_msgs::msg::UBXRxmSpartn & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartn_msg_used version(::ublox_ubx_msgs::msg::UBXRxmSpartn::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UBXRxmSpartn_msg_used(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_;
};

class Init_UBXRxmSpartn_header
{
public:
  Init_UBXRxmSpartn_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UBXRxmSpartn_version header(::ublox_ubx_msgs::msg::UBXRxmSpartn::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UBXRxmSpartn_version(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::UBXRxmSpartn>()
{
  return ublox_ubx_msgs::msg::builder::Init_UBXRxmSpartn_header();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__BUILDER_HPP_
