// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ublox_ubx_msgs:msg/JamStateCentFreq.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__BUILDER_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ublox_ubx_msgs/msg/detail/jam_state_cent_freq__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ublox_ubx_msgs
{

namespace msg
{

namespace builder
{

class Init_JamStateCentFreq_jammed
{
public:
  explicit Init_JamStateCentFreq_jammed(::ublox_ubx_msgs::msg::JamStateCentFreq & msg)
  : msg_(msg)
  {}
  ::ublox_ubx_msgs::msg::JamStateCentFreq jammed(::ublox_ubx_msgs::msg::JamStateCentFreq::_jammed_type arg)
  {
    msg_.jammed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::JamStateCentFreq msg_;
};

class Init_JamStateCentFreq_cent_freq
{
public:
  Init_JamStateCentFreq_cent_freq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JamStateCentFreq_jammed cent_freq(::ublox_ubx_msgs::msg::JamStateCentFreq::_cent_freq_type arg)
  {
    msg_.cent_freq = std::move(arg);
    return Init_JamStateCentFreq_jammed(msg_);
  }

private:
  ::ublox_ubx_msgs::msg::JamStateCentFreq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ublox_ubx_msgs::msg::JamStateCentFreq>()
{
  return ublox_ubx_msgs::msg::builder::Init_JamStateCentFreq_cent_freq();
}

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__BUILDER_HPP_
