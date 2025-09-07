// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpartnKeyInfo in the package ublox_ubx_msgs.
/**
  * SpartnKeyInfo - Key information for UBX-RXM-SPARTNKEY
 */
typedef struct ublox_ubx_msgs__msg__SpartnKeyInfo
{
  /// Fields
  /// Reserved
  uint8_t reserved1;
  /// Key length in bytes
  uint8_t key_length_bytes;
  /// GPS week number the key is valid from
  uint16_t valid_from_wno;
  /// GPS time of week the key is valid from
  uint32_t valid_from_tow;
} ublox_ubx_msgs__msg__SpartnKeyInfo;

// Struct for a sequence of ublox_ubx_msgs__msg__SpartnKeyInfo.
typedef struct ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence
{
  ublox_ubx_msgs__msg__SpartnKeyInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__SpartnKeyInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__SPARTN_KEY_INFO__STRUCT_H_
