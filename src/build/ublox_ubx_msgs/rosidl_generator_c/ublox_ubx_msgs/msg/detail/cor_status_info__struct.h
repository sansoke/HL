// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROTOCOL_UNKNOWN'.
/**
  * Constants for protocol in statusInfo
 */
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__PROTOCOL_UNKNOWN = 0
};

/// Constant 'PROTOCOL_RTCM3'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__PROTOCOL_RTCM3 = 1
};

/// Constant 'PROTOCOL_SPARTN'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__PROTOCOL_SPARTN = 2
};

/// Constant 'PROTOCOL_UBX_RXM_PMP'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__PROTOCOL_UBX_RXM_PMP = 29
};

/// Constant 'PROTOCOL_UBX_RXM_QZSSL6'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__PROTOCOL_UBX_RXM_QZSSL6 = 30
};

/// Constant 'ERR_UNKNOWN'.
/**
  * Constants for error status
 */
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__ERR_UNKNOWN = 0
};

/// Constant 'ERR_ERROR_FREE'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__ERR_ERROR_FREE = 1
};

/// Constant 'ERR_ERRONEOUS'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__ERR_ERRONEOUS = 2
};

/// Constant 'MSG_USED_UNKNOWN'.
/**
  * Constants for message usage
 */
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_USED_UNKNOWN = 0
};

/// Constant 'MSG_NOT_USED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_NOT_USED = 1
};

/// Constant 'MSG_USED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_USED = 2
};

/// Constant 'MSG_ENCRYPTION_UNKNOWN'.
/**
  * Constants for encryption and decryption status
 */
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_ENCRYPTION_UNKNOWN = 0
};

/// Constant 'MSG_NOT_ENCRYPTED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_NOT_ENCRYPTED = 1
};

/// Constant 'MSG_ENCRYPTED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_ENCRYPTED = 2
};

/// Constant 'MSG_DECRYPTION_UNKNOWN'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_DECRYPTION_UNKNOWN = 0
};

/// Constant 'MSG_NOT_DECRYPTED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_NOT_DECRYPTED = 1
};

/// Constant 'MSG_DECRYPTED'.
enum
{
  ublox_ubx_msgs__msg__CorStatusInfo__MSG_DECRYPTED = 2
};

/// Struct defined in msg/CorStatusInfo in the package ublox_ubx_msgs.
/**
  * CorStatusInfo - Status information for UBX-RXM-COR
 */
typedef struct ublox_ubx_msgs__msg__CorStatusInfo
{
  /// Fields
  /// Input correction data protocol (refer to constants)
  uint8_t protocol;
  /// Error status of the received correction message
  uint8_t err_status;
  /// Status of receiver using the input message
  uint8_t msg_used;
  /// Identifier for the correction stream (station ID)
  uint16_t correction_id;
  /// Validity of the msgType field
  bool msg_type_valid;
  /// Validity of the msgSubType field
  bool msg_sub_type_valid;
  /// Input handling support of the input message
  bool msg_input_handle;
  /// Encryption status of the input message
  uint8_t msg_encrypted;
  /// Decryption status of the input message
  uint8_t msg_decrypted;
} ublox_ubx_msgs__msg__CorStatusInfo;

// Struct for a sequence of ublox_ubx_msgs__msg__CorStatusInfo.
typedef struct ublox_ubx_msgs__msg__CorStatusInfo__Sequence
{
  ublox_ubx_msgs__msg__CorStatusInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__CorStatusInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__COR_STATUS_INFO__STRUCT_H_
