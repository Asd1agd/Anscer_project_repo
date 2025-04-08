// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces_anscer:srv/CsvPath.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_HPP_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Request __declspec(deprecated)
#endif

namespace custom_interfaces_anscer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CsvPath_Request_
{
  using Type = CsvPath_Request_<ContainerAllocator>;

  explicit CsvPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  explicit CsvPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  // field types and members
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;

  // setters for named parameter idiom
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Request
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Request
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CsvPath_Request_ & other) const
  {
    if (this->filepath != other.filepath) {
      return false;
    }
    return true;
  }
  bool operator!=(const CsvPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CsvPath_Request_

// alias to use template instance with default allocator
using CsvPath_Request =
  custom_interfaces_anscer::srv::CsvPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces_anscer


#ifndef _WIN32
# define DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Response __declspec(deprecated)
#endif

namespace custom_interfaces_anscer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CsvPath_Response_
{
  using Type = CsvPath_Response_<ContainerAllocator>;

  explicit CsvPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CsvPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Response
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces_anscer__srv__CsvPath_Response
    std::shared_ptr<custom_interfaces_anscer::srv::CsvPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CsvPath_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CsvPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CsvPath_Response_

// alias to use template instance with default allocator
using CsvPath_Response =
  custom_interfaces_anscer::srv::CsvPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces_anscer

namespace custom_interfaces_anscer
{

namespace srv
{

struct CsvPath
{
  using Request = custom_interfaces_anscer::srv::CsvPath_Request;
  using Response = custom_interfaces_anscer::srv::CsvPath_Response;
};

}  // namespace srv

}  // namespace custom_interfaces_anscer

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_HPP_
