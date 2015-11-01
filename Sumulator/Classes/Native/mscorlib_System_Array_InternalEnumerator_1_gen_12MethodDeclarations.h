#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11972_gshared (InternalEnumerator_1_t1813 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11972(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1813 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11972_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11973_gshared (InternalEnumerator_1_t1813 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11973(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1813 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11973_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11974_gshared (InternalEnumerator_1_t1813 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11974(__this, method) (( void (*) (InternalEnumerator_1_t1813 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11974_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11975_gshared (InternalEnumerator_1_t1813 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11975(__this, method) (( bool (*) (InternalEnumerator_1_t1813 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11975_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t42  InternalEnumerator_1_get_Current_m11976_gshared (InternalEnumerator_1_t1813 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11976(__this, method) (( Vector3_t42  (*) (InternalEnumerator_1_t1813 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11976_gshared)(__this, method)
