// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_serial_driver:msg/RobotStatus.idl
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
#include "rm_serial_driver/msg/detail/robot_status__struct.h"
#include "rm_serial_driver/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_serial_driver__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("rm_serial_driver.msg._robot_status.RobotStatus", full_classname_dest, 46) == 0);
  }
  rm_serial_driver__msg__RobotStatus * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // maximum_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maximum_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_barrel_cooling_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_barrel_cooling_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_barrel_cooling_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_barrel_heat_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_barrel_heat_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_barrel_heat_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chassis_power_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_power_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_power_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_management_gimbal_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_management_gimbal_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_management_gimbal_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_management_chassis_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_management_chassis_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_management_chassis_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_management_shooter_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_management_shooter_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_management_shooter_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_serial_driver__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_serial_driver.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_serial_driver__msg__RobotStatus * ros_message = (rm_serial_driver__msg__RobotStatus *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximum_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maximum_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_barrel_cooling_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_barrel_cooling_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_barrel_cooling_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_barrel_heat_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_barrel_heat_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_barrel_heat_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_power_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_power_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_power_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_management_gimbal_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_management_gimbal_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_management_gimbal_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_management_chassis_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_management_chassis_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_management_chassis_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_management_shooter_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_management_shooter_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_management_shooter_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
