// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/UBXNavSvin in the package ublox_ubx_msgs.
/**
  * this message contains a UBX-NAV-SVIN (0x01 0x3b) record
 */
typedef struct ublox_ubx_msgs__msg__UBXNavSvin
{
  /// Header timestamp should be acquisition time
  std_msgs__msg__Header header;
  /// Message version
  uint8_t version;
  /// ms - GPS Time of week of the navigation epoch
  uint32_t itow;
  /// s - Passed survey-in observation time
  uint32_t dur;
  /// cm - Current survey-in mean position ECEF X coordinate
  int32_t mean_x;
  /// cm - Current survey-in mean position ECEF Y coordinate
  int32_t mean_y;
  /// cm - Current survey-in mean position ECEF Z coordinate
  int32_t mean_z;
  /// 0.1mm - Current high-precision survey-in mean position
  /// ECEF X coordinate. Must be in the range -99..+99.
  /// The current survey-in mean position ECEF X coordinate,
  /// in units of cm, is given by meanX + (0.01 * meanXHP)
  int8_t mean_x_hp;
  /// 0.1mm - Current high-precision survey-in mean position
  /// ECEF Y coordinate. Must be in the range -99..+99.
  /// The current survey-in mean position ECEF Y coordinate,
  /// in units of cm, is given by meanY + (0.01 * meanYHP)
  int8_t mean_y_hp;
  /// 0.1mm - Current high-precision survey-in mean position
  /// ECEF Z coordinate. Must be in the range -99..+99.
  /// The current survey-in mean position ECEF Z coordinate,
  /// in units of cm, is given by meanZ + (0.01 * meanZHP)
  int8_t mean_z_hp;
  /// 0.1mm - Current survey-in mean position accuracy
  uint32_t mean_acc;
  /// Number of position observations used during survey-in
  uint32_t obs;
  /// Survey-in position validity flag, 1 = valid, otherwise
  /// 0
  bool valid;
  /// Survey-in in progress flag, 1 = in-progress, otherwise
  /// 0
  bool active;
} ublox_ubx_msgs__msg__UBXNavSvin;

// Struct for a sequence of ublox_ubx_msgs__msg__UBXNavSvin.
typedef struct ublox_ubx_msgs__msg__UBXNavSvin__Sequence
{
  ublox_ubx_msgs__msg__UBXNavSvin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__UBXNavSvin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_NAV_SVIN__STRUCT_H_
