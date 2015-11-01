#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1411;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t587;
// System.Byte[]
struct ByteU5BU5D_t576;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m8526 (RijndaelManaged_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m8527 (RijndaelManaged_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m8528 (RijndaelManaged_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m8529 (RijndaelManaged_t1411 * __this, ByteU5BU5D_t576* ___rgbKey, ByteU5BU5D_t576* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m8530 (RijndaelManaged_t1411 * __this, ByteU5BU5D_t576* ___rgbKey, ByteU5BU5D_t576* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
