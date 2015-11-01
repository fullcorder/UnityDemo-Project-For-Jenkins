#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t826;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t633;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t827;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t725;
// System.Security.Cryptography.Oid
struct Oid_t828;
// System.Byte[]
struct ByteU5BU5D_t576;
// System.Security.Cryptography.DSA
struct DSA_t634;
// System.Security.Cryptography.RSA
struct RSA_t627;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4218 (PublicKey_t826 * __this, X509Certificate_t633 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t827 * PublicKey_get_EncodedKeyValue_m4219 (PublicKey_t826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t827 * PublicKey_get_EncodedParameters_m4220 (PublicKey_t826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t725 * PublicKey_get_Key_m4221 (PublicKey_t826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t828 * PublicKey_get_Oid_m4222 (PublicKey_t826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t576* PublicKey_GetUnsignedBigInteger_m4223 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t634 * PublicKey_DecodeDSA_m4224 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___rawPublicKey, ByteU5BU5D_t576* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t627 * PublicKey_DecodeRSA_m4225 (Object_t * __this /* static, unused */, ByteU5BU5D_t576* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
