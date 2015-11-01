﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1571;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t534;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1511;
// System.Reflection.Module
struct Module_t1164;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m9879 (UnitySerializationHolder_t1571 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m9880 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t534 * ___info, StreamingContext_t535  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m9881 (Object_t * __this /* static, unused */, DBNull_t1511 * ___instance, SerializationInfo_t534 * ___info, StreamingContext_t535  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m9882 (Object_t * __this /* static, unused */, Module_t1164 * ___instance, SerializationInfo_t534 * ___info, StreamingContext_t535  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m9883 (UnitySerializationHolder_t1571 * __this, SerializationInfo_t534 * ___info, StreamingContext_t535  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m9884 (UnitySerializationHolder_t1571 * __this, StreamingContext_t535  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
