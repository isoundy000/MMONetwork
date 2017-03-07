// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnakeUpdateData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SnakeUpdateData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Data {
class SnakeUpdateDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SnakeUpdateData> {
} _SnakeUpdateData_default_instance_;

namespace protobuf_SnakeUpdateData_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeUpdateData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeUpdateData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeUpdateData, entity_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeUpdateData, body_),
  0,
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(SnakeUpdateData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SnakeUpdateData_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "SnakeUpdateData.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _SnakeUpdateData_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::Data::protobuf_Base_2eproto::InitDefaults();
  _SnakeUpdateData_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\025SnakeUpdateData.proto\022\004Data\032\nBase.prot"
      "o\">\n\017SnakeUpdateData\022\021\n\tentity_id\030\001 \002(\005\022"
      "\030\n\004body\030\002 \003(\0132\n.Data.Vec2"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 105);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SnakeUpdateData.proto", &protobuf_RegisterTypes);
  ::Data::protobuf_Base_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_SnakeUpdateData_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SnakeUpdateData::kEntityIdFieldNumber;
const int SnakeUpdateData::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SnakeUpdateData::SnakeUpdateData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_SnakeUpdateData_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Data.SnakeUpdateData)
}
SnakeUpdateData::SnakeUpdateData(const SnakeUpdateData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      body_(from.body_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  entity_id_ = from.entity_id_;
  // @@protoc_insertion_point(copy_constructor:Data.SnakeUpdateData)
}

void SnakeUpdateData::SharedCtor() {
  _cached_size_ = 0;
  entity_id_ = 0;
}

SnakeUpdateData::~SnakeUpdateData() {
  // @@protoc_insertion_point(destructor:Data.SnakeUpdateData)
  SharedDtor();
}

void SnakeUpdateData::SharedDtor() {
}

void SnakeUpdateData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SnakeUpdateData::descriptor() {
  protobuf_SnakeUpdateData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SnakeUpdateData_2eproto::file_level_metadata[0].descriptor;
}

const SnakeUpdateData& SnakeUpdateData::default_instance() {
  protobuf_SnakeUpdateData_2eproto::InitDefaults();
  return *internal_default_instance();
}

SnakeUpdateData* SnakeUpdateData::New(::google::protobuf::Arena* arena) const {
  SnakeUpdateData* n = new SnakeUpdateData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SnakeUpdateData::Clear() {
// @@protoc_insertion_point(message_clear_start:Data.SnakeUpdateData)
  body_.Clear();
  entity_id_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SnakeUpdateData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Data.SnakeUpdateData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 entity_id = 1;
      case 1: {
        if (tag == 8u) {
          set_has_entity_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Data.Vec2 body = 2;
      case 2: {
        if (tag == 18u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_body()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Data.SnakeUpdateData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Data.SnakeUpdateData)
  return false;
#undef DO_
}

void SnakeUpdateData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Data.SnakeUpdateData)
  // required int32 entity_id = 1;
  if (has_entity_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->entity_id(), output);
  }

  // repeated .Data.Vec2 body = 2;
  for (unsigned int i = 0, n = this->body_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->body(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Data.SnakeUpdateData)
}

::google::protobuf::uint8* SnakeUpdateData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Data.SnakeUpdateData)
  // required int32 entity_id = 1;
  if (has_entity_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->entity_id(), target);
  }

  // repeated .Data.Vec2 body = 2;
  for (unsigned int i = 0, n = this->body_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->body(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Data.SnakeUpdateData)
  return target;
}

size_t SnakeUpdateData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Data.SnakeUpdateData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // required int32 entity_id = 1;
  if (has_entity_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->entity_id());
  }
  // repeated .Data.Vec2 body = 2;
  {
    unsigned int count = this->body_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->body(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SnakeUpdateData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Data.SnakeUpdateData)
  GOOGLE_DCHECK_NE(&from, this);
  const SnakeUpdateData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SnakeUpdateData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Data.SnakeUpdateData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Data.SnakeUpdateData)
    MergeFrom(*source);
  }
}

void SnakeUpdateData::MergeFrom(const SnakeUpdateData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Data.SnakeUpdateData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  body_.MergeFrom(from.body_);
  if (from.has_entity_id()) {
    set_entity_id(from.entity_id());
  }
}

void SnakeUpdateData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Data.SnakeUpdateData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SnakeUpdateData::CopyFrom(const SnakeUpdateData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Data.SnakeUpdateData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SnakeUpdateData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->body())) return false;
  return true;
}

void SnakeUpdateData::Swap(SnakeUpdateData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SnakeUpdateData::InternalSwap(SnakeUpdateData* other) {
  body_.UnsafeArenaSwap(&other->body_);
  std::swap(entity_id_, other->entity_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SnakeUpdateData::GetMetadata() const {
  protobuf_SnakeUpdateData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SnakeUpdateData_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SnakeUpdateData

// required int32 entity_id = 1;
bool SnakeUpdateData::has_entity_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SnakeUpdateData::set_has_entity_id() {
  _has_bits_[0] |= 0x00000001u;
}
void SnakeUpdateData::clear_has_entity_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void SnakeUpdateData::clear_entity_id() {
  entity_id_ = 0;
  clear_has_entity_id();
}
::google::protobuf::int32 SnakeUpdateData::entity_id() const {
  // @@protoc_insertion_point(field_get:Data.SnakeUpdateData.entity_id)
  return entity_id_;
}
void SnakeUpdateData::set_entity_id(::google::protobuf::int32 value) {
  set_has_entity_id();
  entity_id_ = value;
  // @@protoc_insertion_point(field_set:Data.SnakeUpdateData.entity_id)
}

// repeated .Data.Vec2 body = 2;
int SnakeUpdateData::body_size() const {
  return body_.size();
}
void SnakeUpdateData::clear_body() {
  body_.Clear();
}
const ::Data::Vec2& SnakeUpdateData::body(int index) const {
  // @@protoc_insertion_point(field_get:Data.SnakeUpdateData.body)
  return body_.Get(index);
}
::Data::Vec2* SnakeUpdateData::mutable_body(int index) {
  // @@protoc_insertion_point(field_mutable:Data.SnakeUpdateData.body)
  return body_.Mutable(index);
}
::Data::Vec2* SnakeUpdateData::add_body() {
  // @@protoc_insertion_point(field_add:Data.SnakeUpdateData.body)
  return body_.Add();
}
::google::protobuf::RepeatedPtrField< ::Data::Vec2 >*
SnakeUpdateData::mutable_body() {
  // @@protoc_insertion_point(field_mutable_list:Data.SnakeUpdateData.body)
  return &body_;
}
const ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >&
SnakeUpdateData::body() const {
  // @@protoc_insertion_point(field_list:Data.SnakeUpdateData.body)
  return body_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Data

// @@protoc_insertion_point(global_scope)