﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t699;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t707;
// System.Int32[]
struct Int32U5BU5D_t357;
// System.IAsyncResult
struct IAsyncResult_t140;
// System.AsyncCallback
struct AsyncCallback_t141;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m3859 (CertificateValidationCallback_t699 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m3860 (CertificateValidationCallback_t699 * __this, X509Certificate_t707 * ___certificate, Int32U5BU5D_t357* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t699(Il2CppObject* delegate, X509Certificate_t707 * ___certificate, Int32U5BU5D_t357* ___certificateErrors);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m3861 (CertificateValidationCallback_t699 * __this, X509Certificate_t707 * ___certificate, Int32U5BU5D_t357* ___certificateErrors, AsyncCallback_t141 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m3862 (CertificateValidationCallback_t699 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
