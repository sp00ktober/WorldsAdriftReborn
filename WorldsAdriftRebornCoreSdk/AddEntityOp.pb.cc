// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AddEntityOp.proto

#include "AddEntityOp.pb.h"

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
PROTOBUF_CONSTEXPR AddEntityOp::AddEntityOp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.prefabname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.prefabcontext_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.entityid_)*/int64_t{0}} {}
struct AddEntityOpDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddEntityOpDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddEntityOpDefaultTypeInternal() {}
  union {
    AddEntityOp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddEntityOpDefaultTypeInternal _AddEntityOp_default_instance_;
}  // namespace WorldsAdriftRebornCoreSdk
static ::_pb::Metadata file_level_metadata_AddEntityOp_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_AddEntityOp_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_AddEntityOp_2eproto = nullptr;

const uint32_t TableStruct_AddEntityOp_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AddEntityOp, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AddEntityOp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AddEntityOp, _impl_.entityid_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AddEntityOp, _impl_.prefabname_),
  PROTOBUF_FIELD_OFFSET(::WorldsAdriftRebornCoreSdk::AddEntityOp, _impl_.prefabcontext_),
  2,
  0,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::WorldsAdriftRebornCoreSdk::AddEntityOp)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::WorldsAdriftRebornCoreSdk::_AddEntityOp_default_instance_._instance,
};

const char descriptor_table_protodef_AddEntityOp_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021AddEntityOp.proto\022\031WorldsAdriftRebornC"
  "oreSdk\"\207\001\n\013AddEntityOp\022\025\n\010EntityId\030\001 \001(\003"
  "H\000\210\001\001\022\027\n\nPrefabName\030\002 \001(\tH\001\210\001\001\022\032\n\rPrefab"
  "Context\030\003 \001(\tH\002\210\001\001B\013\n\t_EntityIdB\r\n\013_Pref"
  "abNameB\020\n\016_PrefabContextb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_AddEntityOp_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_AddEntityOp_2eproto = {
    false, false, 192, descriptor_table_protodef_AddEntityOp_2eproto,
    "AddEntityOp.proto",
    &descriptor_table_AddEntityOp_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_AddEntityOp_2eproto::offsets,
    file_level_metadata_AddEntityOp_2eproto, file_level_enum_descriptors_AddEntityOp_2eproto,
    file_level_service_descriptors_AddEntityOp_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_AddEntityOp_2eproto_getter() {
  return &descriptor_table_AddEntityOp_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_AddEntityOp_2eproto(&descriptor_table_AddEntityOp_2eproto);
namespace WorldsAdriftRebornCoreSdk {

// ===================================================================

class AddEntityOp::_Internal {
 public:
  using HasBits = decltype(std::declval<AddEntityOp>()._impl_._has_bits_);
  static void set_has_entityid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_prefabname(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_prefabcontext(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

AddEntityOp::AddEntityOp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WorldsAdriftRebornCoreSdk.AddEntityOp)
}
AddEntityOp::AddEntityOp(const AddEntityOp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddEntityOp* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.prefabname_){}
    , decltype(_impl_.prefabcontext_){}
    , decltype(_impl_.entityid_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.prefabname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.prefabname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_prefabname()) {
    _this->_impl_.prefabname_.Set(from._internal_prefabname(), 
      _this->GetArenaForAllocation());
  }
  _impl_.prefabcontext_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.prefabcontext_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_prefabcontext()) {
    _this->_impl_.prefabcontext_.Set(from._internal_prefabcontext(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.entityid_ = from._impl_.entityid_;
  // @@protoc_insertion_point(copy_constructor:WorldsAdriftRebornCoreSdk.AddEntityOp)
}

inline void AddEntityOp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.prefabname_){}
    , decltype(_impl_.prefabcontext_){}
    , decltype(_impl_.entityid_){int64_t{0}}
  };
  _impl_.prefabname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.prefabname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.prefabcontext_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.prefabcontext_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AddEntityOp::~AddEntityOp() {
  // @@protoc_insertion_point(destructor:WorldsAdriftRebornCoreSdk.AddEntityOp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddEntityOp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.prefabname_.Destroy();
  _impl_.prefabcontext_.Destroy();
}

void AddEntityOp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddEntityOp::Clear() {
// @@protoc_insertion_point(message_clear_start:WorldsAdriftRebornCoreSdk.AddEntityOp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.prefabname_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.prefabcontext_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.entityid_ = int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddEntityOp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // optional string PrefabName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_prefabname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AddEntityOp.PrefabName"));
        } else
          goto handle_unusual;
        continue;
      // optional string PrefabContext = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_prefabcontext();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "WorldsAdriftRebornCoreSdk.AddEntityOp.PrefabContext"));
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

uint8_t* AddEntityOp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WorldsAdriftRebornCoreSdk.AddEntityOp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int64 EntityId = 1;
  if (_internal_has_entityid()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_entityid(), target);
  }

  // optional string PrefabName = 2;
  if (_internal_has_prefabname()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_prefabname().data(), static_cast<int>(this->_internal_prefabname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AddEntityOp.PrefabName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_prefabname(), target);
  }

  // optional string PrefabContext = 3;
  if (_internal_has_prefabcontext()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_prefabcontext().data(), static_cast<int>(this->_internal_prefabcontext().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WorldsAdriftRebornCoreSdk.AddEntityOp.PrefabContext");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_prefabcontext(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WorldsAdriftRebornCoreSdk.AddEntityOp)
  return target;
}

size_t AddEntityOp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WorldsAdriftRebornCoreSdk.AddEntityOp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string PrefabName = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_prefabname());
    }

    // optional string PrefabContext = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_prefabcontext());
    }

    // optional int64 EntityId = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_entityid());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddEntityOp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddEntityOp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddEntityOp::GetClassData() const { return &_class_data_; }


void AddEntityOp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddEntityOp*>(&to_msg);
  auto& from = static_cast<const AddEntityOp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WorldsAdriftRebornCoreSdk.AddEntityOp)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_prefabname(from._internal_prefabname());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_prefabcontext(from._internal_prefabcontext());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.entityid_ = from._impl_.entityid_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddEntityOp::CopyFrom(const AddEntityOp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WorldsAdriftRebornCoreSdk.AddEntityOp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddEntityOp::IsInitialized() const {
  return true;
}

void AddEntityOp::InternalSwap(AddEntityOp* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.prefabname_, lhs_arena,
      &other->_impl_.prefabname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.prefabcontext_, lhs_arena,
      &other->_impl_.prefabcontext_, rhs_arena
  );
  swap(_impl_.entityid_, other->_impl_.entityid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddEntityOp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_AddEntityOp_2eproto_getter, &descriptor_table_AddEntityOp_2eproto_once,
      file_level_metadata_AddEntityOp_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace WorldsAdriftRebornCoreSdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::WorldsAdriftRebornCoreSdk::AddEntityOp*
Arena::CreateMaybeMessage< ::WorldsAdriftRebornCoreSdk::AddEntityOp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WorldsAdriftRebornCoreSdk::AddEntityOp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>