// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/Idea.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Idea in the package scion_types.
typedef struct scion_types__msg__Idea
{
  int32_t code;
  rosidl_runtime_c__float__Sequence parameters;
} scion_types__msg__Idea;

// Struct for a sequence of scion_types__msg__Idea.
typedef struct scion_types__msg__Idea__Sequence
{
  scion_types__msg__Idea * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__Idea__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_H_
