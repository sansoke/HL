// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_CommsPortInfo_skipped
{
public:
  explicit Init_CommsPortInfo_skipped(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::CommsPortInfo skipped(::ublox_ubx_msgs::msg::CommsPortInfo::_skipped_type arg)
  {
    msg_.skipped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_msgs
{
public:
  explicit Init_CommsPortInfo_msgs(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_skipped msgs(::ublox_ubx_msgs::msg::CommsPortInfo::_msgs_type arg)
  {
    msg_.msgs = std::move(arg);
    return Init_CommsPortInfo_skipped(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_overrun_errs
{
public:
  explicit Init_CommsPortInfo_overrun_errs(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_msgs overrun_errs(::ublox_ubx_msgs::msg::CommsPortInfo::_overrun_errs_type arg)
  {
    msg_.overrun_errs = std::move(arg);
    return Init_CommsPortInfo_msgs(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_rx_peak_usage
{
public:
  explicit Init_CommsPortInfo_rx_peak_usage(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_overrun_errs rx_peak_usage(::ublox_ubx_msgs::msg::CommsPortInfo::_rx_peak_usage_type arg)
  {
    msg_.rx_peak_usage = std::move(arg);
    return Init_CommsPortInfo_overrun_errs(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_rx_usage
{
public:
  explicit Init_CommsPortInfo_rx_usage(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_rx_peak_usage rx_usage(::ublox_ubx_msgs::msg::CommsPortInfo::_rx_usage_type arg)
  {
    msg_.rx_usage = std::move(arg);
    return Init_CommsPortInfo_rx_peak_usage(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_rx_bytes
{
public:
  explicit Init_CommsPortInfo_rx_bytes(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_rx_usage rx_bytes(::ublox_ubx_msgs::msg::CommsPortInfo::_rx_bytes_type arg)
  {
    msg_.rx_bytes = std::move(arg);
    return Init_CommsPortInfo_rx_usage(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_rx_pending
{
public:
  explicit Init_CommsPortInfo_rx_pending(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_rx_bytes rx_pending(::ublox_ubx_msgs::msg::CommsPortInfo::_rx_pending_type arg)
  {
    msg_.rx_pending = std::move(arg);
    return Init_CommsPortInfo_rx_bytes(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_tx_peak_usage
{
public:
  explicit Init_CommsPortInfo_tx_peak_usage(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_rx_pending tx_peak_usage(::ublox_ubx_msgs::msg::CommsPortInfo::_tx_peak_usage_type arg)
  {
    msg_.tx_peak_usage = std::move(arg);
    return Init_CommsPortInfo_rx_pending(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_tx_usage
{
public:
  explicit Init_CommsPortInfo_tx_usage(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_tx_peak_usage tx_usage(::ublox_ubx_msgs::msg::CommsPortInfo::_tx_usage_type arg)
  {
    msg_.tx_usage = std::move(arg);
    return Init_CommsPortInfo_tx_peak_usage(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_tx_bytes
{
public:
  explicit Init_CommsPortInfo_tx_bytes(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_tx_usage tx_bytes(::ublox_ubx_msgs::msg::CommsPortInfo::_tx_bytes_type arg)
  {
    msg_.tx_bytes = std::move(arg);
    return Init_CommsPortInfo_tx_usage(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_tx_pending
{
public:
  explicit Init_CommsPortInfo_tx_pending(::ublox_ubx_msgs::msg::CommsPortInfo & msg)
  : msg_(msg)
  {}
  Init_CommsPortInfo_tx_bytes tx_pending(::ublox_ubx_msgs::msg::CommsPortInfo::_tx_pending_type arg)
  {
    msg_.tx_pending = std::move(arg);
    return Init_CommsPortInfo_tx_bytes(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

class Init_CommsPortInfo_port_id
{
public:
  Init_CommsPortInfo_port_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommsPortInfo_tx_pending port_id(::ublox_ubx_msgs::msg::CommsPortInfo::_port_id_type arg)
  {
    msg_.port_id = std::move(arg);
    return Init_CommsPortInfo_tx_pending(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CommsPortInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::CommsPortInfo>()
{
  return ublox_ubx_msgs::msg::builder::Init_CommsPortInfo_port_id();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__BUILDER_HPP_
