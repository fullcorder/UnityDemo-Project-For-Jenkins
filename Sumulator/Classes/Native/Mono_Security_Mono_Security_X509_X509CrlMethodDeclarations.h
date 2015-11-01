#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t641;
// System.Byte[]
struct ByteU5BU5D_t576;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t635;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t640;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t633;
// System.Security.Cryptography.DSA
struct DSA_t634;
// System.Security.Cryptography.RSA
struct RSA_t627;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t725;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m3292 (X509Crl_t641 * __this, ByteU5BU5D_t576* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m3293 (X509Crl_t641 * __this, ByteU5BU5D_t576* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t635 * X509Crl_get_Extensions_m3294 (X509Crl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t576* X509Crl_get_Hash_m3295 (X509Crl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m3296 (X509Crl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t480  X509Crl_get_NextUpdate_m3297 (X509Crl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m3298 (X509Crl_t641 * __this, ByteU5BU5D_t576* ___array1, ByteU5BU5D_t576* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t640 * X509Crl_GetCrlEntry_m3299 (X509Crl_t641 * __this, X509Certificate_t633 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t640 * X509Crl_GetCrlEntry_m3300 (X509Crl_t641 * __this, ByteU5BU5D_t576* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m3301 (X509Crl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m3302 (X509Crl_t641 * __this, DSA_t634 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m3303 (X509Crl_t641 * __this, RSA_t627 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m3304 (X509Crl_t641 * __this, AsymmetricAlgorithm_t725 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
