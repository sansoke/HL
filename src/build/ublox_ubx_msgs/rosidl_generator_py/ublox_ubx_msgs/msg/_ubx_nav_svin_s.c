// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
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
#include "ublox_ubx_msgs/msg/detail/ubx_nav_svin__struct.h"
#include "ublox_ubx_msgs/msg/detail/ubx_nav_svin__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ublox_ubx_msgs__msg__ubx_nav_svin__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("ublox_ubx_msgs.msg._ubx_nav_svin.UBXNavSvin", full_classname_dest, 43) == 0);
  }
  ublox_ubx_msgs__msg__UBXNavSvin * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // version
    PyObject * field = PyObject_GetAttrString(_pymsg, "version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // itow
    PyObject * field = PyObject_GetAttrString(_pymsg, "itow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->itow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dur
    PyObject * field = PyObject_GetAttrString(_pymsg, "dur");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dur = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mean_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_z = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_x_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_x_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_x_hp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_y_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_y_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_y_hp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_z_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_z_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_z_hp = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mean_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obs
    PyObject * field = PyObject_GetAttrString(_pymsg, "obs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ublox_ubx_msgs__msg__ubx_nav_svin__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UBXNavSvin */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ublox_ubx_msgs.msg._ubx_nav_svin");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UBXNavSvin");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ublox_ubx_msgs__msg__UBXNavSvin * ros_message = (ublox_ubx_msgs__msg__UBXNavSvin *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // itow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->itow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "itow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dur
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_x_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_x_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_x_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_y_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_y_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_y_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_z_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mean_z_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_z_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mean_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
