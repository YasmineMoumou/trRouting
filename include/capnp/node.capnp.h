// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: node.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(cfb0309e1293c2e3);

}  // namespace schemas
}  // namespace capnp

namespace node {

struct Node {
  Node() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(cfb0309e1293c2e3, 3, 11)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Node::Reader {
public:
  typedef Node Reads;

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

  inline  ::uint32_t getId() const;

  inline bool hasInternalId() const;
  inline  ::capnp::Text::Reader getInternalId() const;

  inline bool hasCode() const;
  inline  ::capnp::Text::Reader getCode() const;

  inline bool hasName() const;
  inline  ::capnp::Text::Reader getName() const;

  inline  ::int32_t getLatitude() const;

  inline  ::int32_t getLongitude() const;

  inline bool hasStationUuid() const;
  inline  ::capnp::Text::Reader getStationUuid() const;

  inline bool hasColor() const;
  inline  ::capnp::Text::Reader getColor() const;

  inline bool hasDescription() const;
  inline  ::capnp::Text::Reader getDescription() const;

  inline bool hasData() const;
  inline  ::capnp::Text::Reader getData() const;

  inline  ::int8_t getIsEnabled() const;

  inline  ::int16_t getRoutingRadiusMeters() const;

  inline  ::int16_t getDefaultDwellTimeSeconds() const;

  inline bool hasTransferableNodesIdx() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getTransferableNodesIdx() const;

  inline bool hasTransferableNodesTravelTimes() const;
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader getTransferableNodesTravelTimes() const;

  inline bool hasTransferableNodesDistances() const;
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader getTransferableNodesDistances() const;

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

class Node::Builder {
public:
  typedef Node Builds;

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

  inline  ::uint32_t getId();
  inline void setId( ::uint32_t value);

  inline bool hasInternalId();
  inline  ::capnp::Text::Builder getInternalId();
  inline void setInternalId( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initInternalId(unsigned int size);
  inline void adoptInternalId(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownInternalId();

  inline bool hasCode();
  inline  ::capnp::Text::Builder getCode();
  inline void setCode( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initCode(unsigned int size);
  inline void adoptCode(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownCode();

  inline bool hasName();
  inline  ::capnp::Text::Builder getName();
  inline void setName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initName(unsigned int size);
  inline void adoptName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownName();

  inline  ::int32_t getLatitude();
  inline void setLatitude( ::int32_t value);

  inline  ::int32_t getLongitude();
  inline void setLongitude( ::int32_t value);

  inline bool hasStationUuid();
  inline  ::capnp::Text::Builder getStationUuid();
  inline void setStationUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initStationUuid(unsigned int size);
  inline void adoptStationUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownStationUuid();

  inline bool hasColor();
  inline  ::capnp::Text::Builder getColor();
  inline void setColor( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initColor(unsigned int size);
  inline void adoptColor(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownColor();

  inline bool hasDescription();
  inline  ::capnp::Text::Builder getDescription();
  inline void setDescription( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDescription(unsigned int size);
  inline void adoptDescription(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDescription();

  inline bool hasData();
  inline  ::capnp::Text::Builder getData();
  inline void setData( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownData();

  inline  ::int8_t getIsEnabled();
  inline void setIsEnabled( ::int8_t value);

  inline  ::int16_t getRoutingRadiusMeters();
  inline void setRoutingRadiusMeters( ::int16_t value);

  inline  ::int16_t getDefaultDwellTimeSeconds();
  inline void setDefaultDwellTimeSeconds( ::int16_t value);

  inline bool hasTransferableNodesIdx();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getTransferableNodesIdx();
  inline void setTransferableNodesIdx( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setTransferableNodesIdx(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initTransferableNodesIdx(unsigned int size);
  inline void adoptTransferableNodesIdx(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownTransferableNodesIdx();

  inline bool hasTransferableNodesTravelTimes();
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder getTransferableNodesTravelTimes();
  inline void setTransferableNodesTravelTimes( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setTransferableNodesTravelTimes(::kj::ArrayPtr<const  ::int16_t> value);
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder initTransferableNodesTravelTimes(unsigned int size);
  inline void adoptTransferableNodesTravelTimes(::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> disownTransferableNodesTravelTimes();

  inline bool hasTransferableNodesDistances();
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder getTransferableNodesDistances();
  inline void setTransferableNodesDistances( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setTransferableNodesDistances(::kj::ArrayPtr<const  ::int16_t> value);
  inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder initTransferableNodesDistances(unsigned int size);
  inline void adoptTransferableNodesDistances(::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> disownTransferableNodesDistances();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Node::Pipeline {
public:
  typedef Node Pipelines;

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

inline bool Node::Reader::hasUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Node::Builder::setUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint32_t Node::Reader::getId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Node::Builder::getId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Node::Reader::hasInternalId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasInternalId() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getInternalId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Node::Builder::setInternalId( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initInternalId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptInternalId(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasCode() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasCode() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getCode() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getCode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Node::Builder::setCode( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initCode(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptCode(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownCode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasName() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasName() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void Node::Builder::setName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline  ::int32_t Node::Reader::getLatitude() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Node::Builder::getLatitude() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setLatitude( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Node::Reader::getLongitude() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Node::Builder::getLongitude() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setLongitude( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool Node::Reader::hasStationUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasStationUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getStationUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getStationUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void Node::Builder::setStationUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initStationUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptStationUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownStationUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasColor() const {
  return !_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasColor() {
  return !_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getColor() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getColor() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline void Node::Builder::setColor( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initColor(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptColor(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownColor() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasDescription() const {
  return !_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasDescription() {
  return !_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getDescription() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline void Node::Builder::setDescription( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initDescription(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptDescription(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Node::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Node::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline void Node::Builder::setData( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Node::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptData(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Node::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}

inline  ::int8_t Node::Reader::getIsEnabled() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Node::Builder::getIsEnabled() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setIsEnabled( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Node::Reader::getRoutingRadiusMeters() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline  ::int16_t Node::Builder::getRoutingRadiusMeters() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setRoutingRadiusMeters( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Node::Reader::getDefaultDwellTimeSeconds() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::int16_t Node::Builder::getDefaultDwellTimeSeconds() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Node::Builder::setDefaultDwellTimeSeconds( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline bool Node::Reader::hasTransferableNodesIdx() const {
  return !_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasTransferableNodesIdx() {
  return !_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Node::Reader::getTransferableNodesIdx() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::getTransferableNodesIdx() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline void Node::Builder::setTransferableNodesIdx( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), value);
}
inline void Node::Builder::setTransferableNodesIdx(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::initTransferableNodesIdx(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptTransferableNodesIdx(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Node::Builder::disownTransferableNodesIdx() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasTransferableNodesTravelTimes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasTransferableNodesTravelTimes() {
  return !_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader Node::Reader::getTransferableNodesTravelTimes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::getTransferableNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline void Node::Builder::setTransferableNodesTravelTimes( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), value);
}
inline void Node::Builder::setTransferableNodesTravelTimes(::kj::ArrayPtr<const  ::int16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::initTransferableNodesTravelTimes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptTransferableNodesTravelTimes(
    ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> Node::Builder::disownTransferableNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}

inline bool Node::Reader::hasTransferableNodesDistances() const {
  return !_reader.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS).isNull();
}
inline bool Node::Builder::hasTransferableNodesDistances() {
  return !_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader Node::Reader::getTransferableNodesDistances() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::getTransferableNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}
inline void Node::Builder::setTransferableNodesDistances( ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), value);
}
inline void Node::Builder::setTransferableNodesDistances(::kj::ArrayPtr<const  ::int16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>::Builder Node::Builder::initTransferableNodesDistances(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), size);
}
inline void Node::Builder::adoptTransferableNodesDistances(
    ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>> Node::Builder::disownTransferableNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int16_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<10>() * ::capnp::POINTERS));
}

}  // namespace

