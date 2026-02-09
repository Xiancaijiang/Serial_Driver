// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_ros2:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_ros2__msg__RobotHurt __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_ros2__msg__RobotHurt __declspec(deprecated)
#endif

namespace rm_referee_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHurt_
{
  using Type = RobotHurt_<ContainerAllocator>;

  explicit RobotHurt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hurt_type = 0;
    }
  }

  explicit RobotHurt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hurt_type = 0;
    }
  }

  // field types and members
  using _armor_id_type =
    uint8_t;
  _armor_id_type armor_id;
  using _hurt_type_type =
    uint8_t;
  _hurt_type_type hurt_type;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__armor_id(
    const uint8_t & _arg)
  {
    this->armor_id = _arg;
    return *this;
  }
  Type & set__hurt_type(
    const uint8_t & _arg)
  {
    this->hurt_type = _arg;
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
    rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_ros2__msg__RobotHurt
    std::shared_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_ros2__msg__RobotHurt
    std::shared_ptr<rm_referee_ros2::msg::RobotHurt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHurt_ & other) const
  {
    if (this->armor_id != other.armor_id) {
      return false;
    }
    if (this->hurt_type != other.hurt_type) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHurt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHurt_

// alias to use template instance with default allocator
using RobotHurt =
  rm_referee_ros2::msg::RobotHurt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__ROBOT_HURT__STRUCT_HPP_
