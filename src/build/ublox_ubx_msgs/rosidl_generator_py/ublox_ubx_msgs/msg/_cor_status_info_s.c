// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
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
#include "ublox_ubx_msgs/msg/detail/cor_status_info__struct.h"
#include "ublox_ubx_msgs/msg/detail/cor_status_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ublox_ubx_msgs__msg__cor_status_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ublox_ubx_msgs.msg._cor_status_info.CorStatusInfo", full_classname_dest, 49) == 0);
  }
  ublox_ubx_msgs__msg__CorStatusInfo * ros_message = _ros_message;
  {  // protocol
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->protocol = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // err_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->err_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_used");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_used = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // correction_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "correction_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->correction_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg_type_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_type_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->msg_type_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // msg_sub_type_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_sub_type_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->msg_sub_type_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // msg_input_handle
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_input_handle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->msg_input_handle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // msg_encrypted
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_encrypted");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_encrypted = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg_decrypted
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_decrypted");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_decrypted = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ublox_ubx_msgs__msg__cor_status_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CorStatusInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ublox_ubx_msgs.msg._cor_status_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CorStatusInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ublox_ubx_msgs__msg__CorStatusInfo * ros_message = (ublox_ubx_msgs__msg__CorStatusInfo *)raw_ros_message;
  {  // protocol
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->protocol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->err_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_used
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // correction_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->correction_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "correction_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_type_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->msg_type_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_type_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_sub_type_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->msg_sub_type_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_sub_type_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_input_handle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->msg_input_handle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_input_handle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_encrypted
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_encrypted);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_encrypted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_decrypted
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_decrypted);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_decrypted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
