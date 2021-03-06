// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnakeAdditionalData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SnakeAdditionalData.pb.h"

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
class SnakeAdditionalDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SnakeAdditionalData> {
} _SnakeAdditionalData_default_instance_;

namespace protobuf_SnakeAdditionalData_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeAdditionalData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeAdditionalData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeAdditionalData, bodies_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SnakeAdditionalData, control_type_),
  ~0u,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(SnakeAdditionalData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SnakeAdditionalData_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "SnakeAdditionalData.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _SnakeAdditionalData_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::Data::protobuf_Base_2eproto::InitDefaults();
  _SnakeAdditionalData_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\031SnakeAdditionalData.proto\022\004Data\032\nBase."
      "proto\"Z\n\023SnakeAdditionalData\022\032\n\006bodies\030\001"
      " \003(\0132\n.Data.Vec2\022\'\n\014control_type\030\002 \002(\0162\021"
      ".Data.ControlType"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 137);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SnakeAdditionalData.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_SnakeAdditionalData_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SnakeAdditionalData::kBodiesFieldNumber;
const int SnakeAdditionalData::kControlTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SnakeAdditionalData::SnakeAdditionalData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_SnakeAdditionalData_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Data.SnakeAdditionalData)
}
SnakeAdditionalData::SnakeAdditionalData(const SnakeAdditionalData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      bodies_(from.bodies_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  control_type_ = from.control_type_;
  // @@protoc_insertion_point(copy_constructor:Data.SnakeAdditionalData)
}

void SnakeAdditionalData::SharedCtor() {
  _cached_size_ = 0;
  control_type_ = 0;
}

SnakeAdditionalData::~SnakeAdditionalData() {
  // @@protoc_insertion_point(destructor:Data.SnakeAdditionalData)
  SharedDtor();
}

void SnakeAdditionalData::SharedDtor() {
}

void SnakeAdditionalData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SnakeAdditionalData::descriptor() {
  protobuf_SnakeAdditionalData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SnakeAdditionalData_2eproto::file_level_metadata[0].descriptor;
}

const SnakeAdditionalData& SnakeAdditionalData::default_instance() {
  protobuf_SnakeAdditionalData_2eproto::InitDefaults();
  return *internal_default_instance();
}

SnakeAdditionalData* SnakeAdditionalData::New(::google::protobuf::Arena* arena) const {
  SnakeAdditionalData* n = new SnakeAdditionalData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SnakeAdditionalData::Clear() {
// @@protoc_insertion_point(message_clear_start:Data.SnakeAdditionalData)
  bodies_.Clear();
  control_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SnakeAdditionalData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Data.SnakeAdditionalData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Data.Vec2 bodies = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_bodies()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // required .Data.ControlType control_type = 2;
      case 2: {
        if (tag == 16u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Data::ControlType_IsValid(value)) {
            set_control_type(static_cast< ::Data::ControlType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:Data.SnakeAdditionalData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Data.SnakeAdditionalData)
  return false;
#undef DO_
}

void SnakeAdditionalData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Data.SnakeAdditionalData)
  // repeated .Data.Vec2 bodies = 1;
  for (unsigned int i = 0, n = this->bodies_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->bodies(i), output);
  }

  // required .Data.ControlType control_type = 2;
  if (has_control_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->control_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Data.SnakeAdditionalData)
}

::google::protobuf::uint8* SnakeAdditionalData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Data.SnakeAdditionalData)
  // repeated .Data.Vec2 bodies = 1;
  for (unsigned int i = 0, n = this->bodies_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->bodies(i), false, target);
  }

  // required .Data.ControlType control_type = 2;
  if (has_control_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->control_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Data.SnakeAdditionalData)
  return target;
}

size_t SnakeAdditionalData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Data.SnakeAdditionalData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // required .Data.ControlType control_type = 2;
  if (has_control_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->control_type());
  }
  // repeated .Data.Vec2 bodies = 1;
  {
    unsigned int count = this->bodies_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->bodies(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SnakeAdditionalData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Data.SnakeAdditionalData)
  GOOGLE_DCHECK_NE(&from, this);
  const SnakeAdditionalData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SnakeAdditionalData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Data.SnakeAdditionalData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Data.SnakeAdditionalData)
    MergeFrom(*source);
  }
}

void SnakeAdditionalData::MergeFrom(const SnakeAdditionalData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Data.SnakeAdditionalData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bodies_.MergeFrom(from.bodies_);
  if (from.has_control_type()) {
    set_control_type(from.control_type());
  }
}

void SnakeAdditionalData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Data.SnakeAdditionalData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SnakeAdditionalData::CopyFrom(const SnakeAdditionalData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Data.SnakeAdditionalData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SnakeAdditionalData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->bodies())) return false;
  return true;
}

void SnakeAdditionalData::Swap(SnakeAdditionalData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SnakeAdditionalData::InternalSwap(SnakeAdditionalData* other) {
  bodies_.UnsafeArenaSwap(&other->bodies_);
  std::swap(control_type_, other->control_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SnakeAdditionalData::GetMetadata() const {
  protobuf_SnakeAdditionalData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SnakeAdditionalData_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SnakeAdditionalData

// repeated .Data.Vec2 bodies = 1;
int SnakeAdditionalData::bodies_size() const {
  return bodies_.size();
}
void SnakeAdditionalData::clear_bodies() {
  bodies_.Clear();
}
const ::Data::Vec2& SnakeAdditionalData::bodies(int index) const {
  // @@protoc_insertion_point(field_get:Data.SnakeAdditionalData.bodies)
  return bodies_.Get(index);
}
::Data::Vec2* SnakeAdditionalData::mutable_bodies(int index) {
  // @@protoc_insertion_point(field_mutable:Data.SnakeAdditionalData.bodies)
  return bodies_.Mutable(index);
}
::Data::Vec2* SnakeAdditionalData::add_bodies() {
  // @@protoc_insertion_point(field_add:Data.SnakeAdditionalData.bodies)
  return bodies_.Add();
}
::google::protobuf::RepeatedPtrField< ::Data::Vec2 >*
SnakeAdditionalData::mutable_bodies() {
  // @@protoc_insertion_point(field_mutable_list:Data.SnakeAdditionalData.bodies)
  return &bodies_;
}
const ::google::protobuf::RepeatedPtrField< ::Data::Vec2 >&
SnakeAdditionalData::bodies() const {
  // @@protoc_insertion_point(field_list:Data.SnakeAdditionalData.bodies)
  return bodies_;
}

// required .Data.ControlType control_type = 2;
bool SnakeAdditionalData::has_control_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SnakeAdditionalData::set_has_control_type() {
  _has_bits_[0] |= 0x00000001u;
}
void SnakeAdditionalData::clear_has_control_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void SnakeAdditionalData::clear_control_type() {
  control_type_ = 0;
  clear_has_control_type();
}
::Data::ControlType SnakeAdditionalData::control_type() const {
  // @@protoc_insertion_point(field_get:Data.SnakeAdditionalData.control_type)
  return static_cast< ::Data::ControlType >(control_type_);
}
void SnakeAdditionalData::set_control_type(::Data::ControlType value) {
  assert(::Data::ControlType_IsValid(value));
  set_has_control_type();
  control_type_ = value;
  // @@protoc_insertion_point(field_set:Data.SnakeAdditionalData.control_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Data

// @@protoc_insertion_point(global_scope)
