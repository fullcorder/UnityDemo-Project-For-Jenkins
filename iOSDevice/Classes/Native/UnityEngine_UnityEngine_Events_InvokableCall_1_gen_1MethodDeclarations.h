#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1775;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t260;
// System.Object[]
struct ObjectU5BU5D_t280;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11433_gshared (InvokableCall_1_t1775 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11433(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1775 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11433_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11434_gshared (InvokableCall_1_t1775 * __this, UnityAction_1_t260 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11434(__this, ___action, method) (( void (*) (InvokableCall_1_t1775 *, UnityAction_1_t260 *, const MethodInfo*))InvokableCall_1__ctor_m11434_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11435_gshared (InvokableCall_1_t1775 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11435(__this, ___args, method) (( void (*) (InvokableCall_1_t1775 *, ObjectU5BU5D_t280*, const MethodInfo*))InvokableCall_1_Invoke_m11435_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11436_gshared (InvokableCall_1_t1775 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11436(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1775 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11436_gshared)(__this, ___targetObj, ___method, method)
