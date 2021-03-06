// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: blickfeld/config/generate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fconfig_2fgenerate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fconfig_2fgenerate_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_blickfeld_2fconfig_2fgenerate_2eproto BF_DLLEXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct BF_DLLEXPORT TableStruct_blickfeld_2fconfig_2fgenerate_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern BF_DLLEXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_blickfeld_2fconfig_2fgenerate_2eproto;
namespace blickfeld {
namespace protocol {
namespace config {
class Generate;
struct GenerateDefaultTypeInternal;
BF_DLLEXPORT extern GenerateDefaultTypeInternal _Generate_default_instance_;
}  // namespace config
}  // namespace protocol
}  // namespace blickfeld
PROTOBUF_NAMESPACE_OPEN
template<> BF_DLLEXPORT ::blickfeld::protocol::config::Generate* Arena::CreateMaybeMessage<::blickfeld::protocol::config::Generate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace blickfeld {
namespace protocol {
namespace config {

enum Generate_Targets : int {
  Generate_Targets_DEFAULT = 0,
  Generate_Targets_PROTO_HASH = 1,
  Generate_Targets_MATLAB_BUS = 2,
  Generate_Targets_CSTRUCT = 3
};
BF_DLLEXPORT bool Generate_Targets_IsValid(int value);
constexpr Generate_Targets Generate_Targets_Targets_MIN = Generate_Targets_DEFAULT;
constexpr Generate_Targets Generate_Targets_Targets_MAX = Generate_Targets_CSTRUCT;
constexpr int Generate_Targets_Targets_ARRAYSIZE = Generate_Targets_Targets_MAX + 1;

BF_DLLEXPORT const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Generate_Targets_descriptor();
template<typename T>
inline const std::string& Generate_Targets_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Generate_Targets>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Generate_Targets_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Generate_Targets_descriptor(), enum_t_value);
}
inline bool Generate_Targets_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Generate_Targets* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Generate_Targets>(
    Generate_Targets_descriptor(), name, value);
}
// ===================================================================

class BF_DLLEXPORT Generate PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:blickfeld.protocol.config.Generate) */ {
 public:
  inline Generate() : Generate(nullptr) {}
  ~Generate() override;
  explicit constexpr Generate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Generate(const Generate& from);
  Generate(Generate&& from) noexcept
    : Generate() {
    *this = ::std::move(from);
  }

  inline Generate& operator=(const Generate& from) {
    CopyFrom(from);
    return *this;
  }
  inline Generate& operator=(Generate&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Generate& default_instance() {
    return *internal_default_instance();
  }
  static inline const Generate* internal_default_instance() {
    return reinterpret_cast<const Generate*>(
               &_Generate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Generate& a, Generate& b) {
    a.Swap(&b);
  }
  inline void Swap(Generate* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Generate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Generate* New() const final {
    return CreateMaybeMessage<Generate>(nullptr);
  }

  Generate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Generate>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Generate& from);
  void MergeFrom(const Generate& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Generate* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "blickfeld.protocol.config.Generate";
  }
  protected:
  explicit Generate(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Generate_Targets Targets;
  static constexpr Targets DEFAULT =
    Generate_Targets_DEFAULT;
  static constexpr Targets PROTO_HASH =
    Generate_Targets_PROTO_HASH;
  static constexpr Targets MATLAB_BUS =
    Generate_Targets_MATLAB_BUS;
  static constexpr Targets CSTRUCT =
    Generate_Targets_CSTRUCT;
  static inline bool Targets_IsValid(int value) {
    return Generate_Targets_IsValid(value);
  }
  static constexpr Targets Targets_MIN =
    Generate_Targets_Targets_MIN;
  static constexpr Targets Targets_MAX =
    Generate_Targets_Targets_MAX;
  static constexpr int Targets_ARRAYSIZE =
    Generate_Targets_Targets_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Targets_descriptor() {
    return Generate_Targets_descriptor();
  }
  template<typename T>
  static inline const std::string& Targets_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Targets>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Targets_Name.");
    return Generate_Targets_Name(enum_t_value);
  }
  static inline bool Targets_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Targets* value) {
    return Generate_Targets_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTargetsFieldNumber = 1,
  };
  // repeated .blickfeld.protocol.config.Generate.Targets targets = 1;
  int targets_size() const;
  private:
  int _internal_targets_size() const;
  public:
  void clear_targets();
  private:
  ::blickfeld::protocol::config::Generate_Targets _internal_targets(int index) const;
  void _internal_add_targets(::blickfeld::protocol::config::Generate_Targets value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_targets();
  public:
  ::blickfeld::protocol::config::Generate_Targets targets(int index) const;
  void set_targets(int index, ::blickfeld::protocol::config::Generate_Targets value);
  void add_targets(::blickfeld::protocol::config::Generate_Targets value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& targets() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_targets();

  // @@protoc_insertion_point(class_scope:blickfeld.protocol.config.Generate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> targets_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_blickfeld_2fconfig_2fgenerate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Generate

// repeated .blickfeld.protocol.config.Generate.Targets targets = 1;
inline int Generate::_internal_targets_size() const {
  return targets_.size();
}
inline int Generate::targets_size() const {
  return _internal_targets_size();
}
inline void Generate::clear_targets() {
  targets_.Clear();
}
inline ::blickfeld::protocol::config::Generate_Targets Generate::_internal_targets(int index) const {
  return static_cast< ::blickfeld::protocol::config::Generate_Targets >(targets_.Get(index));
}
inline ::blickfeld::protocol::config::Generate_Targets Generate::targets(int index) const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.config.Generate.targets)
  return _internal_targets(index);
}
inline void Generate::set_targets(int index, ::blickfeld::protocol::config::Generate_Targets value) {
  assert(::blickfeld::protocol::config::Generate_Targets_IsValid(value));
  targets_.Set(index, value);
  // @@protoc_insertion_point(field_set:blickfeld.protocol.config.Generate.targets)
}
inline void Generate::_internal_add_targets(::blickfeld::protocol::config::Generate_Targets value) {
  assert(::blickfeld::protocol::config::Generate_Targets_IsValid(value));
  targets_.Add(value);
}
inline void Generate::add_targets(::blickfeld::protocol::config::Generate_Targets value) {
  // @@protoc_insertion_point(field_add:blickfeld.protocol.config.Generate.targets)
  _internal_add_targets(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
Generate::targets() const {
  // @@protoc_insertion_point(field_list:blickfeld.protocol.config.Generate.targets)
  return targets_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
Generate::_internal_mutable_targets() {
  return &targets_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
Generate::mutable_targets() {
  // @@protoc_insertion_point(field_mutable_list:blickfeld.protocol.config.Generate.targets)
  return _internal_mutable_targets();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace config
}  // namespace protocol
}  // namespace blickfeld

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::blickfeld::protocol::config::Generate_Targets> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::blickfeld::protocol::config::Generate_Targets>() {
  return ::blickfeld::protocol::config::Generate_Targets_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fconfig_2fgenerate_2eproto
