﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t842;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t836;
// Mono.Security.X509.X509Stores
struct X509Stores_t645;
// Mono.Security.X509.X509Store
struct X509Store_t643;
// System.Security.Cryptography.X509Certificates.StoreName
#include "System_System_Security_Cryptography_X509Certificates_StoreNa.h"
// System.Security.Cryptography.X509Certificates.StoreLocation
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"
// System.Security.Cryptography.X509Certificates.OpenFlags
#include "System_System_Security_Cryptography_X509Certificates_OpenFla.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m4377 (X509Store_t842 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C" X509Certificate2Collection_t836 * X509Store_get_Certificates_m4378 (X509Store_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C" X509Stores_t645 * X509Store_get_Factory_m4379 (X509Store_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C" X509Store_t643 * X509Store_get_Store_m4380 (X509Store_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C" void X509Store_Close_m4381 (X509Store_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C" void X509Store_Open_m4382 (X509Store_t842 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
