// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SendComponentInterest.proto

#include "SendComponentInterest.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace WorldsAdriftRebornCoreSdk {
PROTOBUF_CONSTEXPR SendComponentInterest::SendComponentInterest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.components_)*/{}
  , /*decltype(_impl_.entityid_)*/int64_t{0}} {}
struct SendComponentInterestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SendComponentInterestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SendComponentInterestDefaultTypeInternal() {}
  union {
    SendComponentInterest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SendComponentInterestDefaultTypeInternal _SendComponentInterest_default_instance_;
PROTOBUF_CONSTEXPR InterestOverride::InterestOverride(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.componentid_)*/0u
  , /*decltype(_impl_.isinterested_)*/false} {}
struct InterestOverrideDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InterestOverrideDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InterestOverrideDefaultTypeInternal() {}
  union {
    InterestOverride _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InterestOverrideDefaultTypeInternal _InterestOverride_default_instance_;
}  // namespace WorldsAdriftRebornCoreSdk
static ::_pb::Metadata file_level_metadata_SendComponentInterest_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SendComponentInterest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SendComponentInterest_2eproto = nullptr;

const uint32_t TableStruct_SendComponentInterest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::SendComponentInterest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::SendComponentInterest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::SendComponentInterest, _impl_.entityid_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::SendComponentInterest, _impl_.components_),
  0,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::InterestOverride, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::InterestOverride, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::InterestOverride, _impl_.componentid_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::InterestOverride, _impl_.isinterested_),
  0,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::WorldsAdriftRebornCoreSdk::SendComponentInterest)},
  { 10, 18, -1, sizeof(::WorldsAdriftRebornCoreSdk::InterestOverride)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::WorldsAdriftRebornCoreSdk::_SendComponentInterest_default_instance_._instance,
  &::WorldsAdriftRebornCoreSdk::_InterestOverride_default_instance_._instance,
};

const char descriptor_table_protodef_SendComponentInterest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033SendComponentInterest.proto\022\031WorldsAdr"
  "iftRebornCoreSdk\"|\n\025SendComponentInteres"
  "t\022\025\n\010EntityId\030\001 \001(\003H\000\210\001\001\022\?\n\nComponents\030\002"
  " \003(\0132+.WorldsAdriftRebornCoreSdk.Interes"
  "tOverrideB\013\n\t_EntityId\"h\n\020InterestOverri"
  "de\022\030\n\013ComponentId\030\001 \001(\rH\000\210\001\001\022\031\n\014IsIntere"
  "sted\030\002 \001(\010H\001\210\001\001B\016\n\014_ComponentIdB\017\n\r_IsIn"
  "terestedb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_SendComponentInterest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SendComponentInterest_2eproto = {
    false, false, 296, descriptor_table_protodef_SendComponentInterest_2eproto,
    "SendComponentInterest.proto",
    &descriptor_table_SendComponentInterest_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_SendComponentInterest_2eproto::offsets,
    file_level_metadata_SendComponentInterest_2eproto, file_level_enum_descriptors_SendComponentInterest_2eproto,
    file_level_service_descriptors_SendComponentInterest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SendComponentInterest_2eproto_getter() {
  return &descriptor_table_SendComponentInterest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SendComponentInterest_2eproto(&descriptor_table_SendComponentInterest_2eproto);
namespace WorldsAdriftRebornCoreSdk {

// ===================================================================

class SendComponentInterest::_Internal {
 public:
  using HasBits = decltype(std::declval<SendComponentInterest>()._impl_._has_bits_);
  static void set_has_entityid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SendComponentInterest::SendComponentInterest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WorldsAdriftRebornCoreSdk.SendComponentInterest)
}
SendComponentInterest::SendComponentInterest(const SendComponentInterest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SendComponentInterest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.components_){from._impl_.components_}
    , decltype(_impl_.entityid_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.entityid_ = from._impl_.entityid_;
  // @@protoc_insertion_point(copy_constructor:WorldsAdriftRebornCoreSdk.SendComponentInterest)
}

inline void SendComponentInterest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.components_){arena}
    , decltype(_impl_.entityid_){int64_t{0}}
  };
}

SendComponentInterest::~SendComponentInterest() {
  // @@protoc_insertion_point(destructor:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SendComponentInterest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.components_.~RepeatedPtrField();
}

