// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_route.proto

#include "../include/proto/proto_route.pb.h"

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

class ProtoRouteDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoRoute>
      _instance;
} _ProtoRoute_default_instance_;
namespace protobuf_proto_5froute_2eproto {
static void InitDefaultsProtoRoute() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoRoute_default_instance_;
    new (ptr) ::ProtoRoute();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ProtoRoute::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProtoRoute =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProtoRoute}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProtoRoute.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, agency_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, route_type_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, agency_acronym_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, agency_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, shortname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, longname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoRoute, route_type_name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ProtoRoute)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_ProtoRoute_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto_route.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021proto_route.proto\"\255\001\n\nProtoRoute\022\n\n\002id"
      "\030\001 \001(\003\022\021\n\tagency_id\030\002 \001(\003\022\025\n\rroute_type_"
      "id\030\003 \001(\003\022\026\n\016agency_acronym\030\004 \001(\t\022\023\n\013agen"
      "cy_name\030\005 \001(\t\022\021\n\tshortname\030\006 \001(\t\022\020\n\010long"
      "name\030\007 \001(\t\022\027\n\017route_type_name\030\010 \001(\tb\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_route.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_proto_5froute_2eproto

// ===================================================================

void ProtoRoute::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoRoute::kIdFieldNumber;
const int ProtoRoute::kAgencyIdFieldNumber;
const int ProtoRoute::kRouteTypeIdFieldNumber;
const int ProtoRoute::kAgencyAcronymFieldNumber;
const int ProtoRoute::kAgencyNameFieldNumber;
const int ProtoRoute::kShortnameFieldNumber;
const int ProtoRoute::kLongnameFieldNumber;
const int ProtoRoute::kRouteTypeNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoRoute::ProtoRoute()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_5froute_2eproto::scc_info_ProtoRoute.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoRoute)
}
ProtoRoute::ProtoRoute(const ProtoRoute& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  agency_acronym_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.agency_acronym().size() > 0) {
    agency_acronym_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.agency_acronym_);
  }
  agency_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.agency_name().size() > 0) {
    agency_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.agency_name_);
  }
  shortname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.shortname().size() > 0) {
    shortname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.shortname_);
  }
  longname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.longname().size() > 0) {
    longname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.longname_);
  }
  route_type_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.route_type_name().size() > 0) {
    route_type_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.route_type_name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&route_type_id_) -
    reinterpret_cast<char*>(&id_)) + sizeof(route_type_id_));
  // @@protoc_insertion_point(copy_constructor:ProtoRoute)
}

void ProtoRoute::SharedCtor() {
  agency_acronym_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  agency_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  shortname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  longname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  route_type_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&route_type_id_) -
      reinterpret_cast<char*>(&id_)) + sizeof(route_type_id_));
}

ProtoRoute::~ProtoRoute() {
  // @@protoc_insertion_point(destructor:ProtoRoute)
  SharedDtor();
}

void ProtoRoute::SharedDtor() {
  agency_acronym_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  agency_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  shortname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  longname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  route_type_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ProtoRoute::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProtoRoute::descriptor() {
  ::protobuf_proto_5froute_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5froute_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoRoute& ProtoRoute::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_5froute_2eproto::scc_info_ProtoRoute.base);
  return *internal_default_instance();
}


void ProtoRoute::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoRoute)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  agency_acronym_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  agency_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  shortname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  longname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  route_type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&route_type_id_) -
      reinterpret_cast<char*>(&id_)) + sizeof(route_type_id_));
  _internal_metadata_.Clear();
}

bool ProtoRoute::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoRoute)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 agency_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &agency_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 route_type_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &route_type_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string agency_acronym = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_agency_acronym()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->agency_acronym().data(), static_cast<int>(this->agency_acronym().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoRoute.agency_acronym"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string agency_name = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_agency_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->agency_name().data(), static_cast<int>(this->agency_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoRoute.agency_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string shortname = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_shortname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->shortname().data(), static_cast<int>(this->shortname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoRoute.shortname"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string longname = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_longname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->longname().data(), static_cast<int>(this->longname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoRoute.longname"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string route_type_name = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_route_type_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->route_type_name().data(), static_cast<int>(this->route_type_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoRoute.route_type_name"));
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
  // @@protoc_insertion_point(parse_success:ProtoRoute)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoRoute)
  return false;
#undef DO_
}

