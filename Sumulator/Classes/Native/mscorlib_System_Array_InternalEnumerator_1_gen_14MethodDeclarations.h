﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12336_gshared (InternalEnumerator_1_t1844 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12336(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1844 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12336_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12337_gshared (InternalEnumerator_1_t1844 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12337(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1844 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12337_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12338_gshared (InternalEnumerator_1_t1844 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12338(__this, method) (( void (*) (InternalEnumerator_1_t1844 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12338_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12339_gshared (InternalEnumerator_1_t1844 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12339(__this, method) (( bool (*) (InternalEnumerator_1_t1844 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12339_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t153  InternalEnumerator_1_get_Current_m12340_gshared (InternalEnumerator_1_t1844 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12340(__this, method) (( UIVertex_t153  (*) (InternalEnumerator_1_t1844 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12340_gshared)(__this, method)