void SendComponentInterest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SendComponentInterest::Clear() {
// @@protoc_insertion_point(message_clear_start:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.components_.Clear();
  _impl_.entityid_ = int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SendComponentInterest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 EntityId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_entityid(&has_bits);
          _impl_.entityid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .WorldsAdriftRebornCoreSdk.InterestOverride Components = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_components(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SendComponentInterest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int64 EntityId = 1;
  if (_internal_has_entityid()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_entityid(), target);
  }

  // repeated .WorldsAdriftRebornCoreSdk.InterestOverride Components = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_components_size()); i < n; i++) {
    const auto& repfield = this->_internal_components(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  return target;
}

size_t SendComponentInterest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .WorldsAdriftRebornCoreSdk.InterestOverride Components = 2;
  total_size += 1UL * this->_internal_components_size();
  for (const auto& msg : this->_impl_.components_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional int64 EntityId = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_entityid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SendComponentInterest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SendComponentInterest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SendComponentInterest::GetClassData() const { return &_class_data_; }


void SendComponentInterest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SendComponentInterest*>(&to_msg);
  auto& from = static_cast<const SendComponentInterest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.components_.MergeFrom(from._impl_.components_);
  if (from._internal_has_entityid()) {
    _this->_internal_set_entityid(from._internal_entityid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SendComponentInterest::CopyFrom(const SendComponentInterest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WorldsAdriftRebornCoreSdk.SendComponentInterest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendComponentInterest::IsInitialized() const {
  return true;
}

void SendComponentInterest::InternalSwap(SendComponentInterest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.components_.InternalSwap(&other->_impl_.components_);
  swap(_impl_.entityid_, other->_impl_.entityid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SendComponentInterest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SendComponentInterest_2eproto_getter, &descriptor_table_SendComponentInterest_2eproto_once,
      file_level_metadata_SendComponentInterest_2eproto[0]);
}

// ===================================================================

class InterestOverride::_Internal {
 public:
  using HasBits = decltype(std::declval<InterestOverride>()._impl_._has_bits_);
  static void set_has_componentid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_isinterested(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

InterestOverride::InterestOverride(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WorldsAdriftRebornCoreSdk.InterestOverride)
}
InterestOverride::InterestOverride(const InterestOverride& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InterestOverride* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.componentid_){}
    , decltype(_impl_.isinterested_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.componentid_, &from._impl_.componentid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.isinterested_) -
    reinterpret_cast<char*>(&_impl_.componentid_)) + sizeof(_impl_.isinterested_));
  // @@protoc_insertion_point(copy_constructor:WorldsAdriftRebornCoreSdk.InterestOverride)
}

inline void InterestOverride::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.componentid_){0u}
    , decltype(_impl_.isinterested_){false}
  };
}

InterestOverride::~InterestOverride() {
  // @@protoc_insertion_point(destructor:WorldsAdriftRebornCoreSdk.InterestOverride)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InterestOverride::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void InterestOverride::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InterestOverride::Clear() {
// @@protoc_insertion_point(message_clear_start:WorldsAdriftRebornCoreSdk.InterestOverride)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.componentid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.isinterested_) -
        reinterpret_cast<char*>(&_impl_.componentid_)) + sizeof(_impl_.isinterested_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InterestOverride::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 ComponentId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_componentid(&has_bits);
          _impl_.componentid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool IsInterested = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_isinterested(&has_bits);
          _impl_.isinterested_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* InterestOverride::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WorldsAdriftRebornCoreSdk.InterestOverride)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional uint32 ComponentId = 1;
  if (_internal_has_componentid()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_componentid(), target);
  }

  // optional bool IsInterested = 2;
  if (_internal_has_isinterested()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_isinterested(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WorldsAdriftRebornCoreSdk.InterestOverride)
  return target;
}

size_t InterestOverride::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WorldsAdriftRebornCoreSdk.InterestOverride)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 ComponentId = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_componentid());
    }

    // optional bool IsInterested = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InterestOverride::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InterestOverride::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InterestOverride::GetClassData() const { return &_class_data_; }


void InterestOverride::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InterestOverride*>(&to_msg);
  auto& from = static_cast<const InterestOverride&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WorldsAdriftRebornCoreSdk.InterestOverride)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.componentid_ = from._impl_.componentid_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.isinterested_ = from._impl_.isinterested_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InterestOverride::CopyFrom(const InterestOverride& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WorldsAdriftRebornCoreSdk.InterestOverride)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InterestOverride::IsInitialized() const {
  return true;
}

void InterestOverride::InternalSwap(InterestOverride* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InterestOverride, _impl_.isinterested_)
      + sizeof(InterestOverride::_impl_.isinterested_)
      - PROTOBUF_FIELD_OFFSET(InterestOverride, _impl_.componentid_)>(
          reinterpret_cast<char*>(&_impl_.componentid_),
          reinterpret_cast<char*>(&other->_impl_.componentid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata InterestOverride::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SendComponentInterest_2eproto_getter, &descriptor_table_SendComponentInterest_2eproto_once,
      file_level_metadata_SendComponentInterest_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace WorldsAdriftRebornCoreSdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::WorldsAdriftRebornCoreSdk::SendComponentInterest*
Arena::CreateMaybeMessage< ::WorldsAdriftRebornCoreSdk::SendComponentInterest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WorldsAdriftRebornCoreSdk::SendComponentInterest >(arena);
}
template<> PROTOBUF_NOINLINE ::WorldsAdriftRebornCoreSdk::InterestOverride*
Arena::CreateMaybeMessage< ::WorldsAdriftRebornCoreSdk::InterestOverride >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WorldsAdriftRebornCoreSdk::InterestOverride >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
