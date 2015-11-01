#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15223_gshared (InternalEnumerator_1_t2065 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15223(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2065 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15223_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15224_gshared (InternalEnumerator_1_t2065 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15224(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2065 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15224_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15225_gshared (InternalEnumerator_1_t2065 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15225(__this, method) (( void (*) (InternalEnumerator_1_t2065 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15225_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15226_gshared (InternalEnumerator_1_t2065 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15226(__this, method) (( bool (*) (InternalEnumerator_1_t2065 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15226_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern "C" HitInfo_t487  InternalEnumerator_1_get_Current_m15227_gshared (InternalEnumerator_1_t2065 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15227(__this, method) (( HitInfo_t487  (*) (InternalEnumerator_1_t2065 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15227_gshared)(__this, method)
