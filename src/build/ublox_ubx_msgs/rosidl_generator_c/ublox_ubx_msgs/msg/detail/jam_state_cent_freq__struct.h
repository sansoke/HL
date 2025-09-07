// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ublox_ubx_msgs:msg/JamStateCentFreq.idl
// generated code does not contain a copyright notice

#ifndef UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_H_
#define UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JamStateCentFreq in the package ublox_ubx_msgs.
/**
  * Jamming State of signals related to at least one in-use signal,
  * for which a sufficient amount of information is current available
  * to determine if it is affected by jamming
 */
typedef struct ublox_ubx_msgs__msg__JamStateCentFreq
{
  /// Center frequency in, floored to the nearest kHzmultiple
  uint32_t cent_freq;
  /// Flag indicates whether signals on the given center frequency are considered jammed
  bool jammed;
} ublox_ubx_msgs__msg__JamStateCentFreq;

// Struct for a sequence of ublox_ubx_msgs__msg__JamStateCentFreq.
typedef struct ublox_ubx_msgs__msg__JamStateCentFreq__Sequence
{
  ublox_ubx_msgs__msg__JamStateCentFreq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ublox_ubx_msgs__msg__JamStateCentFreq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_UBX_MSGS__MSG__DETAIL__JAM_STATE_CENT_FREQ__STRUCT_H_
