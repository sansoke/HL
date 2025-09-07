// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/UBXMonComms.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'ports'
#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__UBXMonComms __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__UBXMonComms __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UBXMonComms_
{
  using Type = UBXMonComms_<ContainerAllocator>;

  explicit UBXMonComms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->n_ports = 0;
      this->tx_errors = 0;
      this->reserved0 = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->prot_ids.begin(), this->prot_ids.end(), 0);
    }
  }

  explicit UBXMonComms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    prot_ids(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->n_ports = 0;
      this->tx_errors = 0;
      this->reserved0 = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->prot_ids.begin(), this->prot_ids.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    uint8_t;
  _version_type version;
  using _n_ports_type =
    uint8_t;
  _n_ports_type n_ports;
  using _tx_errors_type =
    uint8_t;
  _tx_errors_type tx_errors;
  using _reserved0_type =
    uint8_t;
  _reserved0_type reserved0;
  using _prot_ids_type =
    std::array<uint8_t, 4>;
  _prot_ids_type prot_ids;
  using _ports_type =
    std::vector<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>>;
  _ports_type ports;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version(
    const uint8_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__n_ports(
    const uint8_t & _arg)
  {
    this->n_ports = _arg;
    return *this;
  }
  Type & set__tx_errors(
    const uint8_t & _arg)
  {
    this->tx_errors = _arg;
    return *this;
  }
  Type & set__reserved0(
    const uint8_t & _arg)
  {
    this->reserved0 = _arg;
    return *this;
  }
  Type & set__prot_ids(
    const std::array<uint8_t, 4> & _arg)
  {
    this->prot_ids = _arg;
    return *this;
  }
  Type & set__ports(
    const std::vector<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ublox_ubx_msgs::msg::CommsPortInfo_<ContainerAllocator>>> & _arg)
  {
    this->ports = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PROTOCOL_UBX =
    0u;
  static constexpr uint8_t PROTOCOL_NMEA =
    1u;
  static constexpr uint8_t PROTOCOL_RTCM2 =
    2u;
  static constexpr uint8_t PROTOCOL_RTCM3 =
    5u;
  static constexpr uint8_t PROTOCOL_SPARTN =
    6u;
  static constexpr uint8_t NO_PROTOCOL =
    255u;

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXMonComms
    std::shared_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXMonComms
    std::shared_ptr<ublox_ubx_msgs::msg::UBXMonComms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UBXMonComms_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->n_ports != other.n_ports) {
      return false;
    }
    if (this->tx_errors != other.tx_errors) {
      return false;
    }
    if (this->reserved0 != other.reserved0) {
      return false;
    }
    if (this->prot_ids != other.prot_ids) {
      return false;
    }
    if (this->ports != other.ports) {
      return false;
    }
    return true;
  }
  bool operator!=(const UBXMonComms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UBXMonComms_

// alias to use template instance with default allocator
using UBXMonComms =
  ublox_ubx_msgs::msg::UBXMonComms_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::PROTOCOL_UBX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::PROTOCOL_NMEA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::PROTOCOL_RTCM2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::PROTOCOL_RTCM3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::PROTOCOL_SPARTN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UBXMonComms_<ContainerAllocator>::NO_PROTOCOL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_HPP_
