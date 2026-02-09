// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_ros2:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_referee_ros2__msg__FieldEvents __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_ros2__msg__FieldEvents __declspec(deprecated)
#endif

namespace rm_referee_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldEvents_
{
  using Type = FieldEvents_<ContainerAllocator>;

  explicit FieldEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
    }
  }

  explicit FieldEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
    }
  }

  // field types and members
  using _event_type_type =
    uint32_t;
  _event_type_type event_type;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__event_type(
    const uint32_t & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_ros2__msg__FieldEvents
    std::shared_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_ros2__msg__FieldEvents
    std::shared_ptr<rm_referee_ros2::msg::FieldEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldEvents_ & other) const
  {
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldEvents_

// alias to use template instance with default allocator
using FieldEvents =
  rm_referee_ros2::msg::FieldEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__FIELD_EVENTS__STRUCT_HPP_
