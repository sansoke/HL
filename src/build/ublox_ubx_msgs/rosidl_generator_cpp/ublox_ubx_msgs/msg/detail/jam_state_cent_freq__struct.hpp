// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/JamStateCentFreq.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__JamStateCentFreq __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__JamStateCentFreq __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JamStateCentFreq_
{
  using Type = JamStateCentFreq_<ContainerAllocator>;

  explicit JamStateCentFreq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cent_freq = 0ul;
      this->jammed = false;
    }
  }

  explicit JamStateCentFreq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cent_freq = 0ul;
      this->jammed = false;
    }
  }

  // field types and members
  using _cent_freq_type =
    uint32_t;
  _cent_freq_type cent_freq;
  using _jammed_type =
    bool;
  _jammed_type jammed;

  // setters for named parameter idiom
  Type & set__cent_freq(
    const uint32_t & _arg)
  {
    this->cent_freq = _arg;
    return *this;
  }
  Type & set__jammed(
    const bool & _arg)
  {
    this->jammed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__JamStateCentFreq
    std::shared_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__JamStateCentFreq
    std::shared_ptr<ublox_ubx_msgs::msg::JamStateCentFreq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JamStateCentFreq_ & other) const
  {
    if (this->cent_freq != other.cent_freq) {
      return false;
    }
    if (this->jammed != other.jammed) {
      return false;
    }
    return true;
  }
  bool operator!=(const JamStateCentFreq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JamStateCentFreq_

// alias to use template instance with default allocator
using JamStateCentFreq =
  ublox_ubx_msgs::msg::JamStateCentFreq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_HPP_
