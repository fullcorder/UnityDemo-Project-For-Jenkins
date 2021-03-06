﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1853;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12431_gshared (Comparison_1_t1853 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12431(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1853 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12431_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12432_gshared (Comparison_1_t1853 * __this, UIVertex_t153  ___x, UIVertex_t153  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12432(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1853 *, UIVertex_t153 , UIVertex_t153 , const MethodInfo*))Comparison_1_Invoke_m12432_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12433_gshared (Comparison_1_t1853 * __this, UIVertex_t153  ___x, UIVertex_t153  ___y, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12433(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1853 *, UIVertex_t153 , UIVertex_t153 , AsyncCallback_t141 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12433_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12434_gshared (Comparison_1_t1853 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12434(__this, ___result, method) (( int32_t (*) (Comparison_1_t1853 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12434_gshared)(__this, ___result, method)
