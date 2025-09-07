// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/UBXMonComms.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/ubx_mon_comms__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_UBXMonComms_ports
{
public:
  explicit Init_UBXMonComms_ports(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::UBXMonComms ports(::ublox_ubx_msgs::msg::UBXMonComms::_ports_type arg)
  {
    msg_.ports = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_prot_ids
{
public:
  explicit Init_UBXMonComms_prot_ids(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  Init_UBXMonComms_ports prot_ids(::ublox_ubx_msgs::msg::UBXMonComms::_prot_ids_type arg)
  {
    msg_.prot_ids = std::move(arg);
    return Init_UBXMonComms_ports(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_reserved0
{
public:
  explicit Init_UBXMonComms_reserved0(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  Init_UBXMonComms_prot_ids reserved0(::ublox_ubx_msgs::msg::UBXMonComms::_reserved0_type arg)
  {
    msg_.reserved0 = std::move(arg);
    return Init_UBXMonComms_prot_ids(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_tx_errors
{
public:
  explicit Init_UBXMonComms_tx_errors(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  Init_UBXMonComms_reserved0 tx_errors(::ublox_ubx_msgs::msg::UBXMonComms::_tx_errors_type arg)
  {
    msg_.tx_errors = std::move(arg);
    return Init_UBXMonComms_reserved0(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_n_ports
{
public:
  explicit Init_UBXMonComms_n_ports(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  Init_UBXMonComms_tx_errors n_ports(::ublox_ubx_msgs::msg::UBXMonComms::_n_ports_type arg)
  {
    msg_.n_ports = std::move(arg);
    return Init_UBXMonComms_tx_errors(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_version
{
public:
  explicit Init_UBXMonComms_version(::ublox_ubx_msgs::msg::UBXMonComms & msg)
  : msg_(msg)
  {}
  Init_UBXMonComms_n_ports version(::ublox_ubx_msgs::msg::UBXMonComms::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UBXMonComms_n_ports(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

class Init_UBXMonComms_header
{
public:
  Init_UBXMonComms_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UBXMonComms_version header(::ublox_ubx_msgs::msg::UBXMonComms::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UBXMonComms_version(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXMonComms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::UBXMonComms>()
{
  return ublox_ubx_msgs::msg::builder::Init_UBXMonComms_header();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__BUILDER_HPP_
