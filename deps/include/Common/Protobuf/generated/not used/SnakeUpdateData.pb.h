// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnakeUpdateData.proto

#ifndef PROTOBUF_SnakeUpdateData_2eproto__INCLUDED
#define PROTOBUF_SnakeUpdateData_2eproto__INCLUDED

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
class SnakeUpdateData;
class SnakeUpdateDataDefaultTypeInternal;
extern SnakeUpdateDataDefaultTypeInternal _SnakeUpdateData_default_instance_;
class Vec2;
class Vec2DefaultTypeInternal;
extern Vec2DefaultTypeInternal _Vec2_default_instance_;
}  // namespace Data

namespace Data {

namespace protobuf_SnakeUpdateData_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_SnakeUpdateData_2eproto

// ===================================================================

class SnakeUpdateData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Data.SnakeUpdateData) */ {
 public:
  SnakeUpdateData();
  virtual ~SnakeUpdateData();

  SnakeUpdateData(const SnakeUpdateData& from);

  inline SnakeUpdateData& operator=(const SnakeUpdateData& from) {
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
  static const SnakeUpdateData& default_instance();

  static inline const SnakeUpdateData* internal_default_instance() {
    return reinterpret_cast<const SnakeUpdateData*>(
               &_SnakeUpdateData_default_instance_);
  }

  void Swap(SnakeUpdateData* other);

  // implements Message ----------------------------------------------

  inline SnakeUpdateData* New() const PROTOBUF_FINAL { return New(NULL); }

  SnakeUpdateData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SnakeUpdateData& from);
  void MergeFrom(const SnakeUpdateData& from);
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
  void InternalSwap(SnakeUpdateData* other);
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

  // @@protoc_insertion_point(class_scope:Data.SnakeUpdateData)
 private:
  void set_has_entity_id();
  void clear_has_entity_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Data::Vec2 > body_;
  ::google::protobuf::int32 entity_id_;
  friend struct  protobuf_SnakeUpdateData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SnakeUpdateData

// required int32 entity_id = 1;
inline bool SnakeUpdateData::has_entity_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnakeUpdateData::set_has_entity_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnakeUpdateData::clear_has_entity_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnakeUpdateData::clear_entity_id() {
  entity_id_ = 0;
  clear_has_entity_id();
}
inline ::google::protobuf::int32 SnakeUpdateData::entity_id() const {
  // @@protoc_insertion_point(field_get:Data.SnakeUpdateData.entity_id)
  return entity_id_;
}
inline void SnakeUpdateData::set_entity_id(::google::protobuf::int32 value) {
  set_has_entity_id();
  entity_id_ = value;
  // @@protoc_insertion_point(field_set:Data.SnakeUpdateData.entity_id)
}

// repeated .Data.Vec2 body = 2;
inline int SnakeUpdateData::body_size() const {
  return body_.size();
}
inline void SnakeUpdateData::clear_body() {
  body_.Clear();
}
inline const ::Data::Vec2& SnakeUpdateData::body(int index) const {
  // @@protoc_insertion_point(field_get:Data.SnakeUpdateData.body)
  return body_.Get(index);
}
inline ::Data::Vec2* SnakeUpdateData::mutable_body(int index) {
  // @@protoc_insertion_point(field_mutable:Data.SnakeUpdateData.body)
  return body_.Mutable(index);
}
inline ::Data::Vec2* SnakeUpdateData::add_body() {
  // @@protoc_insertion_point(field_add:Data.SnakeUpdateData.body)
  return body_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >*
SnakeUpdateData::mutable_body() {
  // @@protoc_insertion_point(field_mutable_list:Data.SnakeUpdateData.body)
  return &body_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >&
SnakeUpdateData::body() const {
  // @@protoc_insertion_point(field_list:Data.SnakeUpdateData.body)
  return body_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SnakeUpdateData_2eproto__INCLUDED