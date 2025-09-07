// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_CorStatusInfo_msg_decrypted
{
public:
  explicit Init_CorStatusInfo_msg_decrypted(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_decrypted(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_decrypted_type arg)
  {
    msg_.msg_decrypted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_msg_encrypted
{
public:
  explicit Init_CorStatusInfo_msg_encrypted(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_decrypted msg_encrypted(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_encrypted_type arg)
  {
    msg_.msg_encrypted = std::move(arg);
    return Init_CorStatusInfo_msg_decrypted(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_msg_input_handle
{
public:
  explicit Init_CorStatusInfo_msg_input_handle(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_encrypted msg_input_handle(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_input_handle_type arg)
  {
    msg_.msg_input_handle = std::move(arg);
    return Init_CorStatusInfo_msg_encrypted(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_msg_sub_type_valid
{
public:
  explicit Init_CorStatusInfo_msg_sub_type_valid(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_input_handle msg_sub_type_valid(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_sub_type_valid_type arg)
  {
    msg_.msg_sub_type_valid = std::move(arg);
    return Init_CorStatusInfo_msg_input_handle(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_msg_type_valid
{
public:
  explicit Init_CorStatusInfo_msg_type_valid(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_sub_type_valid msg_type_valid(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_type_valid_type arg)
  {
    msg_.msg_type_valid = std::move(arg);
    return Init_CorStatusInfo_msg_sub_type_valid(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_correction_id
{
public:
  explicit Init_CorStatusInfo_correction_id(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_type_valid correction_id(::ublox_ubx_msgs::msg::CorStatusInfo::_correction_id_type arg)
  {
    msg_.correction_id = std::move(arg);
    return Init_CorStatusInfo_msg_type_valid(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_msg_used
{
public:
  explicit Init_CorStatusInfo_msg_used(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_correction_id msg_used(::ublox_ubx_msgs::msg::CorStatusInfo::_msg_used_type arg)
  {
    msg_.msg_used = std::move(arg);
    return Init_CorStatusInfo_correction_id(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_err_status
{
public:
  explicit Init_CorStatusInfo_err_status(::ublox_ubx_msgs::msg::CorStatusInfo & msg)
  : msg_(msg)
  {}
  Init_CorStatusInfo_msg_used err_status(::ublox_ubx_msgs::msg::CorStatusInfo::_err_status_type arg)
  {
    msg_.err_status = std::move(arg);
    return Init_CorStatusInfo_msg_used(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

class Init_CorStatusInfo_protocol
{
public:
  Init_CorStatusInfo_protocol()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CorStatusInfo_err_status protocol(::ublox_ubx_msgs::msg::CorStatusInfo::_protocol_type arg)
  {
    msg_.protocol = std::move(arg);
    return Init_CorStatusInfo_err_status(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::CorStatusInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::CorStatusInfo>()
{
  return ublox_ubx_msgs::msg::builder::Init_CorStatusInfo_protocol();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__BUILDER_HPP_
