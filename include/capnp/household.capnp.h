// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: household.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(f1856a7a7d8fd18f);
CAPNP_DECLARE_SCHEMA(9aaace5f6d670889);
enum class IncomeLevelGroup_9aaace5f6d670889: uint16_t {
  VERY_LOW,
  LOW,
  MEDIUM,
  HIGH,
  VERY_HIGH,
  UNKNOWN,
};
CAPNP_DECLARE_ENUM(IncomeLevelGroup, 9aaace5f6d670889);
CAPNP_DECLARE_SCHEMA(ceb664610adc2cc4);
enum class Category_ceb664610adc2cc4: uint16_t {
  SINGLE_PERSON,
  COUPLE,
  MONOPARENTAL_FAMILY,
  BIPARENTAL_FAMILY,
  OTHER,
  UNKNOWN,
};
CAPNP_DECLARE_ENUM(Category, ceb664610adc2cc4);

}  // namespace schemas
}  // namespace capnp

namespace household {

struct Household {
  Household() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  typedef ::capnp::schemas::IncomeLevelGroup_9aaace5f6d670889 IncomeLevelGroup;

  typedef ::capnp::schemas::Category_ceb664610adc2cc4 Category;


  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f1856a7a7d8fd18f, 4, 4)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Household::Reader {
public:
  typedef Household Reads;

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

  inline float getExpansionFactor() const;

  inline  ::int8_t getSize() const;

  inline  ::int8_t getCarNumber() const;

  inline  ::int32_t getIncomeLevel() const;

  inline  ::household::Household::IncomeLevelGroup getIncomeLevelGroup() const;

  inline  ::household::Household::Category getCategory() const;

  inline float getHomeLatitude() const;

  inline float getHomeLongitude() const;

  inline bool hasHomeNodesUuids() const;
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader getHomeNodesUuids() const;

  inline bool hasHomeNodesTravelTimes() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getHomeNodesTravelTimes() const;

  inline bool hasHomeNodesDistances() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getHomeNodesDistances() const;

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

class Household::Builder {
public:
  typedef Household Builds;

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

  inline float getExpansionFactor();
  inline void setExpansionFactor(float value);

  inline  ::int8_t getSize();
  inline void setSize( ::int8_t value);

  inline  ::int8_t getCarNumber();
  inline void setCarNumber( ::int8_t value);

  inline  ::int32_t getIncomeLevel();
  inline void setIncomeLevel( ::int32_t value);

  inline  ::household::Household::IncomeLevelGroup getIncomeLevelGroup();
  inline void setIncomeLevelGroup( ::household::Household::IncomeLevelGroup value);

  inline  ::household::Household::Category getCategory();
  inline void setCategory( ::household::Household::Category value);

  inline float getHomeLatitude();
  inline void setHomeLatitude(float value);

  inline float getHomeLongitude();
  inline void setHomeLongitude(float value);

  inline bool hasHomeNodesUuids();
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder getHomeNodesUuids();
  inline void setHomeNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value);
  inline void setHomeNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value);
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder initHomeNodesUuids(unsigned int size);
  inline void adoptHomeNodesUuids(::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> disownHomeNodesUuids();

  inline bool hasHomeNodesTravelTimes();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getHomeNodesTravelTimes();
  inline void setHomeNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setHomeNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initHomeNodesTravelTimes(unsigned int size);
  inline void adoptHomeNodesTravelTimes(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownHomeNodesTravelTimes();

  inline bool hasHomeNodesDistances();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getHomeNodesDistances();
  inline void setHomeNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setHomeNodesDistances(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initHomeNodesDistances(unsigned int size);
  inline void adoptHomeNodesDistances(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownHomeNodesDistances();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Household::Pipeline {
public:
  typedef Household Pipelines;

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

inline bool Household::Reader::hasUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Household::Builder::hasUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Household::Reader::getUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Household::Builder::getUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Household::Builder::setUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Household::Builder::initUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Household::Builder::adoptUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Household::Builder::disownUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint32_t Household::Reader::getId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Household::Builder::getId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float Household::Reader::getExpansionFactor() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float Household::Builder::getExpansionFactor() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setExpansionFactor(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Household::Reader::getSize() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Household::Builder::getSize() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setSize( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Household::Reader::getCarNumber() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Household::Builder::getCarNumber() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setCarNumber( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS, value);
}

inline  ::int32_t Household::Reader::getIncomeLevel() const {
  return _reader.getDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::int32_t Household::Builder::getIncomeLevel() {
  return _builder.getDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setIncomeLevel( ::int32_t value) {
  _builder.setDataField< ::int32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline  ::household::Household::IncomeLevelGroup Household::Reader::getIncomeLevelGroup() const {
  return _reader.getDataField< ::household::Household::IncomeLevelGroup>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline  ::household::Household::IncomeLevelGroup Household::Builder::getIncomeLevelGroup() {
  return _builder.getDataField< ::household::Household::IncomeLevelGroup>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setIncomeLevelGroup( ::household::Household::IncomeLevelGroup value) {
  _builder.setDataField< ::household::Household::IncomeLevelGroup>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline  ::household::Household::Category Household::Reader::getCategory() const {
  return _reader.getDataField< ::household::Household::Category>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::household::Household::Category Household::Builder::getCategory() {
  return _builder.getDataField< ::household::Household::Category>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setCategory( ::household::Household::Category value) {
  _builder.setDataField< ::household::Household::Category>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline float Household::Reader::getHomeLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline float Household::Builder::getHomeLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setHomeLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline float Household::Reader::getHomeLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline float Household::Builder::getHomeLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void Household::Builder::setHomeLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline bool Household::Reader::hasHomeNodesUuids() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Household::Builder::hasHomeNodesUuids() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader Household::Reader::getHomeNodesUuids() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Household::Builder::getHomeNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Household::Builder::setHomeNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void Household::Builder::setHomeNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Household::Builder::initHomeNodesUuids(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Household::Builder::adoptHomeNodesUuids(
    ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> Household::Builder::disownHomeNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool Household::Reader::hasHomeNodesTravelTimes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Household::Builder::hasHomeNodesTravelTimes() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Household::Reader::getHomeNodesTravelTimes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Household::Builder::getHomeNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Household::Builder::setHomeNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline void Household::Builder::setHomeNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Household::Builder::initHomeNodesTravelTimes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Household::Builder::adoptHomeNodesTravelTimes(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Household::Builder::disownHomeNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool Household::Reader::hasHomeNodesDistances() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool Household::Builder::hasHomeNodesDistances() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Household::Reader::getHomeNodesDistances() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Household::Builder::getHomeNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void Household::Builder::setHomeNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline void Household::Builder::setHomeNodesDistances(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Household::Builder::initHomeNodesDistances(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void Household::Builder::adoptHomeNodesDistances(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Household::Builder::disownHomeNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

}  // namespace

