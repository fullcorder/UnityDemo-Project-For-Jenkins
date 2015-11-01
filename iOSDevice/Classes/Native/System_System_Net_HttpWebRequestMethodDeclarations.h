#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t682;
// System.Uri
struct Uri_t766;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Net.ServicePoint
struct ServicePoint_t767;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4118 (HttpWebRequest_t682 * __this, Uri_t766 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4119 (HttpWebRequest_t682 * __this, SerializationInfo_t534 * ___serializationInfo, StreamingContext_t535  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4120 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4121 (HttpWebRequest_t682 * __this, SerializationInfo_t534 * ___serializationInfo, StreamingContext_t535  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t766 * HttpWebRequest_get_Address_m3968 (HttpWebRequest_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t767 * HttpWebRequest_get_ServicePoint_m3972 (HttpWebRequest_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t767 * HttpWebRequest_GetServicePoint_m4122 (HttpWebRequest_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4123 (HttpWebRequest_t682 * __this, SerializationInfo_t534 * ___serializationInfo, StreamingContext_t535  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
