// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: blickfeld/status/temperature.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2ftemperature_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2ftemperature_2eproto

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
#include "blickfeld/options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_blickfeld_2fstatus_2ftemperature_2eproto BF_DLLEXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct BF_DLLEXPORT TableStruct_blickfeld_2fstatus_2ftemperature_2eproto {
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
extern BF_DLLEXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_blickfeld_2fstatus_2ftemperature_2eproto;
namespace blickfeld {
namespace protocol {
namespace status {
class Temperature;
struct TemperatureDefaultTypeInternal;
BF_DLLEXPORT extern TemperatureDefaultTypeInternal _Temperature_default_instance_;
}  // namespace status
}  // namespace protocol
}  // namespace blickfeld
PROTOBUF_NAMESPACE_OPEN
template<> BF_DLLEXPORT ::blickfeld::protocol::status::Temperature* Arena::CreateMaybeMessage<::blickfeld::protocol::status::Temperature>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace blickfeld {
namespace protocol {
namespace status {

enum Temperature_Sensor : int {
  Temperature_Sensor_UNKNOWN = 0,
  Temperature_Sensor_LDM = 1,
  Temperature_Sensor_ETHERNET = 2,
  Temperature_Sensor_MSB = 3,
  Temperature_Sensor_PL = 4,
  Temperature_Sensor_PS = 5,
  Temperature_Sensor_SCANNER_SMALL = 6,
  Temperature_Sensor_SCANNER_BIG = 7
};
BF_DLLEXPORT bool Temperature_Sensor_IsValid(int value);
constexpr Temperature_Sensor Temperature_Sensor_Sensor_MIN = Temperature_Sensor_UNKNOWN;
constexpr Temperature_Sensor Temperature_Sensor_Sensor_MAX = Temperature_Sensor_SCANNER_BIG;
constexpr int Temperature_Sensor_Sensor_ARRAYSIZE = Temperature_Sensor_Sensor_MAX + 1;

BF_DLLEXPORT const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Temperature_Sensor_descriptor();
template<typename T>
inline const std::string& Temperature_Sensor_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Temperature_Sensor>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Temperature_Sensor_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Temperature_Sensor_descriptor(), enum_t_value);
}
inline bool Temperature_Sensor_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Temperature_Sensor* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Temperature_Sensor>(
    Temperature_Sensor_descriptor(), name, value);
}
// ===================================================================

