// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmCor.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_HPP_

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
// Member 'status_info'
#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__UBXRxmCor __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__UBXRxmCor __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UBXRxmCor_
{
  using Type = UBXRxmCor_<ContainerAllocator>;

  explicit UBXRxmCor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->ebno = 0;
      this->msg_type = 0;
      this->msg_sub_type = 0;
    }
  }

  explicit UBXRxmCor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->ebno = 0;
      this->msg_type = 0;
      this->msg_sub_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    uint8_t;
  _version_type version;
  using _ebno_type =
    uint8_t;
  _ebno_type ebno;
  using _status_info_type =
    ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>;
  _status_info_type status_info;
  using _msg_type_type =
    uint16_t;
  _msg_type_type msg_type;
  using _msg_sub_type_type =
    uint16_t;
  _msg_sub_type_type msg_sub_type;

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
  Type & set__ebno(
    const uint8_t & _arg)
  {
    this->ebno = _arg;
    return *this;
  }
  Type & set__status_info(
    const ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> & _arg)
  {
    this->status_info = _arg;
    return *this;
  }
  Type & set__msg_type(
    const uint16_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__msg_sub_type(
    const uint16_t & _arg)
  {
    this->msg_sub_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXRxmCor
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXRxmCor
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmCor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UBXRxmCor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->ebno != other.ebno) {
      return false;
    }
    if (this->status_info != other.status_info) {
      return false;
    }
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->msg_sub_type != other.msg_sub_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const UBXRxmCor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UBXRxmCor_

// alias to use template instance with default allocator
using UBXRxmCor =
  ublox_ubx_msgs::msg::UBXRxmCor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_HPP_
