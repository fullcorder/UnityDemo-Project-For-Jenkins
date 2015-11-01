#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1689;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1691;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m10345_gshared (ObjectPool_1_t1689 * __this, UnityAction_1_t1691 * ___actionOnGet, UnityAction_1_t1691 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m10345(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1689 *, UnityAction_1_t1691 *, UnityAction_1_t1691 *, const MethodInfo*))ObjectPool_1__ctor_m10345_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m10347_gshared (ObjectPool_1_t1689 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m10347(__this, method) (( int32_t (*) (ObjectPool_1_t1689 *, const MethodInfo*))ObjectPool_1_get_countAll_m10347_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m10349_gshared (ObjectPool_1_t1689 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m10349(__this, ___value, method) (( void (*) (ObjectPool_1_t1689 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10349_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m10351_gshared (ObjectPool_1_t1689 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m10351(__this, method) (( int32_t (*) (ObjectPool_1_t1689 *, const MethodInfo*))ObjectPool_1_get_countActive_m10351_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m10353_gshared (ObjectPool_1_t1689 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m10353(__this, method) (( int32_t (*) (ObjectPool_1_t1689 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10353_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m10355_gshared (ObjectPool_1_t1689 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m10355(__this, method) (( Object_t * (*) (ObjectPool_1_t1689 *, const MethodInfo*))ObjectPool_1_Get_m10355_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m10357_gshared (ObjectPool_1_t1689 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m10357(__this, ___element, method) (( void (*) (ObjectPool_1_t1689 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m10357_gshared)(__this, ___element, method)
