// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "person_msgs/srv/detail/query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace person_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace person_msgs

namespace rosidl_generator_traits
{

[[deprecated("use person_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msgs::srv::Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const person_msgs::srv::Query_Request & msg)
{
  return person_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<person_msgs::srv::Query_Request>()
{
  return "person_msgs::srv::Query_Request";
}

template<>
inline const char * name<person_msgs::srv::Query_Request>()
{
  return "person_msgs/srv/Query_Request";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msgs::srv::Query_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace person_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace person_msgs

namespace rosidl_generator_traits
{

[[deprecated("use person_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msgs::srv::Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const person_msgs::srv::Query_Response & msg)
{
  return person_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<person_msgs::srv::Query_Response>()
{
  return "person_msgs::srv::Query_Response";
}

template<>
inline const char * name<person_msgs::srv::Query_Response>()
{
  return "person_msgs/srv/Query_Response";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<person_msgs::srv::Query_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query>()
{
  return "person_msgs::srv::Query";
}

template<>
inline const char * name<person_msgs::srv::Query>()
{
  return "person_msgs/srv/Query";
}

template<>
struct has_fixed_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_fixed_size<person_msgs::srv::Query_Request>::value &&
    has_fixed_size<person_msgs::srv::Query_Response>::value
  >
{
};

template<>
struct has_bounded_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_bounded_size<person_msgs::srv::Query_Request>::value &&
    has_bounded_size<person_msgs::srv::Query_Response>::value
  >
{
};

template<>
struct is_service<person_msgs::srv::Query>
  : std::true_type
{
};

template<>
struct is_service_request<person_msgs::srv::Query_Request>
  : std::true_type
{
};

template<>
struct is_service_response<person_msgs::srv::Query_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_
