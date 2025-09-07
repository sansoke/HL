// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/ubx_rxm_spartn_key__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_UBXRxmSpartnKey_key_payload
{
public:
  explicit Init_UBXRxmSpartnKey_key_payload(::ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey key_payload(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_key_payload_type arg)
  {
    msg_.key_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

class Init_UBXRxmSpartnKey_key_info
{
public:
  explicit Init_UBXRxmSpartnKey_key_info(::ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartnKey_key_payload key_info(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_key_info_type arg)
  {
    msg_.key_info = std::move(arg);
    return Init_UBXRxmSpartnKey_key_payload(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

class Init_UBXRxmSpartnKey_reserved0
{
public:
  explicit Init_UBXRxmSpartnKey_reserved0(::ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartnKey_key_info reserved0(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_reserved0_type arg)
  {
    msg_.reserved0 = std::move(arg);
    return Init_UBXRxmSpartnKey_key_info(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

class Init_UBXRxmSpartnKey_num_keys
{
public:
  explicit Init_UBXRxmSpartnKey_num_keys(::ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartnKey_reserved0 num_keys(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_num_keys_type arg)
  {
    msg_.num_keys = std::move(arg);
    return Init_UBXRxmSpartnKey_reserved0(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

class Init_UBXRxmSpartnKey_version
{
public:
  explicit Init_UBXRxmSpartnKey_version(::ublox_ubx_msgs::msg::UBXRxmSpartnKey & msg)
  : msg_(msg)
  {}
  Init_UBXRxmSpartnKey_num_keys version(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UBXRxmSpartnKey_num_keys(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

class Init_UBXRxmSpartnKey_header
{
public:
  Init_UBXRxmSpartnKey_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UBXRxmSpartnKey_version header(::ublox_ubx_msgs::msg::UBXRxmSpartnKey::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UBXRxmSpartnKey_version(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmSpartnKey msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::UBXRxmSpartnKey>()
{
  return ublox_ubx_msgs::msg::builder::Init_UBXRxmSpartnKey_header();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__BUILDER_HPP_
