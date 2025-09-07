// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CommsPortInfo in the package ublox_ubx_msgs.
/**
  * CommsPortInfo - Communication port status information
 */
typedef struct ublox_ubx_msgs__msg__CommsPortInfo
{
  /// Port ID
  uint16_t port_id;
  /// Number of bytes pending for transmission
  uint16_t tx_pending;
  /// Total number of bytes transmitted
  uint32_t tx_bytes;
  /// Percentage of transmit buffer currently used
  uint8_t tx_usage;
  /// Peak usage percentage of the transmit buffer
  uint8_t tx_peak_usage;
  /// Number of bytes pending for reception
  uint16_t rx_pending;
  /// Total number of bytes received
  uint32_t rx_bytes;
  /// Percentage of receive buffer currently used
  uint8_t rx_usage;
  /// Peak usage percentage of the receive buffer
  uint8_t rx_peak_usage;
  /// Number of buffer overrun errors
  uint16_t overrun_errs;
  /// Count of different message types processed:
  uint16_t msgs[4];
  /// Number of messages skipped
  uint32_t skipped;
} ublox_ubx_msgs__msg__CommsPortInfo;

// Struct for a sequence of ublox_ubx_msgs__msg__CommsPortInfo.
typedef struct ublox_ubx_msgs__msg__CommsPortInfo__Sequence
{
  ublox_ubx_msgs__msg__CommsPortInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__CommsPortInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COMMS_PORT_INFO__STRUCT_H_
