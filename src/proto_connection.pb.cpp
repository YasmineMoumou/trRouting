// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_connection.proto

#include "../include/proto/proto_connection.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class ProtoConnectionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoConnection>
      _instance;
} _ProtoConnection_default_instance_;
namespace protobuf_proto_5fconnection_2eproto {
static void InitDefaultsProtoConnection() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoConnection_default_instance_;
    new (ptr) ::ProtoConnection();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ProtoConnection::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProtoConnection =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProtoConnection}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProtoConnection.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, stop_dep_idx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, stop_arr_idx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, time_dep_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, time_arr_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, trip_idx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, can_board_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, can_unboard_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoConnection, sequence_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ProtoConnection)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_ProtoConnection_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto_connection.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026proto_connection.proto\"\255\001\n\017ProtoConnec"
      "tion\022\024\n\014stop_dep_idx\030\001 \001(\005\022\024\n\014stop_arr_i"
      "dx\030\002 \001(\005\022\020\n\010time_dep\030\003 \001(\005\022\020\n\010time_arr\030\004"
      " \001(\005\022\020\n\010trip_idx\030\005 \001(\005\022\021\n\tcan_board\030\006 \001("
      "\005\022\023\n\013can_unboard\030\007 \001(\005\022\020\n\010sequence\030\010 \001(\005"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_connection.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_5fconnection_2eproto

// ===================================================================

void ProtoConnection::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoConnection::kStopDepIdxFieldNumber;
const int ProtoConnection::kStopArrIdxFieldNumber;
const int ProtoConnection::kTimeDepFieldNumber;
const int ProtoConnection::kTimeArrFieldNumber;
const int ProtoConnection::kTripIdxFieldNumber;
const int ProtoConnection::kCanBoardFieldNumber;
const int ProtoConnection::kCanUnboardFieldNumber;
const int ProtoConnection::kSequenceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoConnection::ProtoConnection()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_5fconnection_2eproto::scc_info_ProtoConnection.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoConnection)
}
ProtoConnection::ProtoConnection(const ProtoConnection& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&stop_dep_idx_, &from.stop_dep_idx_,
    static_cast<size_t>(reinterpret_cast<char*>(&sequence_) -
    reinterpret_cast<char*>(&stop_dep_idx_)) + sizeof(sequence_));
  // @@protoc_insertion_point(copy_constructor:ProtoConnection)
}

void ProtoConnection::SharedCtor() {
  ::memset(&stop_dep_idx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sequence_) -
      reinterpret_cast<char*>(&stop_dep_idx_)) + sizeof(sequence_));
}

ProtoConnection::~ProtoConnection() {
  // @@protoc_insertion_point(destructor:ProtoConnection)
  SharedDtor();
}

void ProtoConnection::SharedDtor() {
}

void ProtoConnection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProtoConnection::descriptor() {
  ::protobuf_proto_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoConnection& ProtoConnection::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_5fconnection_2eproto::scc_info_ProtoConnection.base);
  return *internal_default_instance();
}


void ProtoConnection::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&stop_dep_idx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sequence_) -
      reinterpret_cast<char*>(&stop_dep_idx_)) + sizeof(sequence_));
  _internal_metadata_.Clear();
}

bool ProtoConnection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoConnection)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 stop_dep_idx = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stop_dep_idx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 stop_arr_idx = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stop_arr_idx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 time_dep = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_dep_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 time_arr = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_arr_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 trip_idx = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &trip_idx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 can_board = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &can_board_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 can_unboard = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &can_unboard_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sequence = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sequence_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtoConnection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoConnection)
  return false;
#undef DO_
}

