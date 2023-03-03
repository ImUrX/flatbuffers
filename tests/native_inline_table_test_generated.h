// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NATIVEINLINETABLETEST_H_
#define FLATBUFFERS_GENERATED_NATIVEINLINETABLETEST_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 1 &&
              FLATBUFFERS_VERSION_REVISION == 21,
             "Non-compatible flatbuffers version included");

struct NativeInlineTable;
struct NativeInlineTableBuilder;
struct NativeInlineTableT;

struct TestNativeInlineTable;
struct TestNativeInlineTableBuilder;
struct TestNativeInlineTableT;

bool operator==(const NativeInlineTableT &lhs, const NativeInlineTableT &rhs);
bool operator!=(const NativeInlineTableT &lhs, const NativeInlineTableT &rhs);
bool operator==(const TestNativeInlineTableT &lhs, const TestNativeInlineTableT &rhs);
bool operator!=(const TestNativeInlineTableT &lhs, const TestNativeInlineTableT &rhs);

inline const ::flatbuffers::TypeTable *NativeInlineTableTypeTable();

inline const ::flatbuffers::TypeTable *TestNativeInlineTableTypeTable();

struct NativeInlineTableT : public ::flatbuffers::NativeTable {
  typedef NativeInlineTable TableType;
  int32_t a = 0;
};

struct NativeInlineTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef NativeInlineTableT NativeTableType;
  typedef NativeInlineTableBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return NativeInlineTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A = 4
  };
  int32_t a() const {
    return GetField<int32_t>(VT_A, 0);
  }
  bool mutate_a(int32_t _a = 0) {
    return SetField<int32_t>(VT_A, _a, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_A, 4) &&
           verifier.EndTable();
  }
  NativeInlineTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(NativeInlineTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<NativeInlineTable> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const NativeInlineTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct NativeInlineTableBuilder {
  typedef NativeInlineTable Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_a(int32_t a) {
    fbb_.AddElement<int32_t>(NativeInlineTable::VT_A, a, 0);
  }
  explicit NativeInlineTableBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<NativeInlineTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<NativeInlineTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<NativeInlineTable> CreateNativeInlineTable(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int32_t a = 0) {
  NativeInlineTableBuilder builder_(_fbb);
  builder_.add_a(a);
  return builder_.Finish();
}

::flatbuffers::Offset<NativeInlineTable> CreateNativeInlineTable(::flatbuffers::FlatBufferBuilder &_fbb, const NativeInlineTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TestNativeInlineTableT : public ::flatbuffers::NativeTable {
  typedef TestNativeInlineTable TableType;
  std::vector<NativeInlineTableT> t{};
};

struct TestNativeInlineTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TestNativeInlineTableT NativeTableType;
  typedef TestNativeInlineTableBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return TestNativeInlineTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_T = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>> *t() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>> *>(VT_T);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>> *mutable_t() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>> *>(VT_T);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_T) &&
           verifier.VerifyVector(t()) &&
           verifier.VerifyVectorOfTables(t()) &&
           verifier.EndTable();
  }
  TestNativeInlineTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TestNativeInlineTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<TestNativeInlineTable> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TestNativeInlineTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TestNativeInlineTableBuilder {
  typedef TestNativeInlineTable Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_t(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>>> t) {
    fbb_.AddOffset(TestNativeInlineTable::VT_T, t);
  }
  explicit TestNativeInlineTableBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TestNativeInlineTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TestNativeInlineTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TestNativeInlineTable> CreateTestNativeInlineTable(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<NativeInlineTable>>> t = 0) {
  TestNativeInlineTableBuilder builder_(_fbb);
  builder_.add_t(t);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TestNativeInlineTable> CreateTestNativeInlineTableDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<NativeInlineTable>> *t = nullptr) {
  auto t__ = t ? _fbb.CreateVector<::flatbuffers::Offset<NativeInlineTable>>(*t) : 0;
  return CreateTestNativeInlineTable(
      _fbb,
      t__);
}

::flatbuffers::Offset<TestNativeInlineTable> CreateTestNativeInlineTable(::flatbuffers::FlatBufferBuilder &_fbb, const TestNativeInlineTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);


inline bool operator==(const NativeInlineTableT &lhs, const NativeInlineTableT &rhs) {
  return
      (lhs.a == rhs.a);
}

inline bool operator!=(const NativeInlineTableT &lhs, const NativeInlineTableT &rhs) {
    return !(lhs == rhs);
}


inline NativeInlineTableT *NativeInlineTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<NativeInlineTableT>(new NativeInlineTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void NativeInlineTable::UnPackTo(NativeInlineTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = a(); _o->a = _e; }
}

inline ::flatbuffers::Offset<NativeInlineTable> NativeInlineTable::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const NativeInlineTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateNativeInlineTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<NativeInlineTable> CreateNativeInlineTable(::flatbuffers::FlatBufferBuilder &_fbb, const NativeInlineTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const NativeInlineTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _a = _o->a;
  return CreateNativeInlineTable(
      _fbb,
      _a);
}


inline bool operator==(const TestNativeInlineTableT &lhs, const TestNativeInlineTableT &rhs) {
  return
      (lhs.t == rhs.t);
}

inline bool operator!=(const TestNativeInlineTableT &lhs, const TestNativeInlineTableT &rhs) {
    return !(lhs == rhs);
}


inline TestNativeInlineTableT *TestNativeInlineTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<TestNativeInlineTableT>(new TestNativeInlineTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TestNativeInlineTable::UnPackTo(TestNativeInlineTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = t(); if (_e) { _o->t.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->t[_i] = *flatbuffers::unique_ptr<NativeInlineTableT>(_e->Get(_i)->UnPack(_resolver)); } } else { _o->t.resize(0); } }
}

inline ::flatbuffers::Offset<TestNativeInlineTable> TestNativeInlineTable::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TestNativeInlineTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTestNativeInlineTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<TestNativeInlineTable> CreateTestNativeInlineTable(::flatbuffers::FlatBufferBuilder &_fbb, const TestNativeInlineTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const TestNativeInlineTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _t = _o->t.size() ? _fbb.CreateVector<::flatbuffers::Offset<NativeInlineTable>> (_o->t.size(), [](size_t i, _VectorArgs *__va) { return CreateNativeInlineTable(*__va->__fbb, &(__va->__o->t[i]), __va->__rehasher); }, &_va ) : 0;
  return CreateTestNativeInlineTable(
      _fbb,
      _t);
}

inline const ::flatbuffers::TypeTable *NativeInlineTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_INT, 0, -1 }
  };
  static const char * const names[] = {
    "a"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *TestNativeInlineTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_SEQUENCE, 1, 0 }
  };
  static const ::flatbuffers::TypeFunction type_refs[] = {
    NativeInlineTableTypeTable
  };
  static const char * const names[] = {
    "t"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

#endif  // FLATBUFFERS_GENERATED_NATIVEINLINETABLETEST_H_
