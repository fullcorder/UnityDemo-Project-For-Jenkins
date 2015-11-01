#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1762;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1750;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11260_gshared (ShimEnumerator_t1762 * __this, Dictionary_2_t1750 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11260(__this, ___host, method) (( void (*) (ShimEnumerator_t1762 *, Dictionary_2_t1750 *, const MethodInfo*))ShimEnumerator__ctor_m11260_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11261_gshared (ShimEnumerator_t1762 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11261(__this, method) (( bool (*) (ShimEnumerator_t1762 *, const MethodInfo*))ShimEnumerator_MoveNext_m11261_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t937  ShimEnumerator_get_Entry_m11262_gshared (ShimEnumerator_t1762 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11262(__this, method) (( DictionaryEntry_t937  (*) (ShimEnumerator_t1762 *, const MethodInfo*))ShimEnumerator_get_Entry_m11262_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11263_gshared (ShimEnumerator_t1762 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11263(__this, method) (( Object_t * (*) (ShimEnumerator_t1762 *, const MethodInfo*))ShimEnumerator_get_Key_m11263_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11264_gshared (ShimEnumerator_t1762 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11264(__this, method) (( Object_t * (*) (ShimEnumerator_t1762 *, const MethodInfo*))ShimEnumerator_get_Value_m11264_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11265_gshared (ShimEnumerator_t1762 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11265(__this, method) (( Object_t * (*) (ShimEnumerator_t1762 *, const MethodInfo*))ShimEnumerator_get_Current_m11265_gshared)(__this, method)
