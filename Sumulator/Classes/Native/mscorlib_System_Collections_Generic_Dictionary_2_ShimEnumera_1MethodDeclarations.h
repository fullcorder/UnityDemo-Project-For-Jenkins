#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1838;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1829;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12186_gshared (ShimEnumerator_t1838 * __this, Dictionary_2_t1829 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12186(__this, ___host, method) (( void (*) (ShimEnumerator_t1838 *, Dictionary_2_t1829 *, const MethodInfo*))ShimEnumerator__ctor_m12186_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12187_gshared (ShimEnumerator_t1838 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12187(__this, method) (( bool (*) (ShimEnumerator_t1838 *, const MethodInfo*))ShimEnumerator_MoveNext_m12187_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t937  ShimEnumerator_get_Entry_m12188_gshared (ShimEnumerator_t1838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12188(__this, method) (( DictionaryEntry_t937  (*) (ShimEnumerator_t1838 *, const MethodInfo*))ShimEnumerator_get_Entry_m12188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12189_gshared (ShimEnumerator_t1838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12189(__this, method) (( Object_t * (*) (ShimEnumerator_t1838 *, const MethodInfo*))ShimEnumerator_get_Key_m12189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12190_gshared (ShimEnumerator_t1838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12190(__this, method) (( Object_t * (*) (ShimEnumerator_t1838 *, const MethodInfo*))ShimEnumerator_get_Value_m12190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12191_gshared (ShimEnumerator_t1838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12191(__this, method) (( Object_t * (*) (ShimEnumerator_t1838 *, const MethodInfo*))ShimEnumerator_get_Current_m12191_gshared)(__this, method)
