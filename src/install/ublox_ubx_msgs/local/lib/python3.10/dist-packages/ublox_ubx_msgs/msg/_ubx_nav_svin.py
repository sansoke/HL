# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ublox_ubx_msgs:msg/UBXNavSvin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UBXNavSvin(type):
    """Metaclass of message 'UBXNavSvin'."""

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
                'ublox_ubx_msgs.msg.UBXNavSvin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ubx_nav_svin
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ubx_nav_svin
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ubx_nav_svin
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ubx_nav_svin
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ubx_nav_svin

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UBXNavSvin(metaclass=Metaclass_UBXNavSvin):
    """Message class 'UBXNavSvin'."""

    __slots__ = [
        '_header',
        '_version',
        '_itow',
        '_dur',
        '_mean_x',
        '_mean_y',
        '_mean_z',
        '_mean_x_hp',
        '_mean_y_hp',
        '_mean_z_hp',
        '_mean_acc',
        '_obs',
        '_valid',
        '_active',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version': 'uint8',
        'itow': 'uint32',
        'dur': 'uint32',
        'mean_x': 'int32',
        'mean_y': 'int32',
        'mean_z': 'int32',
        'mean_x_hp': 'int8',
        'mean_y_hp': 'int8',
        'mean_z_hp': 'int8',
        'mean_acc': 'uint32',
        'obs': 'uint32',
        'valid': 'boolean',
        'active': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.version = kwargs.get('version', int())
        self.itow = kwargs.get('itow', int())
        self.dur = kwargs.get('dur', int())
        self.mean_x = kwargs.get('mean_x', int())
        self.mean_y = kwargs.get('mean_y', int())
        self.mean_z = kwargs.get('mean_z', int())
        self.mean_x_hp = kwargs.get('mean_x_hp', int())
        self.mean_y_hp = kwargs.get('mean_y_hp', int())
        self.mean_z_hp = kwargs.get('mean_z_hp', int())
        self.mean_acc = kwargs.get('mean_acc', int())
        self.obs = kwargs.get('obs', int())
        self.valid = kwargs.get('valid', bool())
        self.active = kwargs.get('active', bool())

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
        if self.itow != other.itow:
            return False
        if self.dur != other.dur:
            return False
        if self.mean_x != other.mean_x:
            return False
        if self.mean_y != other.mean_y:
            return False
        if self.mean_z != other.mean_z:
            return False
        if self.mean_x_hp != other.mean_x_hp:
            return False
        if self.mean_y_hp != other.mean_y_hp:
            return False
        if self.mean_z_hp != other.mean_z_hp:
            return False
        if self.mean_acc != other.mean_acc:
            return False
        if self.obs != other.obs:
            return False
        if self.valid != other.valid:
            return False
        if self.active != other.active:
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
    def itow(self):
        """Message field 'itow'."""
        return self._itow

    @itow.setter
    def itow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'itow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'itow' field must be an unsigned integer in [0, 4294967295]"
        self._itow = value

    @builtins.property
    def dur(self):
        """Message field 'dur'."""
        return self._dur

    @dur.setter
    def dur(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dur' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dur' field must be an unsigned integer in [0, 4294967295]"
        self._dur = value

    @builtins.property
    def mean_x(self):
        """Message field 'mean_x'."""
        return self._mean_x

    @mean_x.setter
    def mean_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mean_x' field must be an integer in [-2147483648, 2147483647]"
        self._mean_x = value

    @builtins.property
    def mean_y(self):
        """Message field 'mean_y'."""
        return self._mean_y

    @mean_y.setter
    def mean_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mean_y' field must be an integer in [-2147483648, 2147483647]"
        self._mean_y = value

    @builtins.property
    def mean_z(self):
        """Message field 'mean_z'."""
        return self._mean_z

    @mean_z.setter
    def mean_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mean_z' field must be an integer in [-2147483648, 2147483647]"
        self._mean_z = value

    @builtins.property
    def mean_x_hp(self):
        """Message field 'mean_x_hp'."""
        return self._mean_x_hp

    @mean_x_hp.setter
    def mean_x_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_x_hp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mean_x_hp' field must be an integer in [-128, 127]"
        self._mean_x_hp = value

    @builtins.property
    def mean_y_hp(self):
        """Message field 'mean_y_hp'."""
        return self._mean_y_hp

    @mean_y_hp.setter
    def mean_y_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_y_hp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mean_y_hp' field must be an integer in [-128, 127]"
        self._mean_y_hp = value

    @builtins.property
    def mean_z_hp(self):
        """Message field 'mean_z_hp'."""
        return self._mean_z_hp

    @mean_z_hp.setter
    def mean_z_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_z_hp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mean_z_hp' field must be an integer in [-128, 127]"
        self._mean_z_hp = value

    @builtins.property
    def mean_acc(self):
        """Message field 'mean_acc'."""
        return self._mean_acc

    @mean_acc.setter
    def mean_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mean_acc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mean_acc' field must be an unsigned integer in [0, 4294967295]"
        self._mean_acc = value

    @builtins.property
    def obs(self):
        """Message field 'obs'."""
        return self._obs

    @obs.setter
    def obs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'obs' field must be an unsigned integer in [0, 4294967295]"
        self._obs = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value
