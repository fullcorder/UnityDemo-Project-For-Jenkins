#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11403_gshared (InternalEnumerator_1_t1772 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11403(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1772 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11403_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11404_gshared (InternalEnumerator_1_t1772 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11404(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1772 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11404_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11405_gshared (InternalEnumerator_1_t1772 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11405(__this, method) (( void (*) (InternalEnumerator_1_t1772 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11405_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11406_gshared (InternalEnumerator_1_t1772 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11406(__this, method) (( bool (*) (InternalEnumerator_1_t1772 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11406_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t296  InternalEnumerator_1_get_Current_m11407_gshared (InternalEnumerator_1_t1772 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11407(__this, method) (( RaycastHit2D_t296  (*) (InternalEnumerator_1_t1772 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11407_gshared)(__this, method)
