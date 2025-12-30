// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_H_
#define PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Query in the package person_msgs.
typedef struct person_msgs__srv__Query_Request
{
  rosidl_runtime_c__String name;
} person_msgs__srv__Query_Request;

// Struct for a sequence of person_msgs__srv__Query_Request.
typedef struct person_msgs__srv__Query_Request__Sequence
{
  person_msgs__srv__Query_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msgs__srv__Query_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Query in the package person_msgs.
typedef struct person_msgs__srv__Query_Response
{
  uint8_t age;
} person_msgs__srv__Query_Response;

// Struct for a sequence of person_msgs__srv__Query_Response.
typedef struct person_msgs__srv__Query_Response__Sequence
{
  person_msgs__srv__Query_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msgs__srv__Query_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__STRUCT_H_
