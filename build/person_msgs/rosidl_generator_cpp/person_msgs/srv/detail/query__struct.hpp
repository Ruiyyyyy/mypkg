// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__person_msgs__srv__Query_Request __attribute__((deprecated))
#else
# define DEPRECATED__person_msgs__srv__Query_Request __declspec(deprecated)
#endif

namespace person_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Query_Request_
{
  using Type = Query_Request_<ContainerAllocator>;

  explicit Query_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Query_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    person_msgs::srv::Query_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const person_msgs::srv::Query_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__person_msgs__srv__Query_Request
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__person_msgs__srv__Query_Request
    std::shared_ptr<person_msgs::srv::Query_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Query_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Query_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Query_Request_

// alias to use template instance with default allocator
using Query_Request =
  person_msgs::srv::Query_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace person_msgs


#ifndef _WIN32
# define DEPRECATED__person_msgs__srv__Query_Response __attribute__((deprecated))
#else
# define DEPRECATED__person_msgs__srv__Query_Response __declspec(deprecated)
#endif

namespace person_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Query_Response_
{
  using Type = Query_Response_<ContainerAllocator>;

  explicit Query_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->age = 0;
    }
  }

  explicit Query_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->age = 0;
    }
  }

  // field types and members
  using _age_type =
    uint8_t;
  _age_type age;

  // setters for named parameter idiom
  Type & set__age(
    const uint8_t & _arg)
  {
    this->age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    person_msgs::srv::Query_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const person_msgs::srv::Query_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      person_msgs::srv::Query_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__person_msgs__srv__Query_Response
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__person_msgs__srv__Query_Response
    std::shared_ptr<person_msgs::srv::Query_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Query_Response_ & other) const
  {
    if (this->age != other.age) {
      return false;
    }
    return true;
  }
  bool operator!=(const Query_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Query_Response_

// alias to use template instance with default allocator
using Query_Response =
  person_msgs::srv::Query_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace person_msgs

namespace person_msgs
{

namespace srv
{

struct Query
{
  using Request = person_msgs::srv::Query_Request;
  using Response = person_msgs::srv::Query_Response;
};

}  // namespace srv

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_HPP_
