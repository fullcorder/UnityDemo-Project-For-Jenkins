#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12831_gshared (InternalEnumerator_1_t1880 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12831(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1880 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12831_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12832_gshared (InternalEnumerator_1_t1880 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12832(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1880 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12832_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12833_gshared (InternalEnumerator_1_t1880 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12833(__this, method) (( void (*) (InternalEnumerator_1_t1880 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12833_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12834_gshared (InternalEnumerator_1_t1880 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12834(__this, method) (( bool (*) (InternalEnumerator_1_t1880 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12834_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
extern "C" UICharInfo_t327  InternalEnumerator_1_get_Current_m12835_gshared (InternalEnumerator_1_t1880 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12835(__this, method) (( UICharInfo_t327  (*) (InternalEnumerator_1_t1880 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12835_gshared)(__this, method)
