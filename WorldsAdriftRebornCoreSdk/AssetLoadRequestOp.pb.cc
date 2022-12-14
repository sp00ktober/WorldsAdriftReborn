// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AssetLoadRequestOp.proto

#include "AssetLoadRequestOp.pb.h"

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
PROTOBUF_CONSTEXPR AssetLoadRequestOp::AssetLoadRequestOp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.assettype_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.context_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.url_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct AssetLoadRequestOpDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AssetLoadRequestOpDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AssetLoadRequestOpDefaultTypeInternal() {}
  union {
    AssetLoadRequestOp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AssetLoadRequestOpDefaultTypeInternal _AssetLoadRequestOp_default_instance_;
}  // namespace WorldsAdriftRebornCoreSdk
static ::_pb::Metadata file_level_metadata_AssetLoadRequestOp_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_AssetLoadRequestOp_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_AssetLoadRequestOp_2eproto = nullptr;

const uint32_t TableStruct_AssetLoadRequestOp_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _impl_.assettype_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _impl_.context_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp, _impl_.url_),
  0,
  1,
  2,
  3,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::WorldsAdriftRebornCoreSdk::_AssetLoadRequestOp_default_instance_._instance,
};

const char descriptor_table_protodef_AssetLoadRequestOp_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030AssetLoadRequestOp.proto\022\031WorldsAdrift"
  "RebornCoreSdk\"\222\001\n\022AssetLoadRequestOp\022\026\n\t"
  "AssetType\030\001 \001(\tH\000\210\001\001\022\021\n\004Name\030\002 \001(\tH\001\210\001\001\022"
  "\024\n\007Context\030\003 \001(\tH\002\210\001\001\022\020\n\003Url\030\004 \001(\tH\003\210\001\001B"
  "\014\n\n_AssetTypeB\007\n\005_NameB\n\n\010_ContextB\006\n\004_U"
  "rlb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_AssetLoadRequestOp_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_AssetLoadRequestOp_2eproto = {
    false, false, 210, descriptor_table_protodef_AssetLoadRequestOp_2eproto,
    "AssetLoadRequestOp.proto",
    &descriptor_table_AssetLoadRequestOp_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_AssetLoadRequestOp_2eproto::offsets,
    file_level_metadata_AssetLoadRequestOp_2eproto, file_level_enum_descriptors_AssetLoadRequestOp_2eproto,
    file_level_service_descriptors_AssetLoadRequestOp_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_AssetLoadRequestOp_2eproto_getter() {
  return &descriptor_table_AssetLoadRequestOp_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_AssetLoadRequestOp_2eproto(&descriptor_table_AssetLoadRequestOp_2eproto);
namespace WorldsAdriftRebornCoreSdk {

// ===================================================================

class AssetLoadRequestOp::_Internal {
 public:
  using HasBits = decltype(std::declval<AssetLoadRequestOp>()._impl_._has_bits_);
  static void set_has_assettype(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_context(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_url(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

AssetLoadRequestOp::AssetLoadRequestOp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
}
AssetLoadRequestOp::AssetLoadRequestOp(const AssetLoadRequestOp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AssetLoadRequestOp* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.assettype_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.context_){}
    , decltype(_impl_.url_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.assettype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.assettype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_assettype()) {
    _this->_impl_.assettype_.Set(from._internal_assettype(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.context_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_context()) {
    _this->_impl_.context_.Set(from._internal_context(), 
      _this->GetArenaForAllocation());
  }
  _impl_.url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_url()) {
    _this->_impl_.url_.Set(from._internal_url(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
}

inline void AssetLoadRequestOp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.assettype_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.context_){}
    , decltype(_impl_.url_){}
  };
  _impl_.assettype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.assettype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.context_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AssetLoadRequestOp::~AssetLoadRequestOp() {
  // @@protoc_insertion_point(destructor:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AssetLoadRequestOp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.assettype_.Destroy();
  _impl_.name_.Destroy();
  _impl_.context_.Destroy();
  _impl_.url_.Destroy();
}

void AssetLoadRequestOp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AssetLoadRequestOp::Clear() {
// @@protoc_insertion_point(message_clear_start:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.assettype_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.context_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.url_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AssetLoadRequestOp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string AssetType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_assettype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.AssetType"));
        } else
          goto handle_unusual;
        continue;
      // optional string Name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Name"));
        } else
          goto handle_unusual;
        continue;
      // optional string Context = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_context();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Context"));
        } else
          goto handle_unusual;
        continue;
      // optional string Url = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Url"));
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

uint8_t* AssetLoadRequestOp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string AssetType = 1;
  if (_internal_has_assettype()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_assettype().data(), static_cast<int>(this->_internal_assettype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.AssetType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_assettype(), target);
  }

  // optional string Name = 2;
  if (_internal_has_name()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional string Context = 3;
  if (_internal_has_context()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_context().data(), static_cast<int>(this->_internal_context().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Context");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_context(), target);
  }

  // optional string Url = 4;
  if (_internal_has_url()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_url().data(), static_cast<int>(this->_internal_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AssetLoadRequestOp.Url");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_url(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  return target;
}

size_t AssetLoadRequestOp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string AssetType = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_assettype());
    }

    // optional string Name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string Context = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_context());
    }

    // optional string Url = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_url());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AssetLoadRequestOp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AssetLoadRequestOp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AssetLoadRequestOp::GetClassData() const { return &_class_data_; }


void AssetLoadRequestOp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AssetLoadRequestOp*>(&to_msg);
  auto& from = static_cast<const AssetLoadRequestOp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_assettype(from._internal_assettype());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_context(from._internal_context());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_set_url(from._internal_url());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AssetLoadRequestOp::CopyFrom(const AssetLoadRequestOp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WorldsAdriftRebornCoreSdk.AssetLoadRequestOp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AssetLoadRequestOp::IsInitialized() const {
  return true;
}

void AssetLoadRequestOp::InternalSwap(AssetLoadRequestOp* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.assettype_, lhs_arena,
      &other->_impl_.assettype_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.context_, lhs_arena,
      &other->_impl_.context_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.url_, lhs_arena,
      &other->_impl_.url_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata AssetLoadRequestOp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_AssetLoadRequestOp_2eproto_getter, &descriptor_table_AssetLoadRequestOp_2eproto_once,
      file_level_metadata_AssetLoadRequestOp_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace WorldsAdriftRebornCoreSdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp*
Arena::CreateMaybeMessage< ::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WorldsAdriftRebornCoreSdk::AssetLoadRequestOp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
