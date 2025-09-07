// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_H_

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
// Member 'key_info'
#include "ublox_ubx_msgs/msg/detail/spartn_key_info__struct.h"
// Member 'key_payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UBXRxmSpartnKey in the package ublox_ubx_msgs.
/**
  * UBX-RXM-SPARTNKEY (0x02 0x36) - Transfer dynamic SPARTN keys
 */
typedef struct ublox_ubx_msgs__msg__UBXRxmSpartnKey
{
  /// Header timestamp should be acquisition time
  std_msgs__msg__Header header;
  /// Fields
  /// Message version
  uint8_t version;
  /// Number of keys in the message (0, 1, or 2)
  uint8_t num_keys;
  /// Reserved
  uint8_t reserved0[2];
  /// Repeated group for key info
  ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence key_info;
  /// Concatenated key payloads (raw bytes)
  rosidl_runtime_c__uint8__Sequence key_payload;
} ublox_ubx_msgs__msg__UBXRxmSpartnKey;

// Struct for a sequence of ublox_ubx_msgs__msg__UBXRxmSpartnKey.
typedef struct ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence
{
  ublox_ubx_msgs__msg__UBXRxmSpartnKey * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__UBXRxmSpartnKey__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_RXM_SPARTN_KEY__STRUCT_H_
