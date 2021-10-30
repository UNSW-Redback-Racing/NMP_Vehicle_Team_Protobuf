// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef PROTOBUF_INCLUDED_data_2eproto
#define PROTOBUF_INCLUDED_data_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_data_2eproto 

namespace protobuf_data_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_data_2eproto
class DataList;
class DataListDefaultTypeInternal;
extern DataListDefaultTypeInternal _DataList_default_instance_;
class carData;
class carDataDefaultTypeInternal;
extern carDataDefaultTypeInternal _carData_default_instance_;
namespace google {
namespace protobuf {
template<> ::DataList* Arena::CreateMaybeMessage<::DataList>(Arena*);
template<> ::carData* Arena::CreateMaybeMessage<::carData>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class carData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:carData) */ {
 public:
  carData();
  virtual ~carData();

  carData(const carData& from);

  inline carData& operator=(const carData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  carData(carData&& from) noexcept
    : carData() {
    *this = ::std::move(from);
  }

  inline carData& operator=(carData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const carData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const carData* internal_default_instance() {
    return reinterpret_cast<const carData*>(
               &_carData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(carData* other);
  friend void swap(carData& a, carData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline carData* New() const final {
    return CreateMaybeMessage<carData>(NULL);
  }

  carData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<carData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const carData& from);
  void MergeFrom(const carData& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(carData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 channel = 1;
  void clear_channel();
  static const int kChannelFieldNumber = 1;
  ::google::protobuf::int32 channel() const;
  void set_channel(::google::protobuf::int32 value);

  // float value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  float value() const;
  void set_value(float value);

  // float time = 3;
  void clear_time();
  static const int kTimeFieldNumber = 3;
  float time() const;
  void set_time(float value);

  // @@protoc_insertion_point(class_scope:carData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 channel_;
  float value_;
  float time_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_data_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DataList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DataList) */ {
 public:
  DataList();
  virtual ~DataList();

  DataList(const DataList& from);

  inline DataList& operator=(const DataList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DataList(DataList&& from) noexcept
    : DataList() {
    *this = ::std::move(from);
  }

  inline DataList& operator=(DataList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DataList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DataList* internal_default_instance() {
    return reinterpret_cast<const DataList*>(
               &_DataList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DataList* other);
  friend void swap(DataList& a, DataList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DataList* New() const final {
    return CreateMaybeMessage<DataList>(NULL);
  }

  DataList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DataList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DataList& from);
  void MergeFrom(const DataList& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .carData lap = 1;
  int lap_size() const;
  void clear_lap();
  static const int kLapFieldNumber = 1;
  ::carData* mutable_lap(int index);
  ::google::protobuf::RepeatedPtrField< ::carData >*
      mutable_lap();
  const ::carData& lap(int index) const;
  ::carData* add_lap();
  const ::google::protobuf::RepeatedPtrField< ::carData >&
      lap() const;

  // @@protoc_insertion_point(class_scope:DataList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::carData > lap_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_data_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// carData

// int32 channel = 1;
inline void carData::clear_channel() {
  channel_ = 0;
}
inline ::google::protobuf::int32 carData::channel() const {
  // @@protoc_insertion_point(field_get:carData.channel)
  return channel_;
}
inline void carData::set_channel(::google::protobuf::int32 value) {
  
  channel_ = value;
  // @@protoc_insertion_point(field_set:carData.channel)
}

// float value = 2;
inline void carData::clear_value() {
  value_ = 0;
}
inline float carData::value() const {
  // @@protoc_insertion_point(field_get:carData.value)
  return value_;
}
inline void carData::set_value(float value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:carData.value)
}

// float time = 3;
inline void carData::clear_time() {
  time_ = 0;
}
inline float carData::time() const {
  // @@protoc_insertion_point(field_get:carData.time)
  return time_;
}
inline void carData::set_time(float value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:carData.time)
}

// -------------------------------------------------------------------

// DataList

// repeated .carData lap = 1;
inline int DataList::lap_size() const {
  return lap_.size();
}
inline void DataList::clear_lap() {
  lap_.Clear();
}
inline ::carData* DataList::mutable_lap(int index) {
  // @@protoc_insertion_point(field_mutable:DataList.lap)
  return lap_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::carData >*
DataList::mutable_lap() {
  // @@protoc_insertion_point(field_mutable_list:DataList.lap)
  return &lap_;
}
inline const ::carData& DataList::lap(int index) const {
  // @@protoc_insertion_point(field_get:DataList.lap)
  return lap_.Get(index);
}
inline ::carData* DataList::add_lap() {
  // @@protoc_insertion_point(field_add:DataList.lap)
  return lap_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::carData >&
DataList::lap() const {
  // @@protoc_insertion_point(field_list:DataList.lap)
  return lap_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_data_2eproto
