#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"

// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15882_gshared (InternalEnumerator_1_t2137 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15882(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2137 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15882_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15883_gshared (InternalEnumerator_1_t2137 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15883(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2137 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15883_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15884_gshared (InternalEnumerator_1_t2137 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15884(__this, method) (( void (*) (InternalEnumerator_1_t2137 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15884_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15885_gshared (InternalEnumerator_1_t2137 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15885(__this, method) (( bool (*) (InternalEnumerator_1_t2137 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15885_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern "C" TableRange_t996  InternalEnumerator_1_get_Current_m15886_gshared (InternalEnumerator_1_t2137 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15886(__this, method) (( TableRange_t996  (*) (InternalEnumerator_1_t2137 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15886_gshared)(__this, method)