void ProtoConnection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 stop_dep_idx = 1;
  if (this->stop_dep_idx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->stop_dep_idx(), output);
  }

  // int32 stop_arr_idx = 2;
  if (this->stop_arr_idx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->stop_arr_idx(), output);
  }

  // int32 time_dep = 3;
  if (this->time_dep() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->time_dep(), output);
  }

  // int32 time_arr = 4;
  if (this->time_arr() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->time_arr(), output);
  }

  // int32 trip_idx = 5;
  if (this->trip_idx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->trip_idx(), output);
  }

  // int32 can_board = 6;
  if (this->can_board() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->can_board(), output);
  }

  // int32 can_unboard = 7;
  if (this->can_unboard() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->can_unboard(), output);
  }

  // int32 sequence = 8;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->sequence(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoConnection)
}

::google::protobuf::uint8* ProtoConnection::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 stop_dep_idx = 1;
  if (this->stop_dep_idx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->stop_dep_idx(), target);
  }

  // int32 stop_arr_idx = 2;
  if (this->stop_arr_idx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->stop_arr_idx(), target);
  }

  // int32 time_dep = 3;
  if (this->time_dep() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->time_dep(), target);
  }

  // int32 time_arr = 4;
  if (this->time_arr() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->time_arr(), target);
  }

  // int32 trip_idx = 5;
  if (this->trip_idx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->trip_idx(), target);
  }

  // int32 can_board = 6;
  if (this->can_board() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->can_board(), target);
  }

  // int32 can_unboard = 7;
  if (this->can_unboard() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->can_unboard(), target);
  }

  // int32 sequence = 8;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->sequence(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoConnection)
  return target;
}

size_t ProtoConnection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoConnection)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 stop_dep_idx = 1;
  if (this->stop_dep_idx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->stop_dep_idx());
  }

  // int32 stop_arr_idx = 2;
  if (this->stop_arr_idx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->stop_arr_idx());
  }

  // int32 time_dep = 3;
  if (this->time_dep() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time_dep());
  }

  // int32 time_arr = 4;
  if (this->time_arr() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time_arr());
  }

  // int32 trip_idx = 5;
  if (this->trip_idx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->trip_idx());
  }

  // int32 can_board = 6;
  if (this->can_board() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->can_board());
  }

  // int32 can_unboard = 7;
  if (this->can_unboard() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->can_unboard());
  }

  // int32 sequence = 8;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sequence());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoConnection::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoConnection)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoConnection* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoConnection>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoConnection)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoConnection)
    MergeFrom(*source);
  }
}

void ProtoConnection::MergeFrom(const ProtoConnection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoConnection)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.stop_dep_idx() != 0) {
    set_stop_dep_idx(from.stop_dep_idx());
  }
  if (from.stop_arr_idx() != 0) {
    set_stop_arr_idx(from.stop_arr_idx());
  }
  if (from.time_dep() != 0) {
    set_time_dep(from.time_dep());
  }
  if (from.time_arr() != 0) {
    set_time_arr(from.time_arr());
  }
  if (from.trip_idx() != 0) {
    set_trip_idx(from.trip_idx());
  }
  if (from.can_board() != 0) {
    set_can_board(from.can_board());
  }
  if (from.can_unboard() != 0) {
    set_can_unboard(from.can_unboard());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
}

void ProtoConnection::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoConnection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoConnection::CopyFrom(const ProtoConnection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoConnection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoConnection::IsInitialized() const {
  return true;
}

void ProtoConnection::Swap(ProtoConnection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoConnection::InternalSwap(ProtoConnection* other) {
  using std::swap;
  swap(stop_dep_idx_, other->stop_dep_idx_);
  swap(stop_arr_idx_, other->stop_arr_idx_);
  swap(time_dep_, other->time_dep_);
  swap(time_arr_, other->time_arr_);
  swap(trip_idx_, other->trip_idx_);
  swap(can_board_, other->can_board_);
  swap(can_unboard_, other->can_unboard_);
  swap(sequence_, other->sequence_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProtoConnection::GetMetadata() const {
  protobuf_proto_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ProtoConnection* Arena::CreateMaybeMessage< ::ProtoConnection >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoConnection >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
