# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/UBXRxmSpartnKey.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'key_payload'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

# Member 'reserved0'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UBXRxmSpartnKey(type):
    """Metaclass of message 'UBXRxmSpartnKey'."""

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
                'ublox_ubx_msgs.msg.UBXRxmSpartnKey')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ubx_rxm_spartn_key
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ubx_rxm_spartn_key
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ubx_rxm_spartn_key
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ubx_rxm_spartn_key
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ubx_rxm_spartn_key

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from ublox_ubx_msgs.msg import SpartnKeyInfo
            if SpartnKeyInfo.__class__._TYPE_SUPPORT is None:
                SpartnKeyInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UBXRxmSpartnKey(metaclass=Metaclass_UBXRxmSpartnKey):
    """Message class 'UBXRxmSpartnKey'."""

    __slots__ = [
        '_header',
        '_version',
        '_num_keys',
        '_reserved0',
        '_key_info',
        '_key_payload',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version': 'uint8',
        'num_keys': 'uint8',
        'reserved0': 'uint8[2]',
        'key_info': 'sequence<ublox_ubx_msgs/SpartnKeyInfo>',
        'key_payload': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ublox_ubx_msgs', 'msg'], 'SpartnKeyInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.version = kwargs.get('version', int())
        self.num_keys = kwargs.get('num_keys', int())
        if 'reserved0' not in kwargs:
            self.reserved0 = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.reserved0 = numpy.array(kwargs.get('reserved0'), dtype=numpy.uint8)
            assert self.reserved0.shape == (2, )
        self.key_info = kwargs.get('key_info', [])
        self.key_payload = array.array('B', kwargs.get('key_payload', []))

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
        if self.header != other.header:
            return False
        if self.version != other.version:
            return False
        if self.num_keys != other.num_keys:
            return False
        if any(self.reserved0 != other.reserved0):
            return False
        if self.key_info != other.key_info:
            return False
        if self.key_payload != other.key_payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'version' field must be an unsigned integer in [0, 255]"
        self._version = value

    @builtins.property
    def num_keys(self):
        """Message field 'num_keys'."""
        return self._num_keys

    @num_keys.setter
    def num_keys(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_keys' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_keys' field must be an unsigned integer in [0, 255]"
        self._num_keys = value

    @builtins.property
    def reserved0(self):
        """Message field 'reserved0'."""
        return self._reserved0

    @reserved0.setter
    def reserved0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved0' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'reserved0' numpy.ndarray() must have a size of 2"
            self._reserved0 = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved0' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved0 = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def key_info(self):
        """Message field 'key_info'."""
        return self._key_info

    @key_info.setter
    def key_info(self, value):
        if __debug__:
            from ublox_ubx_msgs.msg import SpartnKeyInfo
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
                 all(isinstance(v, SpartnKeyInfo) for v in value) and
                 True), \
                "The 'key_info' field must be a set or sequence and each value of type 'SpartnKeyInfo'"
        self._key_info = value

    @builtins.property
    def key_payload(self):
        """Message field 'key_payload'."""
        return self._key_payload

    @key_payload.setter
    def key_payload(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'key_payload' array.array() must have the type code of 'B'"
            self._key_payload = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'key_payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._key_payload = array.array('B', value)
