// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: versionfile.proto

#include "versionfile.pb.h"

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

namespace vern {
PROTOBUF_CONSTEXPR verfile::verfile(
    ::_pbi::ConstantInitialized)
  : vertxt_()
  , vertime_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , version_(0)
  , vercount_(0){}
struct verfileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR verfileDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~verfileDefaultTypeInternal() {}
  union {
    verfile _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 verfileDefaultTypeInternal _verfile_default_instance_;
PROTOBUF_CONSTEXPR verdata::verdata(
    ::_pbi::ConstantInitialized)
  : verlist_()
  , vername_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , currentversion_(0){}
struct verdataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR verdataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~verdataDefaultTypeInternal() {}
  union {
    verdata _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 verdataDefaultTypeInternal _verdata_default_instance_;
}  // namespace vern
static ::_pb::Metadata file_level_metadata_versionfile_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_versionfile_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_versionfile_2eproto = nullptr;

const uint32_t TableStruct_versionfile_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::vern::verfile, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::vern::verfile, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vern::verfile, version_),
  PROTOBUF_FIELD_OFFSET(::vern::verfile, vercount_),
  PROTOBUF_FIELD_OFFSET(::vern::verfile, vertime_),
  PROTOBUF_FIELD_OFFSET(::vern::verfile, vertxt_),
  1,
  2,
  0,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::vern::verdata, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::vern::verdata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vern::verdata, verlist_),
  PROTOBUF_FIELD_OFFSET(::vern::verdata, vername_),
  PROTOBUF_FIELD_OFFSET(::vern::verdata, currentversion_),
  ~0u,
  0,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::vern::verfile)},
  { 14, 23, -1, sizeof(::vern::verdata)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::vern::_verfile_default_instance_._instance,
  &::vern::_verdata_default_instance_._instance,
};

const char descriptor_table_protodef_versionfile_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021versionfile.proto\022\004vern\"\201\001\n\007verfile\022\024\n"
  "\007version\030\002 \001(\005H\000\210\001\001\022\025\n\010vercount\030\003 \001(\005H\001\210"
  "\001\001\022\024\n\007vertime\030\004 \001(\tH\002\210\001\001\022\016\n\006vertxt\030\005 \003(\t"
  "B\n\n\010_versionB\013\n\t_vercountB\n\n\010_vertime\"{\n"
  "\007verdata\022\036\n\007verlist\030\001 \003(\0132\r.vern.verfile"
  "\022\024\n\007vername\030\003 \001(\tH\000\210\001\001\022\033\n\016currentversion"
  "\030\002 \001(\005H\001\210\001\001B\n\n\010_vernameB\021\n\017_currentversi"
  "onb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_versionfile_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_versionfile_2eproto = {
    false, false, 290, descriptor_table_protodef_versionfile_2eproto,
    "versionfile.proto",
    &descriptor_table_versionfile_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_versionfile_2eproto::offsets,
    file_level_metadata_versionfile_2eproto, file_level_enum_descriptors_versionfile_2eproto,
    file_level_service_descriptors_versionfile_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_versionfile_2eproto_getter() {
  return &descriptor_table_versionfile_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_versionfile_2eproto(&descriptor_table_versionfile_2eproto);
namespace vern {

// ===================================================================

class verfile::_Internal {
 public:
  using HasBits = decltype(std::declval<verfile>()._has_bits_);
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_vercount(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_vertime(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

verfile::verfile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  vertxt_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:vern.verfile)
}
verfile::verfile(const verfile& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      vertxt_(from.vertxt_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  vertime_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    vertime_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_vertime()) {
    vertime_.Set(from._internal_vertime(), 
      GetArenaForAllocation());
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&vercount_) -
    reinterpret_cast<char*>(&version_)) + sizeof(vercount_));
  // @@protoc_insertion_point(copy_constructor:vern.verfile)
}

inline void verfile::SharedCtor() {
vertime_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  vertime_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&version_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&vercount_) -
    reinterpret_cast<char*>(&version_)) + sizeof(vercount_));
}

verfile::~verfile() {
  // @@protoc_insertion_point(destructor:vern.verfile)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void verfile::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  vertime_.Destroy();
}

void verfile::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void verfile::Clear() {
// @@protoc_insertion_point(message_clear_start:vern.verfile)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vertxt_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    vertime_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&vercount_) -
        reinterpret_cast<char*>(&version_)) + sizeof(vercount_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* verfile::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_version(&has_bits);
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 vercount = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_vercount(&has_bits);
          vercount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string vertime = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_vertime();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "vern.verfile.vertime"));
        } else
          goto handle_unusual;
        continue;
      // repeated string vertxt = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_vertxt();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "vern.verfile.vertxt"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* verfile::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vern.verfile)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 version = 2;
  if (_internal_has_version()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_version(), target);
  }

  // optional int32 vercount = 3;
  if (_internal_has_vercount()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_vercount(), target);
  }

  // optional string vertime = 4;
  if (_internal_has_vertime()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_vertime().data(), static_cast<int>(this->_internal_vertime().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vern.verfile.vertime");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_vertime(), target);
  }

  // repeated string vertxt = 5;
  for (int i = 0, n = this->_internal_vertxt_size(); i < n; i++) {
    const auto& s = this->_internal_vertxt(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vern.verfile.vertxt");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vern.verfile)
  return target;
}

size_t verfile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vern.verfile)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string vertxt = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(vertxt_.size());
  for (int i = 0, n = vertxt_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      vertxt_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string vertime = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_vertime());
    }

    // optional int32 version = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_version());
    }

    // optional int32 vercount = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_vercount());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData verfile::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    verfile::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*verfile::GetClassData() const { return &_class_data_; }

