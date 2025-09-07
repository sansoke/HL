// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__CommsPortInfo __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__CommsPortInfo __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommsPortInfo_
{
  using Type = CommsPortInfo_<ContainerAllocator>;

  explicit CommsPortInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_id = 0;
      this->tx_pending = 0;
      this->tx_bytes = 0ul;
      this->tx_usage = 0;
      this->tx_peak_usage = 0;
      this->rx_pending = 0;
      this->rx_bytes = 0ul;
      this->rx_usage = 0;
      this->rx_peak_usage = 0;
      this->overrun_errs = 0;
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->msgs.begin(), this->msgs.end(), 0);
      this->skipped = 0ul;
    }
  }

  explicit CommsPortInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msgs(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_id = 0;
      this->tx_pending = 0;
      this->tx_bytes = 0ul;
      this->tx_usage = 0;
      this->tx_peak_usage = 0;
      this->rx_pending = 0;
      this->rx_bytes = 0ul;
      this->rx_usage = 0;
      this->rx_peak_usage = 0;
      this->overrun_errs = 0;
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->msgs.begin(), this->msgs.end(), 0);
      this->skipped = 0ul;
    }
  }

  // field types and members
  using _port_id_type =
    uint16_t;
  _port_id_type port_id;
  using _tx_pending_type =
    uint16_t;
  _tx_pending_type tx_pending;
  using _tx_bytes_type =
    uint32_t;
  _tx_bytes_type tx_bytes;
  using _tx_usage_type =
    uint8_t;
  _tx_usage_type tx_usage;
  using _tx_peak_usage_type =
    uint8_t;
  _tx_peak_usage_type tx_peak_usage;
  using _rx_pending_type =
    uint16_t;
  _rx_pending_type rx_pending;
  using _rx_bytes_type =
    uint32_t;
  _rx_bytes_type rx_bytes;
  using _rx_usage_type =
    uint8_t;
  _rx_usage_type rx_usage;
  using _rx_peak_usage_type =
    uint8_t;
  _rx_peak_usage_type rx_peak_usage;
  using _overrun_errs_type =
    uint16_t;
  _overrun_errs_type overrun_errs;
  using _msgs_type =
    std::array<uint16_t, 4>;
  _msgs_type msgs;
  using _skipped_type =
    uint32_t;
  _skipped_type skipped;

  // setters for named parameter idiom
  Type & set__port_id(
    const uint16_t & _arg)
  {
    this->port_id = _arg;
    return *this;
  }
  Type & set__tx_pending(
    const uint16_t & _arg)
  {
    this->tx_pending = _arg;
    return *this;
  }
  Type & set__tx_bytes(
    const uint32_t & _arg)
  {
    this->tx_bytes = _arg;
    return *this;
  }
  Type & set__tx_usage(
    const uint8_t & _arg)
  {
    this->tx_usage = _arg;
    return *this;
  }
  Type & set__tx_peak_usage(
    const uint8_t & _arg)
  {
    this->tx_peak_usage = _arg;
    return *this;
  }
  Type & set__rx_pending(
    const uint16_t & _arg)
  {
    this->rx_pending = _arg;
    return *this;
  }
  Type & set__rx_bytes(
    const uint32_t & _arg)
  {
    this->rx_bytes = _arg;
    return *this;
  }
  Type & set__rx_usage(
    const uint8_t & _arg)
  {
    this->rx_usage = _arg;
    return *this;
  }
  Type & set__rx_peak_usage(
    const uint8_t & _arg)
  {
    this->rx_peak_usage = _arg;
    return *this;
  }
  Type & set__overrun_errs(
    const uint16_t & _arg)
  {
    this->overrun_errs = _arg;
    return *this;
  }
  Type & set__msgs(
    const std::array<uint16_t, 4> & _arg)
  {
    this->msgs = _arg;
    return *this;
  }
  Type & set__skipped(
    const uint32_t & _arg)
  {
    this->skipped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__CommsPortInfo
    std::shared_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__CommsPortInfo
    std::shared_ptr<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommsPortInfo_ & other) const
  {
    if (this->port_id != other.port_id) {
      return false;
    }
    if (this->tx_pending != other.tx_pending) {
      return false;
    }
    if (this->tx_bytes != other.tx_bytes) {
      return false;
    }
    if (this->tx_usage != other.tx_usage) {
      return false;
    }
    if (this->tx_peak_usage != other.tx_peak_usage) {
      return false;
    }
    if (this->rx_pending != other.rx_pending) {
      return false;
    }
    if (this->rx_bytes != other.rx_bytes) {
      return false;
    }
    if (this->rx_usage != other.rx_usage) {
      return false;
    }
    if (this->rx_peak_usage != other.rx_peak_usage) {
      return false;
    }
    if (this->overrun_errs != other.overrun_errs) {
      return false;
    }
    if (this->msgs != other.msgs) {
      return false;
    }
    if (this->skipped != other.skipped) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommsPortInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommsPortInfo_

// alias to use template instance with default allocator
using CommsPortInfo =
  ublox_ubx_msgs::msg::CommsPortInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_HPP_
