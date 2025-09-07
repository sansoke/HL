// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_HPP_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ublox_ubx_msgs__msg__UBXNavSvin __attribute__((deprecated))
#else
# define DEPRECATED__ublox_ubx_msgs__msg__UBXNavSvin __declspec(deprecated)
#endif

namespace ublox_ubx_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UBXNavSvin_
{
  using Type = UBXNavSvin_<ContainerAllocator>;

  explicit UBXNavSvin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->itow = 0ul;
      this->dur = 0ul;
      this->mean_x = 0l;
      this->mean_y = 0l;
      this->mean_z = 0l;
      this->mean_x_hp = 0;
      this->mean_y_hp = 0;
      this->mean_z_hp = 0;
      this->mean_acc = 0ul;
      this->obs = 0ul;
      this->valid = false;
      this->active = false;
    }
  }

  explicit UBXNavSvin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->itow = 0ul;
      this->dur = 0ul;
      this->mean_x = 0l;
      this->mean_y = 0l;
      this->mean_z = 0l;
      this->mean_x_hp = 0;
      this->mean_y_hp = 0;
      this->mean_z_hp = 0;
      this->mean_acc = 0ul;
      this->obs = 0ul;
      this->valid = false;
      this->active = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    uint8_t;
  _version_type version;
  using _itow_type =
    uint32_t;
  _itow_type itow;
  using _dur_type =
    uint32_t;
  _dur_type dur;
  using _mean_x_type =
    int32_t;
  _mean_x_type mean_x;
  using _mean_y_type =
    int32_t;
  _mean_y_type mean_y;
  using _mean_z_type =
    int32_t;
  _mean_z_type mean_z;
  using _mean_x_hp_type =
    int8_t;
  _mean_x_hp_type mean_x_hp;
  using _mean_y_hp_type =
    int8_t;
  _mean_y_hp_type mean_y_hp;
  using _mean_z_hp_type =
    int8_t;
  _mean_z_hp_type mean_z_hp;
  using _mean_acc_type =
    uint32_t;
  _mean_acc_type mean_acc;
  using _obs_type =
    uint32_t;
  _obs_type obs;
  using _valid_type =
    bool;
  _valid_type valid;
  using _active_type =
    bool;
  _active_type active;

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
  Type & set__itow(
    const uint32_t & _arg)
  {
    this->itow = _arg;
    return *this;
  }
  Type & set__dur(
    const uint32_t & _arg)
  {
    this->dur = _arg;
    return *this;
  }
  Type & set__mean_x(
    const int32_t & _arg)
  {
    this->mean_x = _arg;
    return *this;
  }
  Type & set__mean_y(
    const int32_t & _arg)
  {
    this->mean_y = _arg;
    return *this;
  }
  Type & set__mean_z(
    const int32_t & _arg)
  {
    this->mean_z = _arg;
    return *this;
  }
  Type & set__mean_x_hp(
    const int8_t & _arg)
  {
    this->mean_x_hp = _arg;
    return *this;
  }
  Type & set__mean_y_hp(
    const int8_t & _arg)
  {
    this->mean_y_hp = _arg;
    return *this;
  }
  Type & set__mean_z_hp(
    const int8_t & _arg)
  {
    this->mean_z_hp = _arg;
    return *this;
  }
  Type & set__mean_acc(
    const uint32_t & _arg)
  {
    this->mean_acc = _arg;
    return *this;
  }
  Type & set__obs(
    const uint32_t & _arg)
  {
    this->obs = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> *;
  using ConstRawPtr =
    const ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXNavSvin
    std::shared_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ublox_ubx_msgs__msg__UBXNavSvin
    std::shared_ptr<ublox_ubx_msgs::msg::UBXNavSvin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UBXNavSvin_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->itow != other.itow) {
      return false;
    }
    if (this->dur != other.dur) {
      return false;
    }
    if (this->mean_x != other.mean_x) {
      return false;
    }
    if (this->mean_y != other.mean_y) {
      return false;
    }
    if (this->mean_z != other.mean_z) {
      return false;
    }
    if (this->mean_x_hp != other.mean_x_hp) {
      return false;
    }
    if (this->mean_y_hp != other.mean_y_hp) {
      return false;
    }
    if (this->mean_z_hp != other.mean_z_hp) {
      return false;
    }
    if (this->mean_acc != other.mean_acc) {
      return false;
    }
    if (this->obs != other.obs) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const UBXNavSvin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UBXNavSvin_

// alias to use template instance with default allocator
using UBXNavSvin =
  ublox_ubx_msgs::msg::UBXNavSvin_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ublox_ubx_msgs

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_HPP_
