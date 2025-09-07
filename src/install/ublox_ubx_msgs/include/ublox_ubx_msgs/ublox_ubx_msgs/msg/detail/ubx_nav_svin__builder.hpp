// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/ubx_nav_svin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_UBXNavSvin_active
{
public:
  explicit Init_UBXNavSvin_active(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::UBXNavSvin active(::ublox_ubx_msgs::msg::UBXNavSvin::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_valid
{
public:
  explicit Init_UBXNavSvin_valid(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_active valid(::ublox_ubx_msgs::msg::UBXNavSvin::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_UBXNavSvin_active(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_obs
{
public:
  explicit Init_UBXNavSvin_obs(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_valid obs(::ublox_ubx_msgs::msg::UBXNavSvin::_obs_type arg)
  {
    msg_.obs = std::move(arg);
    return Init_UBXNavSvin_valid(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_acc
{
public:
  explicit Init_UBXNavSvin_mean_acc(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_obs mean_acc(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_acc_type arg)
  {
    msg_.mean_acc = std::move(arg);
    return Init_UBXNavSvin_obs(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_z_hp
{
public:
  explicit Init_UBXNavSvin_mean_z_hp(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_acc mean_z_hp(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_z_hp_type arg)
  {
    msg_.mean_z_hp = std::move(arg);
    return Init_UBXNavSvin_mean_acc(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_y_hp
{
public:
  explicit Init_UBXNavSvin_mean_y_hp(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_z_hp mean_y_hp(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_y_hp_type arg)
  {
    msg_.mean_y_hp = std::move(arg);
    return Init_UBXNavSvin_mean_z_hp(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_x_hp
{
public:
  explicit Init_UBXNavSvin_mean_x_hp(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_y_hp mean_x_hp(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_x_hp_type arg)
  {
    msg_.mean_x_hp = std::move(arg);
    return Init_UBXNavSvin_mean_y_hp(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_z
{
public:
  explicit Init_UBXNavSvin_mean_z(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_x_hp mean_z(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_z_type arg)
  {
    msg_.mean_z = std::move(arg);
    return Init_UBXNavSvin_mean_x_hp(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_y
{
public:
  explicit Init_UBXNavSvin_mean_y(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_z mean_y(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_y_type arg)
  {
    msg_.mean_y = std::move(arg);
    return Init_UBXNavSvin_mean_z(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_mean_x
{
public:
  explicit Init_UBXNavSvin_mean_x(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_y mean_x(::ublox_ubx_msgs::msg::UBXNavSvin::_mean_x_type arg)
  {
    msg_.mean_x = std::move(arg);
    return Init_UBXNavSvin_mean_y(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_dur
{
public:
  explicit Init_UBXNavSvin_dur(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_mean_x dur(::ublox_ubx_msgs::msg::UBXNavSvin::_dur_type arg)
  {
    msg_.dur = std::move(arg);
    return Init_UBXNavSvin_mean_x(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_itow
{
public:
  explicit Init_UBXNavSvin_itow(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_dur itow(::ublox_ubx_msgs::msg::UBXNavSvin::_itow_type arg)
  {
    msg_.itow = std::move(arg);
    return Init_UBXNavSvin_dur(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_version
{
public:
  explicit Init_UBXNavSvin_version(::ublox_ubx_msgs::msg::UBXNavSvin & msg)
  : msg_(msg)
  {}
  Init_UBXNavSvin_itow version(::ublox_ubx_msgs::msg::UBXNavSvin::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UBXNavSvin_itow(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

class Init_UBXNavSvin_header
{
public:
  Init_UBXNavSvin_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UBXNavSvin_version header(::ublox_ubx_msgs::msg::UBXNavSvin::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UBXNavSvin_version(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::UBXNavSvin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::UBXNavSvin>()
{
  return ublox_ubx_msgs::msg::builder::Init_UBXNavSvin_header();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__BUILDER_HPP_
