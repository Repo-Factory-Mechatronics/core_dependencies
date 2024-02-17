// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/Keypoint2Di.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_

#include "scion_types/msg/detail/keypoint2_di__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_Keypoint2Di_kp
{
public:
  Init_Keypoint2Di_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scion_types::msg::Keypoint2Di kp(::scion_types::msg::Keypoint2Di::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::Keypoint2Di msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::Keypoint2Di>()
{
  return scion_types::msg::builder::Init_Keypoint2Di_kp();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_
