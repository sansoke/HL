// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/spartn_key_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_SpartnKeyInfo_valid_from_tow
{
public:
  explicit Init_SpartnKeyInfo_valid_from_tow(::ublox_ubx_msgs::msg::SpartnKeyInfo & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::SpartnKeyInfo valid_from_tow(::ublox_ubx_msgs::msg::SpartnKeyInfo::_valid_from_tow_type arg)
  {
    msg_.valid_from_tow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::SpartnKeyInfo msg_;
};

class Init_SpartnKeyInfo_valid_from_wno
{
public:
  explicit Init_SpartnKeyInfo_valid_from_wno(::ublox_ubx_msgs::msg::SpartnKeyInfo & msg)
  : msg_(msg)
  {}
  Init_SpartnKeyInfo_valid_from_tow valid_from_wno(::ublox_ubx_msgs::msg::SpartnKeyInfo::_valid_from_wno_type arg)
  {
    msg_.valid_from_wno = std::move(arg);
    return Init_SpartnKeyInfo_valid_from_tow(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::SpartnKeyInfo msg_;
};

class Init_SpartnKeyInfo_key_length_bytes
{
public:
  explicit Init_SpartnKeyInfo_key_length_bytes(::ublox_ubx_msgs::msg::SpartnKeyInfo & msg)
  : msg_(msg)
  {}
  Init_SpartnKeyInfo_valid_from_wno key_length_bytes(::ublox_ubx_msgs::msg::SpartnKeyInfo::_key_length_bytes_type arg)
  {
    msg_.key_length_bytes = std::move(arg);
    return Init_SpartnKeyInfo_valid_from_wno(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::SpartnKeyInfo msg_;
};

class Init_SpartnKeyInfo_reserved1
{
public:
  Init_SpartnKeyInfo_reserved1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpartnKeyInfo_key_length_bytes reserved1(::ublox_ubx_msgs::msg::SpartnKeyInfo::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_SpartnKeyInfo_key_length_bytes(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::SpartnKeyInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::SpartnKeyInfo>()
{
  return ublox_ubx_msgs::msg::builder::Init_SpartnKeyInfo_reserved1();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__BUILDER_HPP_
