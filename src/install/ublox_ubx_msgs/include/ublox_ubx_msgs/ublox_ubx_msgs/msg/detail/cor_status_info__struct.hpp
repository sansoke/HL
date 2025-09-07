// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__CorStatusInfo __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__CorStatusInfo __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CorStatusInfo_
{
  using Type = CorStatusInfo_<ContainerAllocator>;

  explicit CorStatusInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol = 0;
      this->err_status = 0;
      this->msg_used = 0;
      this->correction_id = 0;
      this->msg_type_valid = false;
      this->msg_sub_type_valid = false;
      this->msg_input_handle = false;
      this->msg_encrypted = 0;
      this->msg_decrypted = 0;
    }
  }

  explicit CorStatusInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol = 0;
      this->err_status = 0;
      this->msg_used = 0;
      this->correction_id = 0;
      this->msg_type_valid = false;
      this->msg_sub_type_valid = false;
      this->msg_input_handle = false;
      this->msg_encrypted = 0;
      this->msg_decrypted = 0;
    }
  }

  // field types and members
  using _protocol_type =
    uint8_t;
  _protocol_type protocol;
  using _err_status_type =
    uint8_t;
  _err_status_type err_status;
  using _msg_used_type =
    uint8_t;
  _msg_used_type msg_used;
  using _correction_id_type =
    uint16_t;
  _correction_id_type correction_id;
  using _msg_type_valid_type =
    bool;
  _msg_type_valid_type msg_type_valid;
  using _msg_sub_type_valid_type =
    bool;
  _msg_sub_type_valid_type msg_sub_type_valid;
  using _msg_input_handle_type =
    bool;
  _msg_input_handle_type msg_input_handle;
  using _msg_encrypted_type =
    uint8_t;
  _msg_encrypted_type msg_encrypted;
  using _msg_decrypted_type =
    uint8_t;
  _msg_decrypted_type msg_decrypted;

  // setters for named parameter idiom
  Type & set__protocol(
    const uint8_t & _arg)
  {
    this->protocol = _arg;
    return *this;
  }
  Type & set__err_status(
    const uint8_t & _arg)
  {
    this->err_status = _arg;
    return *this;
  }
  Type & set__msg_used(
    const uint8_t & _arg)
  {
    this->msg_used = _arg;
    return *this;
  }
  Type & set__correction_id(
    const uint16_t & _arg)
  {
    this->correction_id = _arg;
    return *this;
  }
  Type & set__msg_type_valid(
    const bool & _arg)
  {
    this->msg_type_valid = _arg;
    return *this;
  }
  Type & set__msg_sub_type_valid(
    const bool & _arg)
  {
    this->msg_sub_type_valid = _arg;
    return *this;
  }
  Type & set__msg_input_handle(
    const bool & _arg)
  {
    this->msg_input_handle = _arg;
    return *this;
  }
  Type & set__msg_encrypted(
    const uint8_t & _arg)
  {
    this->msg_encrypted = _arg;
    return *this;
  }
  Type & set__msg_decrypted(
    const uint8_t & _arg)
  {
    this->msg_decrypted = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PROTOCOL_UNKNOWN =
    0u;
  static constexpr uint8_t PROTOCOL_RTCM3 =
    1u;
  static constexpr uint8_t PROTOCOL_SPARTN =
    2u;
  static constexpr uint8_t PROTOCOL_UBX_RXM_PMP =
    29u;
  static constexpr uint8_t PROTOCOL_UBX_RXM_QZSSL6 =
    30u;
  static constexpr uint8_t ERR_UNKNOWN =
    0u;
  static constexpr uint8_t ERR_ERROR_FREE =
    1u;
  static constexpr uint8_t ERR_ERRONEOUS =
    2u;
  static constexpr uint8_t MSG_USED_UNKNOWN =
    0u;
  static constexpr uint8_t MSG_NOT_USED =
    1u;
  static constexpr uint8_t MSG_USED =
    2u;
  static constexpr uint8_t MSG_ENCRYPTION_UNKNOWN =
    0u;
  static constexpr uint8_t MSG_NOT_ENCRYPTED =
    1u;
  static constexpr uint8_t MSG_ENCRYPTED =
    2u;
  static constexpr uint8_t MSG_DECRYPTION_UNKNOWN =
    0u;
  static constexpr uint8_t MSG_NOT_DECRYPTED =
    1u;
  static constexpr uint8_t MSG_DECRYPTED =
    2u;

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__CorStatusInfo
    std::shared_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__CorStatusInfo
    std::shared_ptr<ublox_ubx_msgs::msg::CorStatusInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CorStatusInfo_ & other) const
  {
    if (this->protocol != other.protocol) {
      return false;
    }
    if (this->err_status != other.err_status) {
      return false;
    }
    if (this->msg_used != other.msg_used) {
      return false;
    }
    if (this->correction_id != other.correction_id) {
      return false;
    }
    if (this->msg_type_valid != other.msg_type_valid) {
      return false;
    }
    if (this->msg_sub_type_valid != other.msg_sub_type_valid) {
      return false;
    }
    if (this->msg_input_handle != other.msg_input_handle) {
      return false;
    }
    if (this->msg_encrypted != other.msg_encrypted) {
      return false;
    }
    if (this->msg_decrypted != other.msg_decrypted) {
      return false;
    }
    return true;
  }
  bool operator!=(const CorStatusInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CorStatusInfo_

// alias to use template instance with default allocator
using CorStatusInfo =
  ublox_ubx_msgs::msg::CorStatusInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::PROTOCOL_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::PROTOCOL_RTCM3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::PROTOCOL_SPARTN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::PROTOCOL_UBX_RXM_PMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::PROTOCOL_UBX_RXM_QZSSL6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::ERR_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::ERR_ERROR_FREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::ERR_ERRONEOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_USED_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_NOT_USED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_USED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_ENCRYPTION_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_NOT_ENCRYPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_ENCRYPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_DECRYPTION_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_NOT_DECRYPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CorStatusInfo_<ContainerAllocator>::MSG_DECRYPTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_HPP_
