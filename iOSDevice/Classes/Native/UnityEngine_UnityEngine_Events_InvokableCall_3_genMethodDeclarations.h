﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t2069;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t280;

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_3__ctor_m15240_gshared (InvokableCall_3_t2069 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_3__ctor_m15240(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_3_t2069 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m15240_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_3_Invoke_m15241_gshared (InvokableCall_3_t2069 * __this, ObjectU5BU5D_t280* ___args, const MethodInfo* method);
#define InvokableCall_3_Invoke_m15241(__this, ___args, method) (( void (*) (InvokableCall_3_t2069 *, ObjectU5BU5D_t280*, const MethodInfo*))InvokableCall_3_Invoke_m15241_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m15242_gshared (InvokableCall_3_t2069 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_3_Find_m15242(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_3_t2069 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m15242_gshared)(__this, ___targetObj, ___method, method)
