// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/Datapoint.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__DATAPOINT__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__DATAPOINT__BUILDER_HPP_

#include "scion_types/msg/detail/datapoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_Datapoint_data
{
public:
  Init_Datapoint_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scion_types::msg::Datapoint data(::scion_types::msg::Datapoint::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::Datapoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::Datapoint>()
{
  return scion_types::msg::builder::Init_Datapoint_data();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__DATAPOINT__BUILDER_HPP_
