#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1788;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1778;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11566_gshared (ShimEnumerator_t1788 * __this, Dictionary_2_t1778 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11566(__this, ___host, method) (( void (*) (ShimEnumerator_t1788 *, Dictionary_2_t1778 *, const MethodInfo*))ShimEnumerator__ctor_m11566_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11567_gshared (ShimEnumerator_t1788 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11567(__this, method) (( bool (*) (ShimEnumerator_t1788 *, const MethodInfo*))ShimEnumerator_MoveNext_m11567_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t937  ShimEnumerator_get_Entry_m11568_gshared (ShimEnumerator_t1788 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11568(__this, method) (( DictionaryEntry_t937  (*) (ShimEnumerator_t1788 *, const MethodInfo*))ShimEnumerator_get_Entry_m11568_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11569_gshared (ShimEnumerator_t1788 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11569(__this, method) (( Object_t * (*) (ShimEnumerator_t1788 *, const MethodInfo*))ShimEnumerator_get_Key_m11569_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11570_gshared (ShimEnumerator_t1788 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11570(__this, method) (( Object_t * (*) (ShimEnumerator_t1788 *, const MethodInfo*))ShimEnumerator_get_Value_m11570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11571_gshared (ShimEnumerator_t1788 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11571(__this, method) (( Object_t * (*) (ShimEnumerator_t1788 *, const MethodInfo*))ShimEnumerator_get_Current_m11571_gshared)(__this, method)
