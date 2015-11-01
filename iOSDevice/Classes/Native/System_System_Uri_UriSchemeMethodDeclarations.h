#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m4816 (UriScheme_t925 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void UriScheme_t925_marshal(const UriScheme_t925& unmarshaled, UriScheme_t925_marshaled& marshaled);
extern "C" void UriScheme_t925_marshal_back(const UriScheme_t925_marshaled& marshaled, UriScheme_t925& unmarshaled);
extern "C" void UriScheme_t925_marshal_cleanup(UriScheme_t925_marshaled& marshaled);
