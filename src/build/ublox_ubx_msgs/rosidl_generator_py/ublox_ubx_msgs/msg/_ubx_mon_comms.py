# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/UBXMonComms.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'prot_ids'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UBXMonComms(type):
    """Metaclass of message 'UBXMonComms'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PROTOCOL_UBX': 0,
        'PROTOCOL_NMEA': 1,
        'PROTOCOL_RTCM2': 2,
        'PROTOCOL_RTCM3': 5,
        'PROTOCOL_SPARTN': 6,
        'NO_PROTOCOL': 255,
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
                'ublox_ubx_msgs.msg.UBXMonComms')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ubx_mon_comms
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ubx_mon_comms
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ubx_mon_comms
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ubx_mon_comms
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ubx_mon_comms

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from ublox_ubx_msgs.msg import CommsPortInfo
            if CommsPortInfo.__class__._TYPE_SUPPORT is None:
                CommsPortInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROTOCOL_UBX': cls.__constants['PROTOCOL_UBX'],
            'PROTOCOL_NMEA': cls.__constants['PROTOCOL_NMEA'],
            'PROTOCOL_RTCM2': cls.__constants['PROTOCOL_RTCM2'],
            'PROTOCOL_RTCM3': cls.__constants['PROTOCOL_RTCM3'],
            'PROTOCOL_SPARTN': cls.__constants['PROTOCOL_SPARTN'],
            'NO_PROTOCOL': cls.__constants['NO_PROTOCOL'],
        }

    @property
    def PROTOCOL_UBX(self):
        """Message constant 'PROTOCOL_UBX'."""
        return Metaclass_UBXMonComms.__constants['PROTOCOL_UBX']

    @property
    def PROTOCOL_NMEA(self):
        """Message constant 'PROTOCOL_NMEA'."""
        return Metaclass_UBXMonComms.__constants['PROTOCOL_NMEA']

    @property
    def PROTOCOL_RTCM2(self):
        """Message constant 'PROTOCOL_RTCM2'."""
        return Metaclass_UBXMonComms.__constants['PROTOCOL_RTCM2']

    @property
    def PROTOCOL_RTCM3(self):
        """Message constant 'PROTOCOL_RTCM3'."""
        return Metaclass_UBXMonComms.__constants['PROTOCOL_RTCM3']

    @property
    def PROTOCOL_SPARTN(self):
        """Message constant 'PROTOCOL_SPARTN'."""
        return Metaclass_UBXMonComms.__constants['PROTOCOL_SPARTN']

    @property
    def NO_PROTOCOL(self):
        """Message constant 'NO_PROTOCOL'."""
        return Metaclass_UBXMonComms.__constants['NO_PROTOCOL']


class UBXMonComms(metaclass=Metaclass_UBXMonComms):
    """
    Message class 'UBXMonComms'.

    Constants:
      PROTOCOL_UBX
      PROTOCOL_NMEA
      PROTOCOL_RTCM2
      PROTOCOL_RTCM3
      PROTOCOL_SPARTN
      NO_PROTOCOL
    """

    __slots__ = [
        '_header',
        '_version',
        '_n_ports',
        '_tx_errors',
        '_reserved0',
        '_prot_ids',
        '_ports',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version': 'uint8',
        'n_ports': 'uint8',
        'tx_errors': 'uint8',
        'reserved0': 'uint8',
        'prot_ids': 'uint8[4]',
        'ports': 'sequence<ublox_ubx_msgs/CommsPortInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ublox_ubx_msgs', 'msg'], 'CommsPortInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.version = kwargs.get('version', int())
        self.n_ports = kwargs.get('n_ports', int())
        self.tx_errors = kwargs.get('tx_errors', int())
        self.reserved0 = kwargs.get('reserved0', int())
        if 'prot_ids' not in kwargs:
            self.prot_ids = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.prot_ids = numpy.array(kwargs.get('prot_ids'), dtype=numpy.uint8)
            assert self.prot_ids.shape == (4, )
        self.ports = kwargs.get('ports', [])

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
        if self.n_ports != other.n_ports:
            return False
        if self.tx_errors != other.tx_errors:
            return False
        if self.reserved0 != other.reserved0:
            return False
        if any(self.prot_ids != other.prot_ids):
            return False
        if self.ports != other.ports:
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
    def n_ports(self):
        """Message field 'n_ports'."""
        return self._n_ports

    @n_ports.setter
    def n_ports(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_ports' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n_ports' field must be an unsigned integer in [0, 255]"
        self._n_ports = value

    @builtins.property
    def tx_errors(self):
        """Message field 'tx_errors'."""
        return self._tx_errors

    @tx_errors.setter
    def tx_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_errors' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tx_errors' field must be an unsigned integer in [0, 255]"
        self._tx_errors = value

    @builtins.property
    def reserved0(self):
        """Message field 'reserved0'."""
        return self._reserved0

    @reserved0.setter
    def reserved0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved0' field must be an unsigned integer in [0, 255]"
        self._reserved0 = value

    @builtins.property
    def prot_ids(self):
        """Message field 'prot_ids'."""
        return self._prot_ids

    @prot_ids.setter
    def prot_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'prot_ids' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'prot_ids' numpy.ndarray() must have a size of 4"
            self._prot_ids = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'prot_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._prot_ids = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def ports(self):
        """Message field 'ports'."""
        return self._ports

    @ports.setter
    def ports(self, value):
        if __debug__:
            from ublox_ubx_msgs.msg import CommsPortInfo
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
                 all(isinstance(v, CommsPortInfo) for v in value) and
                 True), \
                "The 'ports' field must be a set or sequence and each value of type 'CommsPortInfo'"
        self._ports = value
