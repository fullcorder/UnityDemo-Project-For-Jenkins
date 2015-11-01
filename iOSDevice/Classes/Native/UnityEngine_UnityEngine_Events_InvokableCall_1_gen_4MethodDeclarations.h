#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t1895;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t1894;
// System.Object[]
struct ObjectU5BU5D_t280;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13040_gshared (InvokableCall_1_t1895 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13040(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1895 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13040_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13041_gshared (InvokableCall_1_t1895 * __this, UnityAction_1_t1894 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13041(__this, ___action, method) (( void (*) (InvokableCall_1_t1895 *, UnityAction_1_t1894 *, const MethodInfo*))InvokableCall_1__ctor_m13041_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13042_gshared (InvokableCall_1_t1895 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13042(__this, ___args, method) (( void (*) (InvokableCall_1_t1895 *, ObjectU5BU5D_t280*, const MethodInfo*))InvokableCall_1_Invoke_m13042_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13043_gshared (InvokableCall_1_t1895 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13043(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1895 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13043_gshared)(__this, ___targetObj, ___method, method)
