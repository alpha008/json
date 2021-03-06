// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.BaseDefine.proto

#ifndef PROTOBUF_IM_2eBaseDefine_2eproto__INCLUDED
#define PROTOBUF_IM_2eBaseDefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace BaseDefine {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_IM_2eBaseDefine_2eproto();
void protobuf_AssignDesc_IM_2eBaseDefine_2eproto();
void protobuf_ShutdownFile_IM_2eBaseDefine_2eproto();


enum PhoneType {
  PHONE_DEFAULT = 0,
  PHONE_HOME = 1,
  PHONE_WORK = 2,
  PhoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PhoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PhoneType_IsValid(int value);
const PhoneType PhoneType_MIN = PHONE_DEFAULT;
const PhoneType PhoneType_MAX = PHONE_WORK;
const int PhoneType_ARRAYSIZE = PhoneType_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace BaseDefine
}  // namespace IM

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::IM::BaseDefine::PhoneType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IM_2eBaseDefine_2eproto__INCLUDED
