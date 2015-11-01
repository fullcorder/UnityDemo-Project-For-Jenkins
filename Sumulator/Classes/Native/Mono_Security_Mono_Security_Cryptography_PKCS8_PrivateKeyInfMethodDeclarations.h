#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t621;
// System.Byte[]
struct ByteU5BU5D_t576;
// System.Security.Cryptography.RSA
struct RSA_t627;
// System.Security.Cryptography.DSA
struct DSA_t634;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m3156 (PrivateKeyInfo_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m3157 (PrivateKeyInfo_t621 * __this, ByteU5BU5D_t576* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t576* PrivateKeyInfo_get_PrivateKey_m3158 (PrivateKeyInfo_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m3159 (PrivateKeyInfo_t621 * __this, ByteU5BU5D_t576* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t576* PrivateKeyInfo_RemoveLeadingZero_m3160 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t576* PrivateKeyInfo_Normalize_m3161 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t627 * PrivateKeyInfo_DecodeRSA_m3162 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t634 * PrivateKeyInfo_DecodeDSA_m3163 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___privateKey, DSAParameters_t737  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
