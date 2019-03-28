// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: lineCollection.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(ad1e031b6a61573b);
CAPNP_DECLARE_SCHEMA(d269e1b843a73de0);

}  // namespace schemas
}  // namespace capnp

namespace lineCollection {

struct LineCollection {
  LineCollection() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ad1e031b6a61573b, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Line {
  Line() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d269e1b843a73de0, 1, 10)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class LineCollection::Reader {
public:
  typedef LineCollection Reads;

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

  inline bool hasLines() const;
  inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Reader getLines() const;

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

class LineCollection::Builder {
public:
  typedef LineCollection Builds;

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

  inline bool hasLines();
  inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Builder getLines();
  inline void setLines( ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Builder initLines(unsigned int size);
  inline void adoptLines(::capnp::Orphan< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>> disownLines();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class LineCollection::Pipeline {
public:
  typedef LineCollection Pipelines;

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

class Line::Reader {
public:
  typedef Line Reads;

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

  inline bool hasInternalId() const;
  inline  ::capnp::Text::Reader getInternalId() const;

  inline bool hasMode() const;
  inline  ::capnp::Text::Reader getMode() const;

  inline bool hasCategory() const;
  inline  ::capnp::Text::Reader getCategory() const;

  inline bool hasAgencyUuid() const;
  inline  ::capnp::Text::Reader getAgencyUuid() const;

  inline bool hasShortname() const;
  inline  ::capnp::Text::Reader getShortname() const;

  inline bool hasLongname() const;
  inline  ::capnp::Text::Reader getLongname() const;

  inline bool hasColor() const;
  inline  ::capnp::Text::Reader getColor() const;

  inline  ::int8_t getIsEnabled() const;

  inline bool hasDescription() const;
  inline  ::capnp::Text::Reader getDescription() const;

  inline bool hasData() const;
  inline  ::capnp::Text::Reader getData() const;

  inline  ::int8_t getIsAutonomous() const;

  inline  ::int8_t getAllowSameLineTransfers() const;

  inline  ::int8_t getIsFrozen() const;

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

class Line::Builder {
public:
  typedef Line Builds;

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

  inline bool hasInternalId();
  inline  ::capnp::Text::Builder getInternalId();
  inline void setInternalId( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initInternalId(unsigned int size);
  inline void adoptInternalId(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownInternalId();

  inline bool hasMode();
  inline  ::capnp::Text::Builder getMode();
  inline void setMode( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initMode(unsigned int size);
  inline void adoptMode(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownMode();

  inline bool hasCategory();
  inline  ::capnp::Text::Builder getCategory();
  inline void setCategory( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initCategory(unsigned int size);
  inline void adoptCategory(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownCategory();

  inline bool hasAgencyUuid();
  inline  ::capnp::Text::Builder getAgencyUuid();
  inline void setAgencyUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initAgencyUuid(unsigned int size);
  inline void adoptAgencyUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownAgencyUuid();

  inline bool hasShortname();
  inline  ::capnp::Text::Builder getShortname();
  inline void setShortname( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initShortname(unsigned int size);
  inline void adoptShortname(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownShortname();

  inline bool hasLongname();
  inline  ::capnp::Text::Builder getLongname();
  inline void setLongname( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initLongname(unsigned int size);
  inline void adoptLongname(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownLongname();

  inline bool hasColor();
  inline  ::capnp::Text::Builder getColor();
  inline void setColor( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initColor(unsigned int size);
  inline void adoptColor(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownColor();

  inline  ::int8_t getIsEnabled();
  inline void setIsEnabled( ::int8_t value);

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

  inline  ::int8_t getIsAutonomous();
  inline void setIsAutonomous( ::int8_t value);

  inline  ::int8_t getAllowSameLineTransfers();
  inline void setAllowSameLineTransfers( ::int8_t value);

  inline  ::int8_t getIsFrozen();
  inline void setIsFrozen( ::int8_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Line::Pipeline {
public:
  typedef Line Pipelines;

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

inline bool LineCollection::Reader::hasLines() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool LineCollection::Builder::hasLines() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Reader LineCollection::Reader::getLines() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Builder LineCollection::Builder::getLines() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void LineCollection::Builder::setLines( ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>::Builder LineCollection::Builder::initLines(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void LineCollection::Builder::adoptLines(
    ::capnp::Orphan< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>> LineCollection::Builder::disownLines() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::lineCollection::Line,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Line::Builder::setUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasInternalId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasInternalId() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getInternalId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Line::Builder::setInternalId( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initInternalId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptInternalId(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownInternalId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasMode() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasMode() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getMode() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getMode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Line::Builder::setMode( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initMode(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptMode(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownMode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasCategory() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasCategory() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getCategory() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getCategory() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void Line::Builder::setCategory( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initCategory(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptCategory(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownCategory() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasAgencyUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasAgencyUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getAgencyUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getAgencyUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void Line::Builder::setAgencyUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initAgencyUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptAgencyUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownAgencyUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasShortname() const {
  return !_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasShortname() {
  return !_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getShortname() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline void Line::Builder::setShortname( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initShortname(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptShortname(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasLongname() const {
  return !_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasLongname() {
  return !_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getLongname() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getLongname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline void Line::Builder::setLongname( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initLongname(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptLongname(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownLongname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasColor() const {
  return !_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasColor() {
  return !_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getColor() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getColor() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline void Line::Builder::setColor( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initColor(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptColor(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownColor() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}

inline  ::int8_t Line::Reader::getIsEnabled() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Line::Builder::getIsEnabled() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Line::Builder::setIsEnabled( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Line::Reader::hasDescription() const {
  return !_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasDescription() {
  return !_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getDescription() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}
inline void Line::Builder::setDescription( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initDescription(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptDescription(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownDescription() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<8>() * ::capnp::POINTERS));
}

inline bool Line::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline bool Line::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Line::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Line::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}
inline void Line::Builder::setData( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Line::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), size);
}
inline void Line::Builder::adoptData(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Line::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<9>() * ::capnp::POINTERS));
}

inline  ::int8_t Line::Reader::getIsAutonomous() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Line::Builder::getIsAutonomous() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Line::Builder::setIsAutonomous( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Line::Reader::getAllowSameLineTransfers() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Line::Builder::getAllowSameLineTransfers() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Line::Builder::setAllowSameLineTransfers( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Line::Reader::getIsFrozen() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Line::Builder::getIsFrozen() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void Line::Builder::setIsFrozen( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

}  // namespace

