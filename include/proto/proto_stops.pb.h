// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_stops.proto

#ifndef PROTOBUF_INCLUDED_proto_5fstops_2eproto
#define PROTOBUF_INCLUDED_proto_5fstops_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto_stop.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_5fstops_2eproto 

namespace protobuf_proto_5fstops_2eproto {
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
}  // namespace protobuf_proto_5fstops_2eproto
class ProtoStops;
class ProtoStopsDefaultTypeInternal;
extern ProtoStopsDefaultTypeInternal _ProtoStops_default_instance_;
class ProtoStops_IndexesByIdEntry_DoNotUse;
class ProtoStops_IndexesByIdEntry_DoNotUseDefaultTypeInternal;
extern ProtoStops_IndexesByIdEntry_DoNotUseDefaultTypeInternal _ProtoStops_IndexesByIdEntry_DoNotUse_default_instance_;
namespace google {
namespace protobuf {
template<> ::ProtoStops* Arena::CreateMaybeMessage<::ProtoStops>(Arena*);
template<> ::ProtoStops_IndexesByIdEntry_DoNotUse* Arena::CreateMaybeMessage<::ProtoStops_IndexesByIdEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ProtoStops_IndexesByIdEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<ProtoStops_IndexesByIdEntry_DoNotUse, 
    ::google::protobuf::int64, ::google::protobuf::int64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<ProtoStops_IndexesByIdEntry_DoNotUse, 
    ::google::protobuf::int64, ::google::protobuf::int64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    0 > SuperType;
  ProtoStops_IndexesByIdEntry_DoNotUse();
  ProtoStops_IndexesByIdEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const ProtoStops_IndexesByIdEntry_DoNotUse& other);
  static const ProtoStops_IndexesByIdEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const ProtoStops_IndexesByIdEntry_DoNotUse*>(&_ProtoStops_IndexesByIdEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class ProtoStops : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoStops) */ {
 public:
  ProtoStops();
  virtual ~ProtoStops();

  ProtoStops(const ProtoStops& from);

  inline ProtoStops& operator=(const ProtoStops& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoStops(ProtoStops&& from) noexcept
    : ProtoStops() {
    *this = ::std::move(from);
  }

  inline ProtoStops& operator=(ProtoStops&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoStops& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoStops* internal_default_instance() {
    return reinterpret_cast<const ProtoStops*>(
               &_ProtoStops_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ProtoStops* other);
  friend void swap(ProtoStops& a, ProtoStops& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoStops* New() const final {
    return CreateMaybeMessage<ProtoStops>(NULL);
  }

  ProtoStops* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProtoStops>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProtoStops& from);
  void MergeFrom(const ProtoStops& from);
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
  void InternalSwap(ProtoStops* other);
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

  // repeated .ProtoStop stops = 1;
  int stops_size() const;
  void clear_stops();
  static const int kStopsFieldNumber = 1;
  ::ProtoStop* mutable_stops(int index);
  ::google::protobuf::RepeatedPtrField< ::ProtoStop >*
      mutable_stops();
  const ::ProtoStop& stops(int index) const;
  ::ProtoStop* add_stops();
  const ::google::protobuf::RepeatedPtrField< ::ProtoStop >&
      stops() const;

  // map<int64, int64> indexes_by_id = 2;
  int indexes_by_id_size() const;
  void clear_indexes_by_id();
  static const int kIndexesByIdFieldNumber = 2;
  const ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >&
      indexes_by_id() const;
  ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >*
      mutable_indexes_by_id();

  // @@protoc_insertion_point(class_scope:ProtoStops)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ProtoStop > stops_;
  ::google::protobuf::internal::MapField<
      ProtoStops_IndexesByIdEntry_DoNotUse,
      ::google::protobuf::int64, ::google::protobuf::int64,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
      0 > indexes_by_id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_5fstops_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ProtoStops

// repeated .ProtoStop stops = 1;
inline int ProtoStops::stops_size() const {
  return stops_.size();
}
inline ::ProtoStop* ProtoStops::mutable_stops(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoStops.stops)
  return stops_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ProtoStop >*
ProtoStops::mutable_stops() {
  // @@protoc_insertion_point(field_mutable_list:ProtoStops.stops)
  return &stops_;
}
inline const ::ProtoStop& ProtoStops::stops(int index) const {
  // @@protoc_insertion_point(field_get:ProtoStops.stops)
  return stops_.Get(index);
}
inline ::ProtoStop* ProtoStops::add_stops() {
  // @@protoc_insertion_point(field_add:ProtoStops.stops)
  return stops_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ProtoStop >&
ProtoStops::stops() const {
  // @@protoc_insertion_point(field_list:ProtoStops.stops)
  return stops_;
}

// map<int64, int64> indexes_by_id = 2;
inline int ProtoStops::indexes_by_id_size() const {
  return indexes_by_id_.size();
}
inline void ProtoStops::clear_indexes_by_id() {
  indexes_by_id_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >&
ProtoStops::indexes_by_id() const {
  // @@protoc_insertion_point(field_map:ProtoStops.indexes_by_id)
  return indexes_by_id_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >*
ProtoStops::mutable_indexes_by_id() {
  // @@protoc_insertion_point(field_mutable_map:ProtoStops.indexes_by_id)
  return indexes_by_id_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_5fstops_2eproto
