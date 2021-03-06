// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: blickfeld/status/imu.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2fimu_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2fimu_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "blickfeld/options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_blickfeld_2fstatus_2fimu_2eproto BF_DLLEXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct BF_DLLEXPORT TableStruct_blickfeld_2fstatus_2fimu_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern BF_DLLEXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_blickfeld_2fstatus_2fimu_2eproto;
namespace blickfeld {
namespace protocol {
namespace status {
class IMU;
struct IMUDefaultTypeInternal;
BF_DLLEXPORT extern IMUDefaultTypeInternal _IMU_default_instance_;
class IMU_StaticState;
struct IMU_StaticStateDefaultTypeInternal;
BF_DLLEXPORT extern IMU_StaticStateDefaultTypeInternal _IMU_StaticState_default_instance_;
}  // namespace status
}  // namespace protocol
}  // namespace blickfeld
PROTOBUF_NAMESPACE_OPEN
template<> BF_DLLEXPORT ::blickfeld::protocol::status::IMU* Arena::CreateMaybeMessage<::blickfeld::protocol::status::IMU>(Arena*);
template<> BF_DLLEXPORT ::blickfeld::protocol::status::IMU_StaticState* Arena::CreateMaybeMessage<::blickfeld::protocol::status::IMU_StaticState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace blickfeld {
namespace protocol {
namespace status {

// ===================================================================

class BF_DLLEXPORT IMU_StaticState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:blickfeld.protocol.status.IMU.StaticState) */ {
 public:
  inline IMU_StaticState() : IMU_StaticState(nullptr) {}
  ~IMU_StaticState() override;
  explicit constexpr IMU_StaticState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMU_StaticState(const IMU_StaticState& from);
  IMU_StaticState(IMU_StaticState&& from) noexcept
    : IMU_StaticState() {
    *this = ::std::move(from);
  }

  inline IMU_StaticState& operator=(const IMU_StaticState& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMU_StaticState& operator=(IMU_StaticState&& from) noexcept {
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
  static const IMU_StaticState& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMU_StaticState* internal_default_instance() {
    return reinterpret_cast<const IMU_StaticState*>(
               &_IMU_StaticState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IMU_StaticState& a, IMU_StaticState& b) {
    a.Swap(&b);
  }
  inline void Swap(IMU_StaticState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMU_StaticState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline IMU_StaticState* New() const final {
    return CreateMaybeMessage<IMU_StaticState>(nullptr);
  }

  IMU_StaticState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<IMU_StaticState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const IMU_StaticState& from);
  void MergeFrom(const IMU_StaticState& from);
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
  void InternalSwap(IMU_StaticState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "blickfeld.protocol.status.IMU.StaticState";
  }
  protected:
  explicit IMU_StaticState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccelerationFieldNumber = 1,
  };
  // repeated float acceleration = 1 [(.blickfeld.protocol.length) = 3];
  int acceleration_size() const;
  private:
  int _internal_acceleration_size() const;
  public:
  void clear_acceleration();
  private:
  float _internal_acceleration(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_acceleration() const;
  void _internal_add_acceleration(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_acceleration();
  public:
  float acceleration(int index) const;
  void set_acceleration(int index, float value);
  void add_acceleration(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      acceleration() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_acceleration();

  // @@protoc_insertion_point(class_scope:blickfeld.protocol.status.IMU.StaticState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > acceleration_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_blickfeld_2fstatus_2fimu_2eproto;
};
// -------------------------------------------------------------------

class BF_DLLEXPORT IMU PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:blickfeld.protocol.status.IMU) */ {
 public:
  inline IMU() : IMU(nullptr) {}
  ~IMU() override;
  explicit constexpr IMU(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMU(const IMU& from);
  IMU(IMU&& from) noexcept
    : IMU() {
    *this = ::std::move(from);
  }

  inline IMU& operator=(const IMU& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMU& operator=(IMU&& from) noexcept {
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
  static const IMU& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMU* internal_default_instance() {
    return reinterpret_cast<const IMU*>(
               &_IMU_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(IMU& a, IMU& b) {
    a.Swap(&b);
  }
  inline void Swap(IMU* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMU* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline IMU* New() const final {
    return CreateMaybeMessage<IMU>(nullptr);
  }

  IMU* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<IMU>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const IMU& from);
  void MergeFrom(const IMU& from);
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
  void InternalSwap(IMU* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "blickfeld.protocol.status.IMU";
  }
  protected:
  explicit IMU(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef IMU_StaticState StaticState;

  // accessors -------------------------------------------------------

  enum : int {
    kStaticStateFieldNumber = 1,
  };
  // optional .blickfeld.protocol.status.IMU.StaticState static_state = 1;
  bool has_static_state() const;
  private:
  bool _internal_has_static_state() const;
  public:
  void clear_static_state();
  const ::blickfeld::protocol::status::IMU_StaticState& static_state() const;
  ::blickfeld::protocol::status::IMU_StaticState* release_static_state();
  ::blickfeld::protocol::status::IMU_StaticState* mutable_static_state();
  void set_allocated_static_state(::blickfeld::protocol::status::IMU_StaticState* static_state);
  private:
  const ::blickfeld::protocol::status::IMU_StaticState& _internal_static_state() const;
  ::blickfeld::protocol::status::IMU_StaticState* _internal_mutable_static_state();
  public:
  void unsafe_arena_set_allocated_static_state(
      ::blickfeld::protocol::status::IMU_StaticState* static_state);
  ::blickfeld::protocol::status::IMU_StaticState* unsafe_arena_release_static_state();

  // @@protoc_insertion_point(class_scope:blickfeld.protocol.status.IMU)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::blickfeld::protocol::status::IMU_StaticState* static_state_;
  friend struct ::TableStruct_blickfeld_2fstatus_2fimu_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IMU_StaticState

// repeated float acceleration = 1 [(.blickfeld.protocol.length) = 3];
inline int IMU_StaticState::_internal_acceleration_size() const {
  return acceleration_.size();
}
inline int IMU_StaticState::acceleration_size() const {
  return _internal_acceleration_size();
}
inline void IMU_StaticState::clear_acceleration() {
  acceleration_.Clear();
}
inline float IMU_StaticState::_internal_acceleration(int index) const {
  return acceleration_.Get(index);
}
inline float IMU_StaticState::acceleration(int index) const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.status.IMU.StaticState.acceleration)
  return _internal_acceleration(index);
}
inline void IMU_StaticState::set_acceleration(int index, float value) {
  acceleration_.Set(index, value);
  // @@protoc_insertion_point(field_set:blickfeld.protocol.status.IMU.StaticState.acceleration)
}
inline void IMU_StaticState::_internal_add_acceleration(float value) {
  acceleration_.Add(value);
}
inline void IMU_StaticState::add_acceleration(float value) {
  _internal_add_acceleration(value);
  // @@protoc_insertion_point(field_add:blickfeld.protocol.status.IMU.StaticState.acceleration)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
IMU_StaticState::_internal_acceleration() const {
  return acceleration_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
IMU_StaticState::acceleration() const {
  // @@protoc_insertion_point(field_list:blickfeld.protocol.status.IMU.StaticState.acceleration)
  return _internal_acceleration();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
IMU_StaticState::_internal_mutable_acceleration() {
  return &acceleration_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
IMU_StaticState::mutable_acceleration() {
  // @@protoc_insertion_point(field_mutable_list:blickfeld.protocol.status.IMU.StaticState.acceleration)
  return _internal_mutable_acceleration();
}

// -------------------------------------------------------------------

// IMU

// optional .blickfeld.protocol.status.IMU.StaticState static_state = 1;
inline bool IMU::_internal_has_static_state() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || static_state_ != nullptr);
  return value;
}
inline bool IMU::has_static_state() const {
  return _internal_has_static_state();
}
inline void IMU::clear_static_state() {
  if (static_state_ != nullptr) static_state_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::blickfeld::protocol::status::IMU_StaticState& IMU::_internal_static_state() const {
  const ::blickfeld::protocol::status::IMU_StaticState* p = static_state_;
  return p != nullptr ? *p : reinterpret_cast<const ::blickfeld::protocol::status::IMU_StaticState&>(
      ::blickfeld::protocol::status::_IMU_StaticState_default_instance_);
}
inline const ::blickfeld::protocol::status::IMU_StaticState& IMU::static_state() const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.status.IMU.static_state)
  return _internal_static_state();
}
inline void IMU::unsafe_arena_set_allocated_static_state(
    ::blickfeld::protocol::status::IMU_StaticState* static_state) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(static_state_);
  }
  static_state_ = static_state;
  if (static_state) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:blickfeld.protocol.status.IMU.static_state)
}
inline ::blickfeld::protocol::status::IMU_StaticState* IMU::release_static_state() {
  _has_bits_[0] &= ~0x00000001u;
  ::blickfeld::protocol::status::IMU_StaticState* temp = static_state_;
  static_state_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::blickfeld::protocol::status::IMU_StaticState* IMU::unsafe_arena_release_static_state() {
  // @@protoc_insertion_point(field_release:blickfeld.protocol.status.IMU.static_state)
  _has_bits_[0] &= ~0x00000001u;
  ::blickfeld::protocol::status::IMU_StaticState* temp = static_state_;
  static_state_ = nullptr;
  return temp;
}
inline ::blickfeld::protocol::status::IMU_StaticState* IMU::_internal_mutable_static_state() {
  _has_bits_[0] |= 0x00000001u;
  if (static_state_ == nullptr) {
    auto* p = CreateMaybeMessage<::blickfeld::protocol::status::IMU_StaticState>(GetArena());
    static_state_ = p;
  }
  return static_state_;
}
inline ::blickfeld::protocol::status::IMU_StaticState* IMU::mutable_static_state() {
  // @@protoc_insertion_point(field_mutable:blickfeld.protocol.status.IMU.static_state)
  return _internal_mutable_static_state();
}
inline void IMU::set_allocated_static_state(::blickfeld::protocol::status::IMU_StaticState* static_state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete static_state_;
  }
  if (static_state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(static_state);
    if (message_arena != submessage_arena) {
      static_state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, static_state, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  static_state_ = static_state;
  // @@protoc_insertion_point(field_set_allocated:blickfeld.protocol.status.IMU.static_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace status
}  // namespace protocol
}  // namespace blickfeld

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2fimu_2eproto
