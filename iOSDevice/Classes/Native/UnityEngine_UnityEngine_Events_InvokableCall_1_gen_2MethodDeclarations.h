﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t1799;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1798;
// System.Object[]
struct ObjectU5BU5D_t280;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11774_gshared (InvokableCall_1_t1799 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11774(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1799 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11774_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11775_gshared (InvokableCall_1_t1799 * __this, UnityAction_1_t1798 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11775(__this, ___action, method) (( void (*) (InvokableCall_1_t1799 *, UnityAction_1_t1798 *, const MethodInfo*))InvokableCall_1__ctor_m11775_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11776_gshared (InvokableCall_1_t1799 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11776(__this, ___args, method) (( void (*) (InvokableCall_1_t1799 *, ObjectU5BU5D_t280*, const MethodInfo*))InvokableCall_1_Invoke_m11776_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11777_gshared (InvokableCall_1_t1799 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11777(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1799 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11777_gshared)(__this, ___targetObj, ___method, method)
