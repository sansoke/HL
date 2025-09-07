// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmCor.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/ubx_rxm_cor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_UBXRxmCor_msg_sub_type
{
public:
  explicit Init_UBXRxmCor_msg_sub_type(::ublox_ubx_msgs::msg::UBXRxmCor & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_sub_type(::ublox_ubx_msgs::msg::UBXRxmCor::_msg_sub_type_type arg)
  {
    msg_.msg_sub_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

class Init_UBXRxmCor_msg_type
{
public:
  explicit Init_UBXRxmCor_msg_type(::ublox_ubx_msgs::msg::UBXRxmCor & msg)
  : msg_(msg)
  {}
  Init_UBXRxmCor_msg_sub_type msg_type(::ublox_ubx_msgs::msg::UBXRxmCor::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_UBXRxmCor_msg_sub_type(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

class Init_UBXRxmCor_status_info
{
public:
  explicit Init_UBXRxmCor_status_info(::ublox_ubx_msgs::msg::UBXRxmCor & msg)
  : msg_(msg)
  {}
  Init_UBXRxmCor_msg_type status_info(::ublox_ubx_msgs::msg::UBXRxmCor::_status_info_type arg)
  {
    msg_.status_info = std::move(arg);
    return Init_UBXRxmCor_msg_type(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

class Init_UBXRxmCor_ebno
{
public:
  explicit Init_UBXRxmCor_ebno(::ublox_ubx_msgs::msg::UBXRxmCor & msg)
  : msg_(msg)
  {}
  Init_UBXRxmCor_status_info ebno(::ublox_ubx_msgs::msg::UBXRxmCor::_ebno_type arg)
  {
    msg_.ebno = std::move(arg);
    return Init_UBXRxmCor_status_info(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

class Init_UBXRxmCor_version
{
public:
  explicit Init_UBXRxmCor_version(::ublox_ubx_msgs::msg::UBXRxmCor & msg)
  : msg_(msg)
  {}
  Init_UBXRxmCor_ebno version(::ublox_ubx_msgs::msg::UBXRxmCor::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UBXRxmCor_ebno(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

class Init_UBXRxmCor_header
{
public:
  Init_UBXRxmCor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UBXRxmCor_version header(::ublox_ubx_msgs::msg::UBXRxmCor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UBXRxmCor_version(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXRxmCor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::UBXRxmCor>()
{
  return ublox_ubx_msgs::msg::builder::Init_UBXRxmCor_header();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__BUILDER_HPP_
