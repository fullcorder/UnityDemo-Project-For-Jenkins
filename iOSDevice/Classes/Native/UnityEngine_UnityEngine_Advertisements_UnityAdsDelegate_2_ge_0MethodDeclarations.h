#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t2027;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m14698_gshared (UnityAdsDelegate_2_t2027 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m14698(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2027 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m14698_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m14699_gshared (UnityAdsDelegate_2_t2027 * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m14699(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2027 *, Object_t *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m14699_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m14701_gshared (UnityAdsDelegate_2_t2027 * __this, Object_t * ___p1, bool ___p2, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m14701(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2027 *, Object_t *, bool, AsyncCallback_t141 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m14701_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m14703_gshared (UnityAdsDelegate_2_t2027 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m14703(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2027 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m14703_gshared)(__this, ___result, method)
