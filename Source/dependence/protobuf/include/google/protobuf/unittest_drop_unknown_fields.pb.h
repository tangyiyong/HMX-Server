// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_drop_unknown_fields.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto__INCLUDED

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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace unittest_drop_unknown_fields {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();

class Foo;
class FooWithExtraFields;

enum Foo_NestedEnum {
  Foo_NestedEnum_FOO = 0,
  Foo_NestedEnum_BAR = 1,
  Foo_NestedEnum_BAZ = 2,
  Foo_NestedEnum_Foo_NestedEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Foo_NestedEnum_Foo_NestedEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Foo_NestedEnum_IsValid(int value);
const Foo_NestedEnum Foo_NestedEnum_NestedEnum_MIN = Foo_NestedEnum_FOO;
const Foo_NestedEnum Foo_NestedEnum_NestedEnum_MAX = Foo_NestedEnum_BAZ;
const int Foo_NestedEnum_NestedEnum_ARRAYSIZE = Foo_NestedEnum_NestedEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* Foo_NestedEnum_descriptor();
inline const ::std::string& Foo_NestedEnum_Name(Foo_NestedEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    Foo_NestedEnum_descriptor(), value);
}
inline bool Foo_NestedEnum_Parse(
    const ::std::string& name, Foo_NestedEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Foo_NestedEnum>(
    Foo_NestedEnum_descriptor(), name, value);
}
enum FooWithExtraFields_NestedEnum {
  FooWithExtraFields_NestedEnum_FOO = 0,
  FooWithExtraFields_NestedEnum_BAR = 1,
  FooWithExtraFields_NestedEnum_BAZ = 2,
  FooWithExtraFields_NestedEnum_QUX = 3,
  FooWithExtraFields_NestedEnum_FooWithExtraFields_NestedEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FooWithExtraFields_NestedEnum_FooWithExtraFields_NestedEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FooWithExtraFields_NestedEnum_IsValid(int value);
const FooWithExtraFields_NestedEnum FooWithExtraFields_NestedEnum_NestedEnum_MIN = FooWithExtraFields_NestedEnum_FOO;
const FooWithExtraFields_NestedEnum FooWithExtraFields_NestedEnum_NestedEnum_MAX = FooWithExtraFields_NestedEnum_QUX;
const int FooWithExtraFields_NestedEnum_NestedEnum_ARRAYSIZE = FooWithExtraFields_NestedEnum_NestedEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* FooWithExtraFields_NestedEnum_descriptor();
inline const ::std::string& FooWithExtraFields_NestedEnum_Name(FooWithExtraFields_NestedEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    FooWithExtraFields_NestedEnum_descriptor(), value);
}
inline bool FooWithExtraFields_NestedEnum_Parse(
    const ::std::string& name, FooWithExtraFields_NestedEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FooWithExtraFields_NestedEnum>(
    FooWithExtraFields_NestedEnum_descriptor(), name, value);
}
// ===================================================================

class Foo : public ::google::protobuf::Message {
 public:
  Foo();
  virtual ~Foo();

  Foo(const Foo& from);

  inline Foo& operator=(const Foo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Foo& default_instance();

  void Swap(Foo* other);

  // implements Message ----------------------------------------------

  inline Foo* New() const { return New(NULL); }

  Foo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Foo& from);
  void MergeFrom(const Foo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Foo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Foo_NestedEnum NestedEnum;
  static const NestedEnum FOO =
    Foo_NestedEnum_FOO;
  static const NestedEnum BAR =
    Foo_NestedEnum_BAR;
  static const NestedEnum BAZ =
    Foo_NestedEnum_BAZ;
  static inline bool NestedEnum_IsValid(int value) {
    return Foo_NestedEnum_IsValid(value);
  }
  static const NestedEnum NestedEnum_MIN =
    Foo_NestedEnum_NestedEnum_MIN;
  static const NestedEnum NestedEnum_MAX =
    Foo_NestedEnum_NestedEnum_MAX;
  static const int NestedEnum_ARRAYSIZE =
    Foo_NestedEnum_NestedEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  NestedEnum_descriptor() {
    return Foo_NestedEnum_descriptor();
  }
  static inline const ::std::string& NestedEnum_Name(NestedEnum value) {
    return Foo_NestedEnum_Name(value);
  }
  static inline bool NestedEnum_Parse(const ::std::string& name,
      NestedEnum* value) {
    return Foo_NestedEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional int32 int32_value = 1;
  void clear_int32_value();
  static const int kInt32ValueFieldNumber = 1;
  ::google::protobuf::int32 int32_value() const;
  void set_int32_value(::google::protobuf::int32 value);

  // optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  void clear_enum_value();
  static const int kEnumValueFieldNumber = 2;
  ::unittest_drop_unknown_fields::Foo_NestedEnum enum_value() const;
  void set_enum_value(::unittest_drop_unknown_fields::Foo_NestedEnum value);

  // @@protoc_insertion_point(class_scope:unittest_drop_unknown_fields.Foo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 int32_value_;
  int enum_value_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();

  void InitAsDefaultInstance();
  static Foo* default_instance_;
};
// -------------------------------------------------------------------

class FooWithExtraFields : public ::google::protobuf::Message {
 public:
  FooWithExtraFields();
  virtual ~FooWithExtraFields();

  FooWithExtraFields(const FooWithExtraFields& from);

  inline FooWithExtraFields& operator=(const FooWithExtraFields& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FooWithExtraFields& default_instance();

  void Swap(FooWithExtraFields* other);

  // implements Message ----------------------------------------------

  inline FooWithExtraFields* New() const { return New(NULL); }

  FooWithExtraFields* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FooWithExtraFields& from);
  void MergeFrom(const FooWithExtraFields& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FooWithExtraFields* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef FooWithExtraFields_NestedEnum NestedEnum;
  static const NestedEnum FOO =
    FooWithExtraFields_NestedEnum_FOO;
  static const NestedEnum BAR =
    FooWithExtraFields_NestedEnum_BAR;
  static const NestedEnum BAZ =
    FooWithExtraFields_NestedEnum_BAZ;
  static const NestedEnum QUX =
    FooWithExtraFields_NestedEnum_QUX;
  static inline bool NestedEnum_IsValid(int value) {
    return FooWithExtraFields_NestedEnum_IsValid(value);
  }
  static const NestedEnum NestedEnum_MIN =
    FooWithExtraFields_NestedEnum_NestedEnum_MIN;
  static const NestedEnum NestedEnum_MAX =
    FooWithExtraFields_NestedEnum_NestedEnum_MAX;
  static const int NestedEnum_ARRAYSIZE =
    FooWithExtraFields_NestedEnum_NestedEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  NestedEnum_descriptor() {
    return FooWithExtraFields_NestedEnum_descriptor();
  }
  static inline const ::std::string& NestedEnum_Name(NestedEnum value) {
    return FooWithExtraFields_NestedEnum_Name(value);
  }
  static inline bool NestedEnum_Parse(const ::std::string& name,
      NestedEnum* value) {
    return FooWithExtraFields_NestedEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional int32 int32_value = 1;
  void clear_int32_value();
  static const int kInt32ValueFieldNumber = 1;
  ::google::protobuf::int32 int32_value() const;
  void set_int32_value(::google::protobuf::int32 value);

  // optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  void clear_enum_value();
  static const int kEnumValueFieldNumber = 2;
  ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum enum_value() const;
  void set_enum_value(::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum value);

  // optional int32 extra_int32_value = 3;
  void clear_extra_int32_value();
  static const int kExtraInt32ValueFieldNumber = 3;
  ::google::protobuf::int32 extra_int32_value() const;
  void set_extra_int32_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:unittest_drop_unknown_fields.FooWithExtraFields)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 int32_value_;
  int enum_value_;
  ::google::protobuf::int32 extra_int32_value_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();

  void InitAsDefaultInstance();
  static FooWithExtraFields* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Foo

// optional int32 int32_value = 1;
inline void Foo::clear_int32_value() {
  int32_value_ = 0;
}
inline ::google::protobuf::int32 Foo::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.int32_value)
  return int32_value_;
}
inline void Foo::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.int32_value)
}

// optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
inline void Foo::clear_enum_value() {
  enum_value_ = 0;
}
inline ::unittest_drop_unknown_fields::Foo_NestedEnum Foo::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::Foo_NestedEnum >(enum_value_);
}
inline void Foo::set_enum_value(::unittest_drop_unknown_fields::Foo_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.enum_value)
}

