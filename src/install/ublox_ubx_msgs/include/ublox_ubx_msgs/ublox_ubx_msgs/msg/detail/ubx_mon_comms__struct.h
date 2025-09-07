// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/UBXMonComms.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROTOCOL_UBX'.
/**
  * Constants for protocol in prot_ids
 */
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__PROTOCOL_UBX = 0
};

/// Constant 'PROTOCOL_NMEA'.
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__PROTOCOL_NMEA = 1
};

/// Constant 'PROTOCOL_RTCM2'.
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__PROTOCOL_RTCM2 = 2
};

/// Constant 'PROTOCOL_RTCM3'.
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__PROTOCOL_RTCM3 = 5
};

/// Constant 'PROTOCOL_SPARTN'.
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__PROTOCOL_SPARTN = 6
};

/// Constant 'NO_PROTOCOL'.
enum
{
  ublox_ubx_msgs__msg__UBXMonComms__NO_PROTOCOL = 255
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ports'
#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.h"

/// Struct defined in msg/UBXMonComms in the package ublox_ubx_msgs.
/**
  * UBXMonComms - Overall communications monitoring message
 */
typedef struct ublox_ubx_msgs__msg__UBXMonComms
{
  /// Header timestamp should be acquisition time
  std_msgs__msg__Header header;
  /// Message version
  uint8_t version;
  /// Number of ports reported
  uint8_t n_ports;
  /// Transmit errors flags
  uint8_t tx_errors;
  /// Reserved byte
  uint8_t reserved0;
  /// Protocol identifiers active on this device:
  uint8_t prot_ids[4];
  /// Array of CommsPortInfo for each reported port
  ublox_ubx_msgs__msg__CommsPortInfo__Sequence ports;
} ublox_ubx_msgs__msg__UBXMonComms;

// Struct for a sequence of ublox_ubx_msgs__msg__UBXMonComms.
typedef struct ublox_ubx_msgs__msg__UBXMonComms__Sequence
{
  ublox_ubx_msgs__msg__UBXMonComms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__UBXMonComms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__UBX_MON_COMMS__STRUCT_H_
