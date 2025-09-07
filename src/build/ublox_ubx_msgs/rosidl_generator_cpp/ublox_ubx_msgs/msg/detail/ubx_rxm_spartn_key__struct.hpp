// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_HPP_

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
// Member 'key_info'
#include "ublox_ubx_msgs/msg/detail/spartn_key_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__UBXRxmSpartnKey __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__UBXRxmSpartnKey __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UBXRxmSpartnKey_
{
  using Type = UBXRxmSpartnKey_<ContainerAllocator>;

  explicit UBXRxmSpartnKey_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->num_keys = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved0.begin(), this->reserved0.end(), 0);
    }
  }

  explicit UBXRxmSpartnKey_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reserved0(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->num_keys = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved0.begin(), this->reserved0.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    uint8_t;
  _version_type version;
  using _num_keys_type =
    uint8_t;
  _num_keys_type num_keys;
  using _reserved0_type =
    std::array<uint8_t, 2>;
  _reserved0_type reserved0;
  using _key_info_type =
    std::vector<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>>;
  _key_info_type key_info;
  using _key_payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _key_payload_type key_payload;

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
  Type & set__num_keys(
    const uint8_t & _arg)
  {
    this->num_keys = _arg;
    return *this;
  }
  Type & set__reserved0(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved0 = _arg;
    return *this;
  }
  Type & set__key_info(
    const std::vector<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ublox_ubx_msgs::msg::SpartnKeyInfo_<ContainerAllocator>>> & _arg)
  {
    this->key_info = _arg;
    return *this;
  }
  Type & set__key_payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->key_payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXRxmSpartnKey
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXRxmSpartnKey
    std::shared_ptr<ublox_ubx_msgs::msg::UBXRxmSpartnKey_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UBXRxmSpartnKey_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->num_keys != other.num_keys) {
      return false;
    }
    if (this->reserved0 != other.reserved0) {
      return false;
    }
    if (this->key_info != other.key_info) {
      return false;
    }
    if (this->key_payload != other.key_payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const UBXRxmSpartnKey_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UBXRxmSpartnKey_

// alias to use template instance with default allocator
using UBXRxmSpartnKey =
  ublox_ubx_msgs::msg::UBXRxmSpartnKey_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_HPP_
