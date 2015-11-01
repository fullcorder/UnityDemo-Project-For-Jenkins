#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14166_gshared (InternalEnumerator_1_t1968 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14166(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1968 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14166_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14167_gshared (InternalEnumerator_1_t1968 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14167(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1968 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14167_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14168_gshared (InternalEnumerator_1_t1968 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14168(__this, method) (( void (*) (InternalEnumerator_1_t1968 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14168_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14169_gshared (InternalEnumerator_1_t1968 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14169(__this, method) (( bool (*) (InternalEnumerator_1_t1968 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14169_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
extern "C" Vector4_t232  InternalEnumerator_1_get_Current_m14170_gshared (InternalEnumerator_1_t1968 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14170(__this, method) (( Vector4_t232  (*) (InternalEnumerator_1_t1968 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14170_gshared)(__this, method)
