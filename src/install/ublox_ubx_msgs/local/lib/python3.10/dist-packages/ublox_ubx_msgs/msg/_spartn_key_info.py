# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/SpartnKeyInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpartnKeyInfo(type):
    """Metaclass of message 'SpartnKeyInfo'."""

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
                'ublox_ubx_msgs.msg.SpartnKeyInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spartn_key_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spartn_key_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spartn_key_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spartn_key_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spartn_key_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpartnKeyInfo(metaclass=Metaclass_SpartnKeyInfo):
    """Message class 'SpartnKeyInfo'."""

    __slots__ = [
        '_reserved1',
        '_key_length_bytes',
        '_valid_from_wno',
        '_valid_from_tow',
    ]

    _fields_and_field_types = {
        'reserved1': 'uint8',
        'key_length_bytes': 'uint8',
        'valid_from_wno': 'uint16',
        'valid_from_tow': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reserved1 = kwargs.get('reserved1', int())
        self.key_length_bytes = kwargs.get('key_length_bytes', int())
        self.valid_from_wno = kwargs.get('valid_from_wno', int())
        self.valid_from_tow = kwargs.get('valid_from_tow', int())

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
        if self.reserved1 != other.reserved1:
            return False
        if self.key_length_bytes != other.key_length_bytes:
            return False
        if self.valid_from_wno != other.valid_from_wno:
            return False
        if self.valid_from_tow != other.valid_from_tow:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reserved1(self):
        """Message field 'reserved1'."""
        return self._reserved1

    @reserved1.setter
    def reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved1' field must be an unsigned integer in [0, 255]"
        self._reserved1 = value

    @builtins.property
    def key_length_bytes(self):
        """Message field 'key_length_bytes'."""
        return self._key_length_bytes

    @key_length_bytes.setter
    def key_length_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_length_bytes' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'key_length_bytes' field must be an unsigned integer in [0, 255]"
        self._key_length_bytes = value

    @builtins.property
    def valid_from_wno(self):
        """Message field 'valid_from_wno'."""
        return self._valid_from_wno

    @valid_from_wno.setter
    def valid_from_wno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valid_from_wno' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'valid_from_wno' field must be an unsigned integer in [0, 65535]"
        self._valid_from_wno = value

    @builtins.property
    def valid_from_tow(self):
        """Message field 'valid_from_tow'."""
        return self._valid_from_tow

    @valid_from_tow.setter
    def valid_from_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valid_from_tow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'valid_from_tow' field must be an unsigned integer in [0, 4294967295]"
        self._valid_from_tow = value
