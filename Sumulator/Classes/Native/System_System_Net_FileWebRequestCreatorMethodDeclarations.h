#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t808;
// System.Net.WebRequest
struct WebRequest_t771;
// System.Uri
struct Uri_t766;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4107 (FileWebRequestCreator_t808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t771 * FileWebRequestCreator_Create_m4108 (FileWebRequestCreator_t808 * __this, Uri_t766 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