// -------------------------------------------------------------------

// FooWithExtraFields

// optional int32 int32_value = 1;
inline void FooWithExtraFields::clear_int32_value() {
  int32_value_ = 0;
}
inline ::google::protobuf::int32 FooWithExtraFields::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
  return int32_value_;
}
inline void FooWithExtraFields::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
}

// optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
inline void FooWithExtraFields::clear_enum_value() {
  enum_value_ = 0;
}
inline ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum FooWithExtraFields::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum >(enum_value_);
}
inline void FooWithExtraFields::set_enum_value(::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
}

// optional int32 extra_int32_value = 3;
inline void FooWithExtraFields::clear_extra_int32_value() {
  extra_int32_value_ = 0;
}
inline ::google::protobuf::int32 FooWithExtraFields::extra_int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
  return extra_int32_value_;
}
inline void FooWithExtraFields::set_extra_int32_value(::google::protobuf::int32 value) {
  
  extra_int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace unittest_drop_unknown_fields

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::unittest_drop_unknown_fields::Foo_NestedEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::unittest_drop_unknown_fields::Foo_NestedEnum>() {
  return ::unittest_drop_unknown_fields::Foo_NestedEnum_descriptor();
}
template <> struct is_proto_enum< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum>() {
  return ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto__INCLUDED