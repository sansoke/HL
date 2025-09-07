// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartn.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MSG_UNKNOWN'.
/**
  * Constants for message used (flags bits 2...1)
 */
enum
{
  ublox_ubx_msgs__msg__UBXRxmSpartn__MSG_UNKNOWN = 0
};

/// Constant 'MSG_NOT_USED'.
enum
{
  ublox_ubx_msgs__msg__UBXRxmSpartn__MSG_NOT_USED = 1
};

/// Constant 'MSG_USED'.
enum
{
  ublox_ubx_msgs__msg__UBXRxmSpartn__MSG_USED = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/UBXRxmSpartn in the package ublox_ubx_msgs.
/**
  * UBX-RXM-SPARTN (0x02 0x33) - SPARTN input status
 */
typedef struct ublox_ubx_msgs__msg__UBXRxmSpartn
{
  /// Header timestamp should be acquisition time
  std_msgs__msg__Header header;
  /// Fields
  /// Message version
  uint8_t version;
  /// Status of the SPARTN message used (refer to constants)
  uint8_t msg_used;
  /// Message subtype
  uint16_t sub_type;
  /// uint8 reserved0  # Reserved
  /// Message type
  uint16_t msg_type;
} ublox_ubx_msgs__msg__UBXRxmSpartn;

// Struct for a sequence of ublox_ubx_msgs__msg__UBXRxmSpartn.
typedef struct ublox_ubx_msgs__msg__UBXRxmSpartn__Sequence
{
  ublox_ubx_msgs__msg__UBXRxmSpartn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__UBXRxmSpartn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN__STRUCT_H_
