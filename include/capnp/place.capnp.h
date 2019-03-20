// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: place.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(dce3876c3329abbe);

}  // namespace schemas
}  // namespace capnp

namespace place {

struct Place {
  Place() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(dce3876c3329abbe, 2, 12)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Place::Reader {
public:
  typedef Place Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasUuid() const;
  inline  ::capnp::Text::Reader getUuid() const;

  inline bool hasDataSourceUuid() const;
  inline  ::capnp::Text::Reader getDataSourceUuid() const;

  inline  ::uint32_t getId() const;

  inline bool hasShortname() const;
  inline  ::capnp::Text::Reader getShortname() const;

  inline bool hasName() const;
  inline  ::capnp::Text::Reader getName() const;

  inline bool hasOsmFeatureKey() const;
  inline  ::capnp::Text::Reader getOsmFeatureKey() const;

  inline bool hasOsmFeatureValue() const;
  inline  ::capnp::Text::Reader getOsmFeatureValue() const;

  inline bool hasDescription() const;
  inline  ::capnp::Text::Reader getDescription() const;

  inline  ::int32_t getLatitude() const;

  inline  ::int32_t getLongitude() const;

  inline bool hasNodesIdx() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getNodesIdx() const;

  inline bool hasNodesTravelTimes() const;
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader getNodesTravelTimes() const;

  inline bool hasNodesDistances() const;
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader getNodesDistances() const;

  inline bool hasInternalId() const;
  inline  ::capnp::Text::Reader getInternalId() const;

  inline bool hasData() const;
  inline  ::capnp::Text::Reader getData() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Place::Builder {
public:
  typedef Place Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasUuid();
  inline  ::capnp::Text::Builder getUuid();
  inline void setUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initUuid(unsigned int size);
  inline void adoptUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownUuid();

  inline bool hasDataSourceUuid();
  inline  ::capnp::Text::Builder getDataSourceUuid();
  inline void setDataSourceUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDataSourceUuid(unsigned int size);
  inline void adoptDataSourceUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDataSourceUuid();

  inline  ::uint32_t getId();
  inline void setId( ::uint32_t value);

  inline bool hasShortname();
  inline  ::capnp::Text::Builder getShortname();
  inline void setShortname( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initShortname(unsigned int size);
  inline void adoptShortname(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownShortname();

  inline bool hasName();
  inline  ::capnp::Text::Builder getName();
  inline void setName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initName(unsigned int size);
  inline void adoptName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownName();

  inline bool hasOsmFeatureKey();
  inline  ::capnp::Text::Builder getOsmFeatureKey();
  inline void setOsmFeatureKey( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initOsmFeatureKey(unsigned int size);
  inline void adoptOsmFeatureKey(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownOsmFeatureKey();

  inline bool hasOsmFeatureValue();
  inline  ::capnp::Text::Builder getOsmFeatureValue();
  inline void setOsmFeatureValue( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initOsmFeatureValue(unsigned int size);
  inline void adoptOsmFeatureValue(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownOsmFeatureValue();

  inline bool hasDescription();
  inline  ::capnp::Text::Builder getDescription();
  inline void setDescription( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDescription(unsigned int size);
  inline void adoptDescription(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDescription();

  inline  ::int32_t getLatitude();
  inline void setLatitude( ::int32_t value);

  inline  ::int32_t getLongitude();
  inline void setLongitude( ::int32_t value);

  inline bool hasNodesIdx();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getNodesIdx();
  inline void setNodesIdx( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setNodesIdx(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initNodesIdx(unsigned int size);
  inline void adoptNodesIdx(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownNodesIdx();

  inline bool hasNodesTravelTimes();
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder getNodesTravelTimes();
  inline void setNodesTravelTimes( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setNodesTravelTimes(::kj::ArrayPtr<const  ::int16_t> value);
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder initNodesTravelTimes(unsigned int size);
  inline void adoptNodesTravelTimes(::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> disownNodesTravelTimes();

  inline bool hasNodesDistances();
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder getNodesDistances();
  inline void setNodesDistances( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setNodesDistances(::kj::ArrayPtr<const  ::int16_t> value);
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder initNodesDistances(unsigned int size);
  inline void adoptNodesDistances(::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> disownNodesDistances();

  inline bool hasInternalId();
  inline  ::capnp::Text::Builder getInternalId();
  inline void setInternalId( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initInternalId(unsigned int size);
  inline void adoptInternalId(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownInternalId();

  inline bool hasData();
  inline  ::capnp::Text::Builder getData();
  inline void setData( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownData();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Place::Pipeline {
public:
  typedef Place Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool Place::Reader::hasUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Place::Builder::setUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasDataSourceUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasDataSourceUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getDataSourceUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getDataSourceUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Place::Builder::setDataSourceUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initDataSourceUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptDataSourceUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownDataSourceUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline  ::uint32_t Place::Reader::getId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Place::Builder::getId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Place::Builder::setId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Place::Reader::hasShortname() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasShortname() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getShortname() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Place::Builder::setShortname( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initShortname(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptShortname(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasName() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasName() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void Place::Builder::setName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasOsmFeatureKey() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasOsmFeatureKey() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getOsmFeatureKey() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getOsmFeatureKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void Place::Builder::setOsmFeatureKey( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initOsmFeatureKey(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptOsmFeatureKey(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownOsmFeatureKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasOsmFeatureValue() const {
  return !_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasOsmFeatureValue() {
  return !_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getOsmFeatureValue() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getOsmFeatureValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline void Place::Builder::setOsmFeatureValue( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initOsmFeatureValue(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptOsmFeatureValue(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownOsmFeatureValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasDescription() const {
  return !_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasDescription() {
  return !_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getDescription() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline void Place::Builder::setDescription( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initDescription(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptDescription(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}

inline  ::int32_t Place::Reader::getLatitude() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Place::Builder::getLatitude() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Place::Builder::setLatitude( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Place::Reader::getLongitude() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Place::Builder::getLongitude() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Place::Builder::setLongitude( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool Place::Reader::hasNodesIdx() const {
  return !_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasNodesIdx() {
  return !_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Place::Reader::getNodesIdx() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::getNodesIdx() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline void Place::Builder::setNodesIdx( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline void Place::Builder::setNodesIdx(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::initNodesIdx(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptNodesIdx(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Place::Builder::disownNodesIdx() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasNodesTravelTimes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasNodesTravelTimes() {
  return !_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader Place::Reader::getNodesTravelTimes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::getNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline void Place::Builder::setNodesTravelTimes( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), value);
}
inline void Place::Builder::setNodesTravelTimes(::kj::ArrayPtr<const  ::int16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::initNodesTravelTimes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptNodesTravelTimes(
    ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> Place::Builder::disownNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasNodesDistances() const {
  return !_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasNodesDistances() {
  return !_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader Place::Reader::getNodesDistances() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::getNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline void Place::Builder::setNodesDistances( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), value);
}
inline void Place::Builder::setNodesDistances(::kj::ArrayPtr<const  ::int16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Place::Builder::initNodesDistances(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptNodesDistances(
    ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> Place::Builder::disownNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasInternalId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasInternalId() {
  return !_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getInternalId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}
inline void Place::Builder::setInternalId( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initInternalId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptInternalId(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}

inline bool Place::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS).isNull();
}
inline bool Place::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Place::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Place::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS));
}
inline void Place::Builder::setData( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Place::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS), size);
}
inline void Place::Builder::adoptData(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Place::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<11>() * ::capnp::POINTERS));
}

}  // namespace

