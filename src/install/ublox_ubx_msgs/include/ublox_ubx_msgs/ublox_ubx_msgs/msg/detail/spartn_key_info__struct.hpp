// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__SpartnKeyInfo __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__SpartnKeyInfo __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpartnKeyInfo_
{
  using Type = SpartnKeyInfo_<ContainerAllocator>;

  explicit SpartnKeyInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved1 = 0;
      this->key_length_bytes = 0;
      this->valid_from_wno = 0;
      this->valid_from_tow = 0ul;
    }
  }

  explicit SpartnKeyInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved1 = 0;
      this->key_length_bytes = 0;
      this->valid_from_wno = 0;
      this->valid_from_tow = 0ul;
    }
  }

  // field types and members
  using _reserved1_type =
    uint8_t;
  _reserved1_type reserved1;
  using _key_length_bytes_type =
    uint8_t;
  _key_length_bytes_type key_length_bytes;
  using _valid_from_wno_type =
    uint16_t;
  _valid_from_wno_type valid_from_wno;
  using _valid_from_tow_type =
    uint32_t;
  _valid_from_tow_type valid_from_tow;

  // setters for named parameter idiom
  Type & set__reserved1(
    const uint8_t & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }
  Type & set__key_length_bytes(
    const uint8_t & _arg)
  {
    this->key_length_bytes = _arg;
    return *this;
  }
  Type & set__valid_from_wno(
    const uint16_t & _arg)
  {
    this->valid_from_wno = _arg;
    return *this;
  }
  Type & set__valid_from_tow(
    const uint32_t & _arg)
  {
    this->valid_from_tow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__SpartnKeyInfo
    std::shared_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__SpartnKeyInfo
    std::shared_ptr<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpartnKeyInfo_ & other) const
  {
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    if (this->key_length_bytes != other.key_length_bytes) {
      return false;
    }
    if (this->valid_from_wno != other.valid_from_wno) {
      return false;
    }
    if (this->valid_from_tow != other.valid_from_tow) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpartnKeyInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpartnKeyInfo_

// alias to use template instance with default allocator
using SpartnKeyInfo =
  ublox_ubx_msgs::msg::SpartnKeyInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_HPP_
