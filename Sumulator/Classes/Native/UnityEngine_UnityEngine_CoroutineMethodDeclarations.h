#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t148;
struct Coroutine_t148_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2030 (Coroutine_t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2031 (Coroutine_t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2032 (Coroutine_t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t148_marshal(const Coroutine_t148& unmarshaled, Coroutine_t148_marshaled& marshaled);
extern "C" void Coroutine_t148_marshal_back(const Coroutine_t148_marshaled& marshaled, Coroutine_t148& unmarshaled);
extern "C" void Coroutine_t148_marshal_cleanup(Coroutine_t148_marshaled& marshaled);
