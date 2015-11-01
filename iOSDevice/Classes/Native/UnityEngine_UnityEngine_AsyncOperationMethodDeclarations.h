#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t361;
struct AsyncOperation_t361_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2340 (AsyncOperation_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2341 (AsyncOperation_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2342 (AsyncOperation_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t361_marshal(const AsyncOperation_t361& unmarshaled, AsyncOperation_t361_marshaled& marshaled);
extern "C" void AsyncOperation_t361_marshal_back(const AsyncOperation_t361_marshaled& marshaled, AsyncOperation_t361& unmarshaled);
extern "C" void AsyncOperation_t361_marshal_cleanup(AsyncOperation_t361_marshaled& marshaled);
