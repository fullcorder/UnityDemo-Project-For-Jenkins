#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t576;
// System.Security.Cryptography.RSA
struct RSA_t627;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t573;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t618;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m6114 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m6115 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___array1, ByteU5BU5D_t576* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t576* PKCS1_I2OSP_m6116 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_OS2IP_m6117 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_RSAEP_m6118 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, ByteU5BU5D_t576* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_RSASP1_m6119 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, ByteU5BU5D_t576* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_RSAVP1_m6120 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, ByteU5BU5D_t576* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_Encrypt_v15_m6121 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, RandomNumberGenerator_t573 * ___rng, ByteU5BU5D_t576* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t576* PKCS1_Sign_v15_m6122 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, HashAlgorithm_t618 * ___hash, ByteU5BU5D_t576* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m6123 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, HashAlgorithm_t618 * ___hash, ByteU5BU5D_t576* ___hashValue, ByteU5BU5D_t576* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m6124 (Object_t * __this /* static, unused */, RSA_t627 * ___rsa, HashAlgorithm_t618 * ___hash, ByteU5BU5D_t576* ___hashValue, ByteU5BU5D_t576* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t576* PKCS1_Encode_v15_m6125 (Object_t * __this /* static, unused */, HashAlgorithm_t618 * ___hash, ByteU5BU5D_t576* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
