# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/CorStatusInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CorStatusInfo(type):
    """Metaclass of message 'CorStatusInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PROTOCOL_UNKNOWN': 0,
        'PROTOCOL_RTCM3': 1,
        'PROTOCOL_SPARTN': 2,
        'PROTOCOL_UBX_RXM_PMP': 29,
        'PROTOCOL_UBX_RXM_QZSSL6': 30,
        'ERR_UNKNOWN': 0,
        'ERR_ERROR_FREE': 1,
        'ERR_ERRONEOUS': 2,
        'MSG_USED_UNKNOWN': 0,
        'MSG_NOT_USED': 1,
        'MSG_USED': 2,
        'MSG_ENCRYPTION_UNKNOWN': 0,
        'MSG_NOT_ENCRYPTED': 1,
        'MSG_ENCRYPTED': 2,
        'MSG_DECRYPTION_UNKNOWN': 0,
        'MSG_NOT_DECRYPTED': 1,
        'MSG_DECRYPTED': 2,
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
                'ublox_ubx_msgs.msg.CorStatusInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cor_status_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cor_status_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cor_status_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cor_status_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cor_status_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROTOCOL_UNKNOWN': cls.__constants['PROTOCOL_UNKNOWN'],
            'PROTOCOL_RTCM3': cls.__constants['PROTOCOL_RTCM3'],
            'PROTOCOL_SPARTN': cls.__constants['PROTOCOL_SPARTN'],
            'PROTOCOL_UBX_RXM_PMP': cls.__constants['PROTOCOL_UBX_RXM_PMP'],
            'PROTOCOL_UBX_RXM_QZSSL6': cls.__constants['PROTOCOL_UBX_RXM_QZSSL6'],
            'ERR_UNKNOWN': cls.__constants['ERR_UNKNOWN'],
            'ERR_ERROR_FREE': cls.__constants['ERR_ERROR_FREE'],
            'ERR_ERRONEOUS': cls.__constants['ERR_ERRONEOUS'],
            'MSG_USED_UNKNOWN': cls.__constants['MSG_USED_UNKNOWN'],
            'MSG_NOT_USED': cls.__constants['MSG_NOT_USED'],
            'MSG_USED': cls.__constants['MSG_USED'],
            'MSG_ENCRYPTION_UNKNOWN': cls.__constants['MSG_ENCRYPTION_UNKNOWN'],
            'MSG_NOT_ENCRYPTED': cls.__constants['MSG_NOT_ENCRYPTED'],
            'MSG_ENCRYPTED': cls.__constants['MSG_ENCRYPTED'],
            'MSG_DECRYPTION_UNKNOWN': cls.__constants['MSG_DECRYPTION_UNKNOWN'],
            'MSG_NOT_DECRYPTED': cls.__constants['MSG_NOT_DECRYPTED'],
            'MSG_DECRYPTED': cls.__constants['MSG_DECRYPTED'],
        }

    @property
    def PROTOCOL_UNKNOWN(self):
        """Message constant 'PROTOCOL_UNKNOWN'."""
        return Metaclass_CorStatusInfo.__constants['PROTOCOL_UNKNOWN']

    @property
    def PROTOCOL_RTCM3(self):
        """Message constant 'PROTOCOL_RTCM3'."""
        return Metaclass_CorStatusInfo.__constants['PROTOCOL_RTCM3']

    @property
    def PROTOCOL_SPARTN(self):
        """Message constant 'PROTOCOL_SPARTN'."""
        return Metaclass_CorStatusInfo.__constants['PROTOCOL_SPARTN']

    @property
    def PROTOCOL_UBX_RXM_PMP(self):
        """Message constant 'PROTOCOL_UBX_RXM_PMP'."""
        return Metaclass_CorStatusInfo.__constants['PROTOCOL_UBX_RXM_PMP']

    @property
    def PROTOCOL_UBX_RXM_QZSSL6(self):
        """Message constant 'PROTOCOL_UBX_RXM_QZSSL6'."""
        return Metaclass_CorStatusInfo.__constants['PROTOCOL_UBX_RXM_QZSSL6']

    @property
    def ERR_UNKNOWN(self):
        """Message constant 'ERR_UNKNOWN'."""
        return Metaclass_CorStatusInfo.__constants['ERR_UNKNOWN']

    @property
    def ERR_ERROR_FREE(self):
        """Message constant 'ERR_ERROR_FREE'."""
        return Metaclass_CorStatusInfo.__constants['ERR_ERROR_FREE']

    @property
    def ERR_ERRONEOUS(self):
        """Message constant 'ERR_ERRONEOUS'."""
        return Metaclass_CorStatusInfo.__constants['ERR_ERRONEOUS']

    @property
    def MSG_USED_UNKNOWN(self):
        """Message constant 'MSG_USED_UNKNOWN'."""
        return Metaclass_CorStatusInfo.__constants['MSG_USED_UNKNOWN']

    @property
    def MSG_NOT_USED(self):
        """Message constant 'MSG_NOT_USED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_NOT_USED']

    @property
    def MSG_USED(self):
        """Message constant 'MSG_USED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_USED']

    @property
    def MSG_ENCRYPTION_UNKNOWN(self):
        """Message constant 'MSG_ENCRYPTION_UNKNOWN'."""
        return Metaclass_CorStatusInfo.__constants['MSG_ENCRYPTION_UNKNOWN']

    @property
    def MSG_NOT_ENCRYPTED(self):
        """Message constant 'MSG_NOT_ENCRYPTED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_NOT_ENCRYPTED']

    @property
    def MSG_ENCRYPTED(self):
        """Message constant 'MSG_ENCRYPTED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_ENCRYPTED']

    @property
    def MSG_DECRYPTION_UNKNOWN(self):
        """Message constant 'MSG_DECRYPTION_UNKNOWN'."""
        return Metaclass_CorStatusInfo.__constants['MSG_DECRYPTION_UNKNOWN']

    @property
    def MSG_NOT_DECRYPTED(self):
        """Message constant 'MSG_NOT_DECRYPTED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_NOT_DECRYPTED']

    @property
    def MSG_DECRYPTED(self):
        """Message constant 'MSG_DECRYPTED'."""
        return Metaclass_CorStatusInfo.__constants['MSG_DECRYPTED']