void verfile::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<verfile *>(to)->MergeFrom(
      static_cast<const verfile &>(from));
}


void verfile::MergeFrom(const verfile& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vern.verfile)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  vertxt_.MergeFrom(from.vertxt_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_vertime(from._internal_vertime());
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      vercount_ = from.vercount_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void verfile::CopyFrom(const verfile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vern.verfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool verfile::IsInitialized() const {
  return true;
}

void verfile::InternalSwap(verfile* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  vertxt_.InternalSwap(&other->vertxt_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &vertime_, lhs_arena,
      &other->vertime_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(verfile, vercount_)
      + sizeof(verfile::vercount_)
      - PROTOBUF_FIELD_OFFSET(verfile, version_)>(
          reinterpret_cast<char*>(&version_),
          reinterpret_cast<char*>(&other->version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata verfile::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_versionfile_2eproto_getter, &descriptor_table_versionfile_2eproto_once,
      file_level_metadata_versionfile_2eproto[0]);
}

// ===================================================================

class verdata::_Internal {
 public:
  using HasBits = decltype(std::declval<verdata>()._has_bits_);
  static void set_has_vername(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_currentversion(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

verdata::verdata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  verlist_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:vern.verdata)
}
verdata::verdata(const verdata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      verlist_(from.verlist_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  vername_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    vername_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_vername()) {
    vername_.Set(from._internal_vername(), 
      GetArenaForAllocation());
  }
  currentversion_ = from.currentversion_;
  // @@protoc_insertion_point(copy_constructor:vern.verdata)
}

inline void verdata::SharedCtor() {
vername_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  vername_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
currentversion_ = 0;
}

verdata::~verdata() {
  // @@protoc_insertion_point(destructor:vern.verdata)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void verdata::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  vername_.Destroy();
}

void verdata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void verdata::Clear() {
// @@protoc_insertion_point(message_clear_start:vern.verdata)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  verlist_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    vername_.ClearNonDefaultToEmpty();
  }
  currentversion_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* verdata::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .vern.verfile verlist = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_verlist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional int32 currentversion = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_currentversion(&has_bits);
          currentversion_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string vername = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_vername();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "vern.verdata.vername"));
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* verdata::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vern.verdata)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .vern.verfile verlist = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_verlist_size()); i < n; i++) {
    const auto& repfield = this->_internal_verlist(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional int32 currentversion = 2;
  if (_internal_has_currentversion()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_currentversion(), target);
  }

  // optional string vername = 3;
  if (_internal_has_vername()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_vername().data(), static_cast<int>(this->_internal_vername().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vern.verdata.vername");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_vername(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vern.verdata)
  return target;
}

size_t verdata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vern.verdata)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .vern.verfile verlist = 1;
  total_size += 1UL * this->_internal_verlist_size();
  for (const auto& msg : this->verlist_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string vername = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_vername());
    }

    // optional int32 currentversion = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_currentversion());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData verdata::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    verdata::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*verdata::GetClassData() const { return &_class_data_; }

void verdata::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<verdata *>(to)->MergeFrom(
      static_cast<const verdata &>(from));
}


void verdata::MergeFrom(const verdata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vern.verdata)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  verlist_.MergeFrom(from.verlist_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_vername(from._internal_vername());
    }
    if (cached_has_bits & 0x00000002u) {
      currentversion_ = from.currentversion_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void verdata::CopyFrom(const verdata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vern.verdata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool verdata::IsInitialized() const {
  return true;
}

void verdata::InternalSwap(verdata* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  verlist_.InternalSwap(&other->verlist_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &vername_, lhs_arena,
      &other->vername_, rhs_arena
  );
  swap(currentversion_, other->currentversion_);
}

::PROTOBUF_NAMESPACE_ID::Metadata verdata::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_versionfile_2eproto_getter, &descriptor_table_versionfile_2eproto_once,
      file_level_metadata_versionfile_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace vern
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::vern::verfile*
Arena::CreateMaybeMessage< ::vern::verfile >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vern::verfile >(arena);
}
template<> PROTOBUF_NOINLINE ::vern::verdata*
Arena::CreateMaybeMessage< ::vern::verdata >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vern::verdata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>