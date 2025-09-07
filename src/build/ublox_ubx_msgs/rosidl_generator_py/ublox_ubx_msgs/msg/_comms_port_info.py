# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/CommsPortInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'msgs'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommsPortInfo(type):
    """Metaclass of message 'CommsPortInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ublox_ubx_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ublox_ubx_msgs.msg.CommsPortInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__comms_port_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__comms_port_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__comms_port_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__comms_port_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__comms_port_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CommsPortInfo(metaclass=Metaclass_CommsPortInfo):
    """Message class 'CommsPortInfo'."""

    __slots__ = [
        '_port_id',
        '_tx_pending',
        '_tx_bytes',
        '_tx_usage',
        '_tx_peak_usage',
        '_rx_pending',
        '_rx_bytes',
        '_rx_usage',
        '_rx_peak_usage',
        '_overrun_errs',
        '_msgs',
        '_skipped',
    ]

    _fields_and_field_types = {
        'port_id': 'uint16',
        'tx_pending': 'uint16',
        'tx_bytes': 'uint32',
        'tx_usage': 'uint8',
        'tx_peak_usage': 'uint8',
        'rx_pending': 'uint16',
        'rx_bytes': 'uint32',
        'rx_usage': 'uint8',
        'rx_peak_usage': 'uint8',
        'overrun_errs': 'uint16',
        'msgs': 'uint16[4]',
        'skipped': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.port_id = kwargs.get('port_id', int())
        self.tx_pending = kwargs.get('tx_pending', int())
        self.tx_bytes = kwargs.get('tx_bytes', int())
        self.tx_usage = kwargs.get('tx_usage', int())
        self.tx_peak_usage = kwargs.get('tx_peak_usage', int())
        self.rx_pending = kwargs.get('rx_pending', int())
        self.rx_bytes = kwargs.get('rx_bytes', int())
        self.rx_usage = kwargs.get('rx_usage', int())
        self.rx_peak_usage = kwargs.get('rx_peak_usage', int())
        self.overrun_errs = kwargs.get('overrun_errs', int())
        if 'msgs' not in kwargs:
            self.msgs = numpy.zeros(4, dtype=numpy.uint16)
        else:
            self.msgs = numpy.array(kwargs.get('msgs'), dtype=numpy.uint16)
            assert self.msgs.shape == (4, )
        self.skipped = kwargs.get('skipped', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.port_id != other.port_id:
            return False
        if self.tx_pending != other.tx_pending:
            return False
        if self.tx_bytes != other.tx_bytes:
            return False
        if self.tx_usage != other.tx_usage:
            return False
        if self.tx_peak_usage != other.tx_peak_usage:
            return False
        if self.rx_pending != other.rx_pending:
            return False
        if self.rx_bytes != other.rx_bytes:
            return False
        if self.rx_usage != other.rx_usage:
            return False
        if self.rx_peak_usage != other.rx_peak_usage:
            return False
        if self.overrun_errs != other.overrun_errs:
            return False
        if any(self.msgs != other.msgs):
            return False
        if self.skipped != other.skipped:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def port_id(self):
        """Message field 'port_id'."""
        return self._port_id

    @port_id.setter
    def port_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'port_id' field must be an unsigned integer in [0, 65535]"
        self._port_id = value

    @builtins.property
    def tx_pending(self):
        """Message field 'tx_pending'."""
        return self._tx_pending

    @tx_pending.setter
    def tx_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_pending' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tx_pending' field must be an unsigned integer in [0, 65535]"
        self._tx_pending = value

    @builtins.property
    def tx_bytes(self):
        """Message field 'tx_bytes'."""
        return self._tx_bytes

    @tx_bytes.setter
    def tx_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_bytes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tx_bytes' field must be an unsigned integer in [0, 4294967295]"
        self._tx_bytes = value

    @builtins.property
    def tx_usage(self):
        """Message field 'tx_usage'."""
        return self._tx_usage

    @tx_usage.setter
    def tx_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tx_usage' field must be an unsigned integer in [0, 255]"
        self._tx_usage = value

    @builtins.property
    def tx_peak_usage(self):
        """Message field 'tx_peak_usage'."""
        return self._tx_peak_usage

    @tx_peak_usage.setter
    def tx_peak_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_peak_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tx_peak_usage' field must be an unsigned integer in [0, 255]"
        self._tx_peak_usage = value

    @builtins.property
    def rx_pending(self):
        """Message field 'rx_pending'."""
        return self._rx_pending

    @rx_pending.setter
    def rx_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_pending' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rx_pending' field must be an unsigned integer in [0, 65535]"
        self._rx_pending = value

    @builtins.property
    def rx_bytes(self):
        """Message field 'rx_bytes'."""
        return self._rx_bytes

    @rx_bytes.setter
    def rx_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_bytes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_bytes' field must be an unsigned integer in [0, 4294967295]"
        self._rx_bytes = value

    @builtins.property
    def rx_usage(self):
        """Message field 'rx_usage'."""
        return self._rx_usage

    @rx_usage.setter
    def rx_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rx_usage' field must be an unsigned integer in [0, 255]"
        self._rx_usage = value

    @builtins.property
    def rx_peak_usage(self):
        """Message field 'rx_peak_usage'."""
        return self._rx_peak_usage

    @rx_peak_usage.setter
    def rx_peak_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_peak_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rx_peak_usage' field must be an unsigned integer in [0, 255]"
        self._rx_peak_usage = value

    @builtins.property
    def overrun_errs(self):
        """Message field 'overrun_errs'."""
        return self._overrun_errs

    @overrun_errs.setter
    def overrun_errs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'overrun_errs' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'overrun_errs' field must be an unsigned integer in [0, 65535]"
        self._overrun_errs = value

    @builtins.property
    def msgs(self):
        """Message field 'msgs'."""
        return self._msgs

    @msgs.setter
    def msgs(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'msgs' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 4, \
                "The 'msgs' numpy.ndarray() must have a size of 4"
            self._msgs = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'msgs' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._msgs = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def skipped(self):
        """Message field 'skipped'."""
        return self._skipped

    @skipped.setter
    def skipped(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'skipped' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'skipped' field must be an unsigned integer in [0, 4294967295]"
        self._skipped = value