class BF_DLLEXPORT Temperature PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:blickfeld.protocol.status.Temperature) */ {
 public:
  inline Temperature() : Temperature(nullptr) {}
  ~Temperature() override;
  explicit constexpr Temperature(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Temperature(const Temperature& from);
  Temperature(Temperature&& from) noexcept
    : Temperature() {
    *this = ::std::move(from);
  }

  inline Temperature& operator=(const Temperature& from) {
    CopyFrom(from);
    return *this;
  }
  inline Temperature& operator=(Temperature&& from) noexcept {
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
  static const Temperature& default_instance() {
    return *internal_default_instance();
  }
  enum DataCase {
    kValue = 2,
    kFailedReason = 3,
    DATA_NOT_SET = 0,
  };

  static inline const Temperature* internal_default_instance() {
    return reinterpret_cast<const Temperature*>(
               &_Temperature_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Temperature& a, Temperature& b) {
    a.Swap(&b);
  }
  inline void Swap(Temperature* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Temperature* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Temperature* New() const final {
    return CreateMaybeMessage<Temperature>(nullptr);
  }

  Temperature* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Temperature>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Temperature& from);
  void MergeFrom(const Temperature& from);
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
  void InternalSwap(Temperature* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "blickfeld.protocol.status.Temperature";
  }
  protected:
  explicit Temperature(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Temperature_Sensor Sensor;
  static constexpr Sensor UNKNOWN =
    Temperature_Sensor_UNKNOWN;
  static constexpr Sensor LDM =
    Temperature_Sensor_LDM;
  static constexpr Sensor ETHERNET =
    Temperature_Sensor_ETHERNET;
  static constexpr Sensor MSB =
    Temperature_Sensor_MSB;
  static constexpr Sensor PL =
    Temperature_Sensor_PL;
  static constexpr Sensor PS =
    Temperature_Sensor_PS;
  static constexpr Sensor SCANNER_SMALL =
    Temperature_Sensor_SCANNER_SMALL;
  static constexpr Sensor SCANNER_BIG =
    Temperature_Sensor_SCANNER_BIG;
  static inline bool Sensor_IsValid(int value) {
    return Temperature_Sensor_IsValid(value);
  }
  static constexpr Sensor Sensor_MIN =
    Temperature_Sensor_Sensor_MIN;
  static constexpr Sensor Sensor_MAX =
    Temperature_Sensor_Sensor_MAX;
  static constexpr int Sensor_ARRAYSIZE =
    Temperature_Sensor_Sensor_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Sensor_descriptor() {
    return Temperature_Sensor_descriptor();
  }
  template<typename T>
  static inline const std::string& Sensor_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Sensor>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Sensor_Name.");
    return Temperature_Sensor_Name(enum_t_value);
  }
  static inline bool Sensor_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Sensor* value) {
    return Temperature_Sensor_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSensorFieldNumber = 1,
    kValueFieldNumber = 2,
    kFailedReasonFieldNumber = 3,
  };
  // optional .blickfeld.protocol.status.Temperature.Sensor sensor = 1;
  bool has_sensor() const;
  private:
  bool _internal_has_sensor() const;
  public:
  void clear_sensor();
  ::blickfeld::protocol::status::Temperature_Sensor sensor() const;
  void set_sensor(::blickfeld::protocol::status::Temperature_Sensor value);
  private:
  ::blickfeld::protocol::status::Temperature_Sensor _internal_sensor() const;
  void _internal_set_sensor(::blickfeld::protocol::status::Temperature_Sensor value);
  public:

  // float value = 2;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  float value() const;
  void set_value(float value);
  private:
  float _internal_value() const;
  void _internal_set_value(float value);
  public:

  // string failed_reason = 3;
  bool has_failed_reason() const;
  private:
  bool _internal_has_failed_reason() const;
  public:
  void clear_failed_reason();
  const std::string& failed_reason() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_failed_reason(ArgT0&& arg0, ArgT... args);
  std::string* mutable_failed_reason();
  std::string* release_failed_reason();
  void set_allocated_failed_reason(std::string* failed_reason);
  private:
  const std::string& _internal_failed_reason() const;
  void _internal_set_failed_reason(const std::string& value);
  std::string* _internal_mutable_failed_reason();
  public:

  void clear_data();
  DataCase data_case() const;
  // @@protoc_insertion_point(class_scope:blickfeld.protocol.status.Temperature)
 private:
  class _Internal;
  void set_has_value();
  void set_has_failed_reason();

  inline bool has_data() const;
  inline void clear_has_data();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int sensor_;
  union DataUnion {
    constexpr DataUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    float value_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr failed_reason_;
  } data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_blickfeld_2fstatus_2ftemperature_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Temperature

// optional .blickfeld.protocol.status.Temperature.Sensor sensor = 1;
inline bool Temperature::_internal_has_sensor() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Temperature::has_sensor() const {
  return _internal_has_sensor();
}
inline void Temperature::clear_sensor() {
  sensor_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::blickfeld::protocol::status::Temperature_Sensor Temperature::_internal_sensor() const {
  return static_cast< ::blickfeld::protocol::status::Temperature_Sensor >(sensor_);
}
inline ::blickfeld::protocol::status::Temperature_Sensor Temperature::sensor() const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.status.Temperature.sensor)
  return _internal_sensor();
}
inline void Temperature::_internal_set_sensor(::blickfeld::protocol::status::Temperature_Sensor value) {
  assert(::blickfeld::protocol::status::Temperature_Sensor_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  sensor_ = value;
}
inline void Temperature::set_sensor(::blickfeld::protocol::status::Temperature_Sensor value) {
  _internal_set_sensor(value);
  // @@protoc_insertion_point(field_set:blickfeld.protocol.status.Temperature.sensor)
}

// float value = 2;
inline bool Temperature::_internal_has_value() const {
  return data_case() == kValue;
}
inline bool Temperature::has_value() const {
  return _internal_has_value();
}
inline void Temperature::set_has_value() {
  _oneof_case_[0] = kValue;
}
inline void Temperature::clear_value() {
  if (_internal_has_value()) {
    data_.value_ = 0;
    clear_has_data();
  }
}
inline float Temperature::_internal_value() const {
  if (_internal_has_value()) {
    return data_.value_;
  }
  return 0;
}
inline void Temperature::_internal_set_value(float value) {
  if (!_internal_has_value()) {
    clear_data();
    set_has_value();
  }
  data_.value_ = value;
}
inline float Temperature::value() const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.status.Temperature.value)
  return _internal_value();
}
inline void Temperature::set_value(float value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:blickfeld.protocol.status.Temperature.value)
}

