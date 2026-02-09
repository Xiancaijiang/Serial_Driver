// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_ros2:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_HPP_
#define RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_ros2__msg__GameResult __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_ros2__msg__GameResult __declspec(deprecated)
#endif

namespace rm_referee_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameResult_
{
  using Type = GameResult_<ContainerAllocator>;

  explicit GameResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->winner = 0;
    }
  }

  explicit GameResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->winner = 0;
    }
  }

  // field types and members
  using _winner_type =
    uint8_t;
  _winner_type winner;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__winner(
    const uint8_t & _arg)
  {
    this->winner = _arg;
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
    rm_referee_ros2::msg::GameResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_ros2::msg::GameResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::GameResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_ros2::msg::GameResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_ros2__msg__GameResult
    std::shared_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_ros2__msg__GameResult
    std::shared_ptr<rm_referee_ros2::msg::GameResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameResult_ & other) const
  {
    if (this->winner != other.winner) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameResult_

// alias to use template instance with default allocator
using GameResult =
  rm_referee_ros2::msg::GameResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_ros2

#endif  // RM_REFEREE_ROS2__MSG__DETAIL__GAME_RESULT__STRUCT_HPP_
