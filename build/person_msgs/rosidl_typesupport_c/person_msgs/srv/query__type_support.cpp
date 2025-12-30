// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "person_msgs/srv/detail/query__struct.h"
#include "person_msgs/srv/detail/query__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Query_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Query_Request_type_support_ids_t;

static const _Query_Request_type_support_ids_t _Query_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Query_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Query_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Query_Request_type_support_symbol_names_t _Query_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query_Request)),
  }
};

typedef struct _Query_Request_type_support_data_t
{
  void * data[2];
} _Query_Request_type_support_data_t;

static _Query_Request_type_support_data_t _Query_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Query_Request_message_typesupport_map = {
  2,
  "person_msgs",
  &_Query_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Query_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Query_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Query_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Query_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace person_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, person_msgs, srv, Query_Request)() {
  return &::person_msgs::srv::rosidl_typesupport_c::Query_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "person_msgs/srv/detail/query__struct.h"
// already included above
// #include "person_msgs/srv/detail/query__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Query_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Query_Response_type_support_ids_t;

static const _Query_Response_type_support_ids_t _Query_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Query_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Query_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Query_Response_type_support_symbol_names_t _Query_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query_Response)),
  }
};

typedef struct _Query_Response_type_support_data_t
{
  void * data[2];
} _Query_Response_type_support_data_t;

static _Query_Response_type_support_data_t _Query_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Query_Response_message_typesupport_map = {
  2,
  "person_msgs",
  &_Query_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Query_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Query_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Query_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Query_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace person_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, person_msgs, srv, Query_Response)() {
  return &::person_msgs::srv::rosidl_typesupport_c::Query_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "person_msgs/srv/detail/query__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Query_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Query_type_support_ids_t;

static const _Query_type_support_ids_t _Query_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Query_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Query_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Query_type_support_symbol_names_t _Query_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, person_msgs, srv, Query)),
  }
};

typedef struct _Query_type_support_data_t
{
  void * data[2];
} _Query_type_support_data_t;

static _Query_type_support_data_t _Query_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Query_service_typesupport_map = {
  2,
  "person_msgs",
  &_Query_service_typesupport_ids.typesupport_identifier[0],
  &_Query_service_typesupport_symbol_names.symbol_name[0],
  &_Query_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Query_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Query_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace person_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, person_msgs, srv, Query)() {
  return &::person_msgs::srv::rosidl_typesupport_c::Query_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
