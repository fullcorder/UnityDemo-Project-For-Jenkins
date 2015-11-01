#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t302;
struct WaitForSeconds_t302_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1580 (WaitForSeconds_t302 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t302_marshal(const WaitForSeconds_t302& unmarshaled, WaitForSeconds_t302_marshaled& marshaled);
extern "C" void WaitForSeconds_t302_marshal_back(const WaitForSeconds_t302_marshaled& marshaled, WaitForSeconds_t302& unmarshaled);
extern "C" void WaitForSeconds_t302_marshal_cleanup(WaitForSeconds_t302_marshaled& marshaled);
