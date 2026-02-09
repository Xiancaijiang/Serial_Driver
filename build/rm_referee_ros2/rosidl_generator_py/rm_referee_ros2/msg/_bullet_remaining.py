# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_ros2:msg/BulletRemaining.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BulletRemaining(type):
    """Metaclass of message 'BulletRemaining'."""

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
            module = import_type_support('rm_referee_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_referee_ros2.msg.BulletRemaining')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bullet_remaining
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bullet_remaining
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bullet_remaining
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bullet_remaining
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bullet_remaining

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BulletRemaining(metaclass=Metaclass_BulletRemaining):
    """Message class 'BulletRemaining'."""

    __slots__ = [
        '_bullet_allowance_num_17_mm',
        '_bullet_allowance_num_42_mm',
        '_coin_remaining_num',
        '_stamp',
    ]

    _fields_and_field_types = {
        'bullet_allowance_num_17_mm': 'uint16',
        'bullet_allowance_num_42_mm': 'uint16',
        'coin_remaining_num': 'uint16',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bullet_allowance_num_17_mm = kwargs.get('bullet_allowance_num_17_mm', int())
        self.bullet_allowance_num_42_mm = kwargs.get('bullet_allowance_num_42_mm', int())
        self.coin_remaining_num = kwargs.get('coin_remaining_num', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.bullet_allowance_num_17_mm != other.bullet_allowance_num_17_mm:
            return False
        if self.bullet_allowance_num_42_mm != other.bullet_allowance_num_42_mm:
            return False
        if self.coin_remaining_num != other.coin_remaining_num:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bullet_allowance_num_17_mm(self):
        """Message field 'bullet_allowance_num_17_mm'."""
        return self._bullet_allowance_num_17_mm

    @bullet_allowance_num_17_mm.setter
    def bullet_allowance_num_17_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_allowance_num_17_mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bullet_allowance_num_17_mm' field must be an unsigned integer in [0, 65535]"
        self._bullet_allowance_num_17_mm = value

    @builtins.property
    def bullet_allowance_num_42_mm(self):
        """Message field 'bullet_allowance_num_42_mm'."""
        return self._bullet_allowance_num_42_mm

    @bullet_allowance_num_42_mm.setter
    def bullet_allowance_num_42_mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_allowance_num_42_mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bullet_allowance_num_42_mm' field must be an unsigned integer in [0, 65535]"
        self._bullet_allowance_num_42_mm = value

    @builtins.property
    def coin_remaining_num(self):
        """Message field 'coin_remaining_num'."""
        return self._coin_remaining_num

    @coin_remaining_num.setter
    def coin_remaining_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coin_remaining_num' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'coin_remaining_num' field must be an unsigned integer in [0, 65535]"
        self._coin_remaining_num = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value
