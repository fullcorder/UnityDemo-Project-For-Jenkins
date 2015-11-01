#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10574_gshared (InternalEnumerator_1_t1709 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10574(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1709 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10574_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10575_gshared (InternalEnumerator_1_t1709 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10575(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1709 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10575_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10576_gshared (InternalEnumerator_1_t1709 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10576(__this, method) (( void (*) (InternalEnumerator_1_t1709 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10576_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10577_gshared (InternalEnumerator_1_t1709 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10577(__this, method) (( bool (*) (InternalEnumerator_1_t1709 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10577_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t40  InternalEnumerator_1_get_Current_m10578_gshared (InternalEnumerator_1_t1709 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10578(__this, method) (( RaycastResult_t40  (*) (InternalEnumerator_1_t1709 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10578_gshared)(__this, method)
