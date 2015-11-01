#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t306;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1607_gshared (UnityAction_1_t306 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1607(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t306 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1607_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m11990_gshared (UnityAction_1_t306 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m11990(__this, ___arg0, method) (( void (*) (UnityAction_1_t306 *, bool, const MethodInfo*))UnityAction_1_Invoke_m11990_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m11991_gshared (UnityAction_1_t306 * __this, bool ___arg0, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m11991(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t306 *, bool, AsyncCallback_t141 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m11991_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m11992_gshared (UnityAction_1_t306 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m11992(__this, ___result, method) (( void (*) (UnityAction_1_t306 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m11992_gshared)(__this, ___result, method)
