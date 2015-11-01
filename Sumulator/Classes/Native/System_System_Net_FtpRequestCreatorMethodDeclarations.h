#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t809;
// System.Net.WebRequest
struct WebRequest_t771;
// System.Uri
struct Uri_t766;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4109 (FtpRequestCreator_t809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t771 * FtpRequestCreator_Create_m4110 (FtpRequestCreator_t809 * __this, Uri_t766 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
