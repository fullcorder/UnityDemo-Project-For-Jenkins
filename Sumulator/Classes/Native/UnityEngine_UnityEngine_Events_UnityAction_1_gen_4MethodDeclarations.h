#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1691;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m10374_gshared (UnityAction_1_t1691 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m10374(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1691 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m10374_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m10375_gshared (UnityAction_1_t1691 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m10375(__this, ___arg0, method) (( void (*) (UnityAction_1_t1691 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m10375_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m10376_gshared (UnityAction_1_t1691 * __this, Object_t * ___arg0, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m10376(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1691 *, Object_t *, AsyncCallback_t141 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m10376_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m10377_gshared (UnityAction_1_t1691 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m10377(__this, ___result, method) (( void (*) (UnityAction_1_t1691 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m10377_gshared)(__this, ___result, method)
