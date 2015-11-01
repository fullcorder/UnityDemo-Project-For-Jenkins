﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1040;
// System.Text.StringBuilder
struct StringBuilder_t276;

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m6210 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m6211 (Object_t * __this /* static, unused */, ASN1_t1040 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m6212 (Object_t * __this /* static, unused */, ASN1_t1040 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m6213 (Object_t * __this /* static, unused */, StringBuilder_t276 * ___sb, ASN1_t1040 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