// string failed_reason = 3;
inline bool Temperature::_internal_has_failed_reason() const {
  return data_case() == kFailedReason;
}
inline bool Temperature::has_failed_reason() const {
  return _internal_has_failed_reason();
}
inline void Temperature::set_has_failed_reason() {
  _oneof_case_[0] = kFailedReason;
}
inline void Temperature::clear_failed_reason() {
  if (_internal_has_failed_reason()) {
    data_.failed_reason_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
    clear_has_data();
  }
}
inline const std::string& Temperature::failed_reason() const {
  // @@protoc_insertion_point(field_get:blickfeld.protocol.status.Temperature.failed_reason)
  return _internal_failed_reason();
}
template <typename ArgT0, typename... ArgT>
inline void Temperature::set_failed_reason(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_failed_reason()) {
    clear_data();
    set_has_failed_reason();
    data_.failed_reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  data_.failed_reason_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:blickfeld.protocol.status.Temperature.failed_reason)
}
inline std::string* Temperature::mutable_failed_reason() {
  // @@protoc_insertion_point(field_mutable:blickfeld.protocol.status.Temperature.failed_reason)
  return _internal_mutable_failed_reason();
}
inline const std::string& Temperature::_internal_failed_reason() const {
  if (_internal_has_failed_reason()) {
    return data_.failed_reason_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Temperature::_internal_set_failed_reason(const std::string& value) {
  if (!_internal_has_failed_reason()) {
    clear_data();
    set_has_failed_reason();
    data_.failed_reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  data_.failed_reason_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline std::string* Temperature::_internal_mutable_failed_reason() {
  if (!_internal_has_failed_reason()) {
    clear_data();
    set_has_failed_reason();
    data_.failed_reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return data_.failed_reason_.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Temperature::release_failed_reason() {
  // @@protoc_insertion_point(field_release:blickfeld.protocol.status.Temperature.failed_reason)
  if (_internal_has_failed_reason()) {
    clear_has_data();
    return data_.failed_reason_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  } else {
    return nullptr;
  }
}
inline void Temperature::set_allocated_failed_reason(std::string* failed_reason) {
  if (has_data()) {
    clear_data();
  }
  if (failed_reason != nullptr) {
    set_has_failed_reason();
    data_.failed_reason_.UnsafeSetDefault(failed_reason);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
    if (arena != nullptr) {
      arena->Own(failed_reason);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:blickfeld.protocol.status.Temperature.failed_reason)
}

inline bool Temperature::has_data() const {
  return data_case() != DATA_NOT_SET;
}
inline void Temperature::clear_has_data() {
  _oneof_case_[0] = DATA_NOT_SET;
}
inline Temperature::DataCase Temperature::data_case() const {
  return Temperature::DataCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace status
}  // namespace protocol
}  // namespace blickfeld

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::blickfeld::protocol::status::Temperature_Sensor> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::blickfeld::protocol::status::Temperature_Sensor>() {
  return ::blickfeld::protocol::status::Temperature_Sensor_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_blickfeld_2fstatus_2ftemperature_2eproto