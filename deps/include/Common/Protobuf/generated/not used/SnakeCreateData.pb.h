// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnakeCreateData.proto

#ifndef PROTOBUF_SnakeCreateData_2eproto__INCLUDED
#define PROTOBUF_SnakeCreateData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Base.pb.h"
// @@protoc_insertion_point(includes)
namespace Data {
class SnakeCreateData;
class SnakeCreateDataDefaultTypeInternal;
extern SnakeCreateDataDefaultTypeInternal _SnakeCreateData_default_instance_;
class Vec2;
class Vec2DefaultTypeInternal;
extern Vec2DefaultTypeInternal _Vec2_default_instance_;
}  // namespace Data

namespace Data {

namespace protobuf_SnakeCreateData_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_SnakeCreateData_2eproto

// ===================================================================

class SnakeCreateData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Data.SnakeCreateData) */ {
 public:
  SnakeCreateData();
  virtual ~SnakeCreateData();

  SnakeCreateData(const SnakeCreateData& from);

  inline SnakeCreateData& operator=(const SnakeCreateData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SnakeCreateData& default_instance();

  static inline const SnakeCreateData* internal_default_instance() {
    return reinterpret_cast<const SnakeCreateData*>(
               &_SnakeCreateData_default_instance_);
  }

  void Swap(SnakeCreateData* other);

  // implements Message ----------------------------------------------

  inline SnakeCreateData* New() const PROTOBUF_FINAL { return New(NULL); }

  SnakeCreateData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SnakeCreateData& from);
  void MergeFrom(const SnakeCreateData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SnakeCreateData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Data.Vec2 body = 2;
  int body_size() const;
  void clear_body();
  static const int kBodyFieldNumber = 2;
  const ::Data::Vec2& body(int index) const;
  ::Data::Vec2* mutable_body(int index);
  ::Data::Vec2* add_body();
  ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >*
      mutable_body();
  const ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >&
      body() const;

  // required int32 entity_id = 1;
  bool has_entity_id() const;
  void clear_entity_id();
  static const int kEntityIdFieldNumber = 1;
  ::google::protobuf::int32 entity_id() const;
  void set_entity_id(::google::protobuf::int32 value);

  // optional .Data.ControlType control_type = 3 [default = NPC];
  bool has_control_type() const;
  void clear_control_type();
  static const int kControlTypeFieldNumber = 3;
  ::Data::ControlType control_type() const;
  void set_control_type(::Data::ControlType value);

  // @@protoc_insertion_point(class_scope:Data.SnakeCreateData)
 private:
  void set_has_entity_id();
  void clear_has_entity_id();
  void set_has_control_type();
  void clear_has_control_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Data::Vec2 > body_;
  ::google::protobuf::int32 entity_id_;
  int control_type_;
  friend struct  protobuf_SnakeCreateData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SnakeCreateData

// required int32 entity_id = 1;
inline bool SnakeCreateData::has_entity_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnakeCreateData::set_has_entity_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnakeCreateData::clear_has_entity_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnakeCreateData::clear_entity_id() {
  entity_id_ = 0;
  clear_has_entity_id();
}
inline ::google::protobuf::int32 SnakeCreateData::entity_id() const {
  // @@protoc_insertion_point(field_get:Data.SnakeCreateData.entity_id)
  return entity_id_;
}
inline void SnakeCreateData::set_entity_id(::google::protobuf::int32 value) {
  set_has_entity_id();
  entity_id_ = value;
  // @@protoc_insertion_point(field_set:Data.SnakeCreateData.entity_id)
}

// repeated .Data.Vec2 body = 2;
inline int SnakeCreateData::body_size() const {
  return body_.size();
}
inline void SnakeCreateData::clear_body() {
  body_.Clear();
}
inline const ::Data::Vec2& SnakeCreateData::body(int index) const {
  // @@protoc_insertion_point(field_get:Data.SnakeCreateData.body)
  return body_.Get(index);
}
inline ::Data::Vec2* SnakeCreateData::mutable_body(int index) {
  // @@protoc_insertion_point(field_mutable:Data.SnakeCreateData.body)
  return body_.Mutable(index);
}
inline ::Data::Vec2* SnakeCreateData::add_body() {
  // @@protoc_insertion_point(field_add:Data.SnakeCreateData.body)
  return body_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >*
SnakeCreateData::mutable_body() {
  // @@protoc_insertion_point(field_mutable_list:Data.SnakeCreateData.body)
  return &body_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >&
SnakeCreateData::body() const {
  // @@protoc_insertion_point(field_list:Data.SnakeCreateData.body)
  return body_;
}

// optional .Data.ControlType control_type = 3 [default = NPC];
inline bool SnakeCreateData::has_control_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnakeCreateData::set_has_control_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnakeCreateData::clear_has_control_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnakeCreateData::clear_control_type() {
  control_type_ = 0;
  clear_has_control_type();
}
inline ::Data::ControlType SnakeCreateData::control_type() const {
  // @@protoc_insertion_point(field_get:Data.SnakeCreateData.control_type)
  return static_cast< ::Data::ControlType >(control_type_);
}
inline void SnakeCreateData::set_control_type(::Data::ControlType value) {
  assert(::Data::ControlType_IsValid(value));
  set_has_control_type();
  control_type_ = value;
  // @@protoc_insertion_point(field_set:Data.SnakeCreateData.control_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SnakeCreateData_2eproto__INCLUDED