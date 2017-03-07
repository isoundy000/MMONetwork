// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WallAdditionalCreateData.proto

#ifndef PROTOBUF_WallAdditionalCreateData_2eproto__INCLUDED
#define PROTOBUF_WallAdditionalCreateData_2eproto__INCLUDED

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
class Vec2;
class Vec2DefaultTypeInternal;
extern Vec2DefaultTypeInternal _Vec2_default_instance_;
class WallAdditionalCreateData;
class WallAdditionalCreateDataDefaultTypeInternal;
extern WallAdditionalCreateDataDefaultTypeInternal _WallAdditionalCreateData_default_instance_;
}  // namespace Data

namespace Data {

namespace protobuf_WallAdditionalCreateData_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_WallAdditionalCreateData_2eproto

// ===================================================================

class WallAdditionalCreateData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Data.WallAdditionalCreateData) */ {
 public:
  WallAdditionalCreateData();
  virtual ~WallAdditionalCreateData();

  WallAdditionalCreateData(const WallAdditionalCreateData& from);

  inline WallAdditionalCreateData& operator=(const WallAdditionalCreateData& from) {
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
  static const WallAdditionalCreateData& default_instance();

  static inline const WallAdditionalCreateData* internal_default_instance() {
    return reinterpret_cast<const WallAdditionalCreateData*>(
               &_WallAdditionalCreateData_default_instance_);
  }

  void Swap(WallAdditionalCreateData* other);

  // implements Message ----------------------------------------------

  inline WallAdditionalCreateData* New() const PROTOBUF_FINAL { return New(NULL); }

  WallAdditionalCreateData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WallAdditionalCreateData& from);
  void MergeFrom(const WallAdditionalCreateData& from);
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
  void InternalSwap(WallAdditionalCreateData* other);
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

  // required .Data.Vec2 begin = 1;
  bool has_begin() const;
  void clear_begin();
  static const int kBeginFieldNumber = 1;
  const ::Data::Vec2& begin() const;
  ::Data::Vec2* mutable_begin();
  ::Data::Vec2* release_begin();
  void set_allocated_begin(::Data::Vec2* begin);

  // required .Data.Vec2 end = 2;
  bool has_end() const;
  void clear_end();
  static const int kEndFieldNumber = 2;
  const ::Data::Vec2& end() const;
  ::Data::Vec2* mutable_end();
  ::Data::Vec2* release_end();
  void set_allocated_end(::Data::Vec2* end);

  // @@protoc_insertion_point(class_scope:Data.WallAdditionalCreateData)
 private:
  void set_has_begin();
  void clear_has_begin();
  void set_has_end();
  void clear_has_end();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::Data::Vec2* begin_;
  ::Data::Vec2* end_;
  friend struct  protobuf_WallAdditionalCreateData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WallAdditionalCreateData

// required .Data.Vec2 begin = 1;
inline bool WallAdditionalCreateData::has_begin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WallAdditionalCreateData::set_has_begin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WallAdditionalCreateData::clear_has_begin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WallAdditionalCreateData::clear_begin() {
  if (begin_ != NULL) begin_->::Data::Vec2::Clear();
  clear_has_begin();
}
inline const ::Data::Vec2& WallAdditionalCreateData::begin() const {
  // @@protoc_insertion_point(field_get:Data.WallAdditionalCreateData.begin)
  return begin_ != NULL ? *begin_
                         : *::Data::Vec2::internal_default_instance();
}
inline ::Data::Vec2* WallAdditionalCreateData::mutable_begin() {
  set_has_begin();
  if (begin_ == NULL) {
    begin_ = new ::Data::Vec2;
  }
  // @@protoc_insertion_point(field_mutable:Data.WallAdditionalCreateData.begin)
  return begin_;
}
inline ::Data::Vec2* WallAdditionalCreateData::release_begin() {
  // @@protoc_insertion_point(field_release:Data.WallAdditionalCreateData.begin)
  clear_has_begin();
  ::Data::Vec2* temp = begin_;
  begin_ = NULL;
  return temp;
}
inline void WallAdditionalCreateData::set_allocated_begin(::Data::Vec2* begin) {
  delete begin_;
  begin_ = begin;
  if (begin) {
    set_has_begin();
  } else {
    clear_has_begin();
  }
  // @@protoc_insertion_point(field_set_allocated:Data.WallAdditionalCreateData.begin)
}

// required .Data.Vec2 end = 2;
inline bool WallAdditionalCreateData::has_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WallAdditionalCreateData::set_has_end() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WallAdditionalCreateData::clear_has_end() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WallAdditionalCreateData::clear_end() {
  if (end_ != NULL) end_->::Data::Vec2::Clear();
  clear_has_end();
}
inline const ::Data::Vec2& WallAdditionalCreateData::end() const {
  // @@protoc_insertion_point(field_get:Data.WallAdditionalCreateData.end)
  return end_ != NULL ? *end_
                         : *::Data::Vec2::internal_default_instance();
}
inline ::Data::Vec2* WallAdditionalCreateData::mutable_end() {
  set_has_end();
  if (end_ == NULL) {
    end_ = new ::Data::Vec2;
  }
  // @@protoc_insertion_point(field_mutable:Data.WallAdditionalCreateData.end)
  return end_;
}
inline ::Data::Vec2* WallAdditionalCreateData::release_end() {
  // @@protoc_insertion_point(field_release:Data.WallAdditionalCreateData.end)
  clear_has_end();
  ::Data::Vec2* temp = end_;
  end_ = NULL;
  return temp;
}
inline void WallAdditionalCreateData::set_allocated_end(::Data::Vec2* end) {
  delete end_;
  end_ = end;
  if (end) {
    set_has_end();
  } else {
    clear_has_end();
  }
  // @@protoc_insertion_point(field_set_allocated:Data.WallAdditionalCreateData.end)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WallAdditionalCreateData_2eproto__INCLUDED