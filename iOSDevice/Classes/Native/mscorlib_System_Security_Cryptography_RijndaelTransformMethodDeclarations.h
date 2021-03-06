﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1412;
// System.Security.Cryptography.Rijndael
struct Rijndael_t763;
// System.Byte[]
struct ByteU5BU5D_t576;
// System.UInt32[]
struct UInt32U5BU5D_t582;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m8531 (RijndaelTransform_t1412 * __this, Rijndael_t763 * ___algo, bool ___encryption, ByteU5BU5D_t576* ___key, ByteU5BU5D_t576* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m8532 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m8533 (RijndaelTransform_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m8534 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___input, ByteU5BU5D_t576* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m8535 (RijndaelTransform_t1412 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m8536 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m8537 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m8538 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m8539 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m8540 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m8541 (RijndaelTransform_t1412 * __this, ByteU5BU5D_t576* ___indata, ByteU5BU5D_t576* ___outdata, UInt32U5BU5D_t582* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
