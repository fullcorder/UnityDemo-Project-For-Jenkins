#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2109;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2099;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15647_gshared (ShimEnumerator_t2109 * __this, Dictionary_2_t2099 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15647(__this, ___host, method) (( void (*) (ShimEnumerator_t2109 *, Dictionary_2_t2099 *, const MethodInfo*))ShimEnumerator__ctor_m15647_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15648_gshared (ShimEnumerator_t2109 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15648(__this, method) (( bool (*) (ShimEnumerator_t2109 *, const MethodInfo*))ShimEnumerator_MoveNext_m15648_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t937  ShimEnumerator_get_Entry_m15649_gshared (ShimEnumerator_t2109 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15649(__this, method) (( DictionaryEntry_t937  (*) (ShimEnumerator_t2109 *, const MethodInfo*))ShimEnumerator_get_Entry_m15649_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15650_gshared (ShimEnumerator_t2109 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15650(__this, method) (( Object_t * (*) (ShimEnumerator_t2109 *, const MethodInfo*))ShimEnumerator_get_Key_m15650_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15651_gshared (ShimEnumerator_t2109 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15651(__this, method) (( Object_t * (*) (ShimEnumerator_t2109 *, const MethodInfo*))ShimEnumerator_get_Value_m15651_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15652_gshared (ShimEnumerator_t2109 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15652(__this, method) (( Object_t * (*) (ShimEnumerator_t2109 *, const MethodInfo*))ShimEnumerator_get_Current_m15652_gshared)(__this, method)
