#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t812;
// System.Net.WebRequest
struct WebRequest_t771;
// System.Uri
struct Uri_t766;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4115 (HttpRequestCreator_t812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t771 * HttpRequestCreator_Create_m4116 (HttpRequestCreator_t812 * __this, Uri_t766 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
