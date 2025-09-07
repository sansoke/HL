// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__struct.h"
#include "ublox_ubx_msgs/msg/detail/comms_port_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ublox_ubx_msgs__msg__comms_port_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ublox_ubx_msgs.msg._comms_port_info.CommsPortInfo", full_classname_dest, 49) == 0);
  }
  ublox_ubx_msgs__msg__CommsPortInfo * ros_message = _ros_message;
  {  // port_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->port_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_pending");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_pending = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_bytes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_peak_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_peak_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_peak_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_pending");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_pending = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_bytes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_peak_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_peak_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_peak_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // overrun_errs
    PyObject * field = PyObject_GetAttrString(_pymsg, "overrun_errs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->overrun_errs = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgs");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 4;
      uint16_t * dest = ros_message->msgs;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // skipped
    PyObject * field = PyObject_GetAttrString(_pymsg, "skipped");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->skipped = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ublox_ubx_msgs__msg__comms_port_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommsPortInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ublox_ubx_msgs.msg._comms_port_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommsPortInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ublox_ubx_msgs__msg__CommsPortInfo * ros_message = (ublox_ubx_msgs__msg__CommsPortInfo *)raw_ros_message;
  {  // port_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->port_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_pending
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_pending);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_peak_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_peak_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_peak_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_pending
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_pending);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_peak_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_peak_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_peak_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overrun_errs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->overrun_errs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overrun_errs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msgs
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "msgs");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->msgs[0]);
    memcpy(dst, src, 4 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // skipped
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->skipped);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skipped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
