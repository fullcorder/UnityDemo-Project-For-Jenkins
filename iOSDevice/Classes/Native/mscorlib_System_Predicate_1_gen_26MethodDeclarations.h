#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t1954;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13960_gshared (Predicate_1_t1954 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m13960(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1954 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m13960_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13961_gshared (Predicate_1_t1954 * __this, Color32_t265  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m13961(__this, ___obj, method) (( bool (*) (Predicate_1_t1954 *, Color32_t265 , const MethodInfo*))Predicate_1_Invoke_m13961_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13962_gshared (Predicate_1_t1954 * __this, Color32_t265  ___obj, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m13962(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1954 *, Color32_t265 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m13962_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13963_gshared (Predicate_1_t1954 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m13963(__this, ___result, method) (( bool (*) (Predicate_1_t1954 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m13963_gshared)(__this, ___result, method)
