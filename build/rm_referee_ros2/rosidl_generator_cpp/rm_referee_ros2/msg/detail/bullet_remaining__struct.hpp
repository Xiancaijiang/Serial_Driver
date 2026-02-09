// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_ros2:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_ros2__msg__BulletRemaining __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_ros2__msg__BulletRemaining __declspec(deprecated)
#endif

namespace rm_referee_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BulletRemaining_
{
  using Type = BulletRemaining_<ContainerAllocator>;

  explicit BulletRemaining_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_allowance_num_17_mm = 0;
      this->bullet_allowance_num_42_mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  explicit BulletRemaining_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_allowance_num_17_mm = 0;
      this->bullet_allowance_num_42_mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  // field types and members
  using _bullet_allowance_num_17_mm_type =
    uint16_t;
  _bullet_allowance_num_17_mm_type bullet_allowance_num_17_mm;
  using _bullet_allowance_num_42_mm_type =
    uint16_t;
  _bullet_allowance_num_42_mm_type bullet_allowance_num_42_mm;
  using _coin_remaining_num_type =
    uint16_t;
  _coin_remaining_num_type coin_remaining_num;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__bullet_allowance_num_17_mm(
    const uint16_t & _arg)
  {
    this->bullet_allowance_num_17_mm = _arg;
    return *this;
  }
  Type & set__bullet_allowance_num_42_mm(
    const uint16_t & _arg)
  {
    this->bullet_allowance_num_42_mm = _arg;
    return *this;
  }
  Type & set__coin_remaining_num(
    const uint16_t & _arg)
  {
    this->coin_remaining_num = _arg;
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
    rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_ros2__msg__BulletRemaining
    std::shared_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_ros2__msg__BulletRemaining
    std::shared_ptr<rm_referee_ros2::msg::BulletRemaining_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BulletRemaining_ & other) const
  {
    if (this->bullet_allowance_num_17_mm != other.bullet_allowance_num_17_mm) {
      return false;
    }
    if (this->bullet_allowance_num_42_mm != other.bullet_allowance_num_42_mm) {
      return false;
    }
    if (this->coin_remaining_num != other.coin_remaining_num) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const BulletRemaining_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BulletRemaining_

// alias to use template instance with default allocator
using BulletRemaining =
  rm_referee_ros2::msg::BulletRemaining_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