class CorStatusInfo(metaclass=Metaclass_CorStatusInfo):
    """
    Message class 'CorStatusInfo'.

    Constants:
      PROTOCOL_UNKNOWN
      PROTOCOL_RTCM3
      PROTOCOL_SPARTN
      PROTOCOL_UBX_RXM_PMP
      PROTOCOL_UBX_RXM_QZSSL6
      ERR_UNKNOWN
      ERR_ERROR_FREE
      ERR_ERRONEOUS
      MSG_USED_UNKNOWN
      MSG_NOT_USED
      MSG_USED
      MSG_ENCRYPTION_UNKNOWN
      MSG_NOT_ENCRYPTED
      MSG_ENCRYPTED
      MSG_DECRYPTION_UNKNOWN
      MSG_NOT_DECRYPTED
      MSG_DECRYPTED
    """

    __slots__ = [
        '_protocol',
        '_err_status',
        '_msg_used',
        '_correction_id',
        '_msg_type_valid',
        '_msg_sub_type_valid',
        '_msg_input_handle',
        '_msg_encrypted',
        '_msg_decrypted',
    ]

    _fields_and_field_types = {
        'protocol': 'uint8',
        'err_status': 'uint8',
        'msg_used': 'uint8',
        'correction_id': 'uint16',
        'msg_type_valid': 'boolean',
        'msg_sub_type_valid': 'boolean',
        'msg_input_handle': 'boolean',
        'msg_encrypted': 'uint8',
        'msg_decrypted': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.protocol = kwargs.get('protocol', int())
        self.err_status = kwargs.get('err_status', int())
        self.msg_used = kwargs.get('msg_used', int())
        self.correction_id = kwargs.get('correction_id', int())
        self.msg_type_valid = kwargs.get('msg_type_valid', bool())
        self.msg_sub_type_valid = kwargs.get('msg_sub_type_valid', bool())
        self.msg_input_handle = kwargs.get('msg_input_handle', bool())
        self.msg_encrypted = kwargs.get('msg_encrypted', int())
        self.msg_decrypted = kwargs.get('msg_decrypted', int())

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
        if self.protocol != other.protocol:
            return False
        if self.err_status != other.err_status:
            return False
        if self.msg_used != other.msg_used:
            return False
        if self.correction_id != other.correction_id:
            return False
        if self.msg_type_valid != other.msg_type_valid:
            return False
        if self.msg_sub_type_valid != other.msg_sub_type_valid:
            return False
        if self.msg_input_handle != other.msg_input_handle:
            return False
        if self.msg_encrypted != other.msg_encrypted:
            return False
        if self.msg_decrypted != other.msg_decrypted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def protocol(self):
        """Message field 'protocol'."""
        return self._protocol

    @protocol.setter
    def protocol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'protocol' field must be an unsigned integer in [0, 255]"
        self._protocol = value

    @builtins.property
    def err_status(self):
        """Message field 'err_status'."""
        return self._err_status

    @err_status.setter
    def err_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'err_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'err_status' field must be an unsigned integer in [0, 255]"
        self._err_status = value

    @builtins.property
    def msg_used(self):
        """Message field 'msg_used'."""
        return self._msg_used

    @msg_used.setter
    def msg_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_used' field must be an unsigned integer in [0, 255]"
        self._msg_used = value

    @builtins.property
    def correction_id(self):
        """Message field 'correction_id'."""
        return self._correction_id

    @correction_id.setter
    def correction_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'correction_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'correction_id' field must be an unsigned integer in [0, 65535]"
        self._correction_id = value

    @builtins.property
    def msg_type_valid(self):
        """Message field 'msg_type_valid'."""
        return self._msg_type_valid

    @msg_type_valid.setter
    def msg_type_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'msg_type_valid' field must be of type 'bool'"
        self._msg_type_valid = value

    @builtins.property
    def msg_sub_type_valid(self):
        """Message field 'msg_sub_type_valid'."""
        return self._msg_sub_type_valid

    @msg_sub_type_valid.setter
    def msg_sub_type_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'msg_sub_type_valid' field must be of type 'bool'"
        self._msg_sub_type_valid = value

    @builtins.property
    def msg_input_handle(self):
        """Message field 'msg_input_handle'."""
        return self._msg_input_handle

    @msg_input_handle.setter
    def msg_input_handle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'msg_input_handle' field must be of type 'bool'"
        self._msg_input_handle = value

    @builtins.property
    def msg_encrypted(self):
        """Message field 'msg_encrypted'."""
        return self._msg_encrypted

    @msg_encrypted.setter
    def msg_encrypted(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_encrypted' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_encrypted' field must be an unsigned integer in [0, 255]"
        self._msg_encrypted = value

    @builtins.property
    def msg_decrypted(self):
        """Message field 'msg_decrypted'."""
        return self._msg_decrypted

    @msg_decrypted.setter
    def msg_decrypted(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_decrypted' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_decrypted' field must be an unsigned integer in [0, 255]"
        self._msg_decrypted = value