void ProtoRoute::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoRoute)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // int64 agency_id = 2;
  if (this->agency_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->agency_id(), output);
  }

  // int64 route_type_id = 3;
  if (this->route_type_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->route_type_id(), output);
  }

  // string agency_acronym = 4;
  if (this->agency_acronym().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->agency_acronym().data(), static_cast<int>(this->agency_acronym().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.agency_acronym");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->agency_acronym(), output);
  }

  // string agency_name = 5;
  if (this->agency_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->agency_name().data(), static_cast<int>(this->agency_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.agency_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->agency_name(), output);
  }

  // string shortname = 6;
  if (this->shortname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shortname().data(), static_cast<int>(this->shortname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.shortname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->shortname(), output);
  }

  // string longname = 7;
  if (this->longname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->longname().data(), static_cast<int>(this->longname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.longname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->longname(), output);
  }

  // string route_type_name = 8;
  if (this->route_type_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->route_type_name().data(), static_cast<int>(this->route_type_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.route_type_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->route_type_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoRoute)
}

::google::protobuf::uint8* ProtoRoute::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoRoute)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // int64 agency_id = 2;
  if (this->agency_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->agency_id(), target);
  }

  // int64 route_type_id = 3;
  if (this->route_type_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->route_type_id(), target);
  }

  // string agency_acronym = 4;
  if (this->agency_acronym().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->agency_acronym().data(), static_cast<int>(this->agency_acronym().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.agency_acronym");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->agency_acronym(), target);
  }

  // string agency_name = 5;
  if (this->agency_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->agency_name().data(), static_cast<int>(this->agency_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.agency_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->agency_name(), target);
  }

  // string shortname = 6;
  if (this->shortname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shortname().data(), static_cast<int>(this->shortname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.shortname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->shortname(), target);
  }

  // string longname = 7;
  if (this->longname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->longname().data(), static_cast<int>(this->longname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.longname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->longname(), target);
  }

  // string route_type_name = 8;
  if (this->route_type_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->route_type_name().data(), static_cast<int>(this->route_type_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoRoute.route_type_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->route_type_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoRoute)
  return target;
}

size_t ProtoRoute::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoRoute)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string agency_acronym = 4;
  if (this->agency_acronym().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->agency_acronym());
  }

  // string agency_name = 5;
  if (this->agency_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->agency_name());
  }

  // string shortname = 6;
  if (this->shortname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->shortname());
  }

  // string longname = 7;
  if (this->longname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->longname());
  }

  // string route_type_name = 8;
  if (this->route_type_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->route_type_name());
  }

  // int64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  // int64 agency_id = 2;
  if (this->agency_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->agency_id());
  }

  // int64 route_type_id = 3;
  if (this->route_type_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->route_type_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoRoute::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoRoute)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoRoute* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoRoute>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoRoute)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoRoute)
    MergeFrom(*source);
  }
}

void ProtoRoute::MergeFrom(const ProtoRoute& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoRoute)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.agency_acronym().size() > 0) {

    agency_acronym_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.agency_acronym_);
  }
  if (from.agency_name().size() > 0) {

    agency_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.agency_name_);
  }
  if (from.shortname().size() > 0) {

    shortname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.shortname_);
  }
  if (from.longname().size() > 0) {

    longname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.longname_);
  }
  if (from.route_type_name().size() > 0) {

    route_type_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.route_type_name_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.agency_id() != 0) {
    set_agency_id(from.agency_id());
  }
  if (from.route_type_id() != 0) {
    set_route_type_id(from.route_type_id());
  }
}

void ProtoRoute::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoRoute)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoRoute::CopyFrom(const ProtoRoute& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoRoute)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoRoute::IsInitialized() const {
  return true;
}

void ProtoRoute::Swap(ProtoRoute* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoRoute::InternalSwap(ProtoRoute* other) {
  using std::swap;
  agency_acronym_.Swap(&other->agency_acronym_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  agency_name_.Swap(&other->agency_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  shortname_.Swap(&other->shortname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  longname_.Swap(&other->longname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  route_type_name_.Swap(&other->route_type_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(agency_id_, other->agency_id_);
  swap(route_type_id_, other->route_type_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProtoRoute::GetMetadata() const {
  protobuf_proto_5froute_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5froute_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ProtoRoute* Arena::CreateMaybeMessage< ::ProtoRoute >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoRoute >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
