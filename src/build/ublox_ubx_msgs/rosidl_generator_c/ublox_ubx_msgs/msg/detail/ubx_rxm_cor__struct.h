// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/UBXRxmCor.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_H_

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
// Member 'status_info'
#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.h"

/// Struct defined in msg/UBXRxmCor in the package ublox_ubx_msgs.
/**
  * UBX-RXM-COR (0x02 0x34) - Differential correction input status
 */
typedef struct ublox_ubx_msgs__msg__UBXRxmCor
{
  /// Header timestamp should be acquisition time
  std_msgs__msg__Header header;
  /// Fields
  /// Message version
  uint8_t version;
  /// Energy per bit to noise ratio (Eb/N0) in dB
  uint8_t ebno;
  /// uint8 reserved0    # Reserved
  /// Status info (separated into its own message)
  ublox_ubx_msgs__msg__CorStatusInfo status_info;
  /// Message type
  uint16_t msg_type;
  /// Message subtype
  uint16_t msg_sub_type;
} ublox_ubx_msgs__msg__UBXRxmCor;

// Struct for a sequence of ublox_ubx_msgs__msg__UBXRxmCor.
typedef struct ublox_ubx_msgs__msg__UBXRxmCor__Sequence
{
  ublox_ubx_msgs__msg__UBXRxmCor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__UBXRxmCor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_COR__STRUCT_H_
