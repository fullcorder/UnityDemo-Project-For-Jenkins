#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t372;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m14527_gshared (Action_1_t372 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m14527(__this, ___object, ___method, method) (( void (*) (Action_1_t372 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m14527_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m2861_gshared (Action_1_t372 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2861(__this, ___obj, method) (( void (*) (Action_1_t372 *, bool, const MethodInfo*))Action_1_Invoke_m2861_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m14528_gshared (Action_1_t372 * __this, bool ___obj, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m14528(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t372 *, bool, AsyncCallback_t141 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m14528_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m14529_gshared (Action_1_t372 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m14529(__this, ___result, method) (( void (*) (Action_1_t372 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m14529_gshared)(__this, ___result, method)
