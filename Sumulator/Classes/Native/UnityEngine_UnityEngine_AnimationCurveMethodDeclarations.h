#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t441;
struct AnimationCurve_t441_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t528;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2532 (AnimationCurve_t441 * __this, KeyframeU5BU5D_t528* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2533 (AnimationCurve_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2534 (AnimationCurve_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2535 (AnimationCurve_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2536 (AnimationCurve_t441 * __this, KeyframeU5BU5D_t528* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t441_marshal(const AnimationCurve_t441& unmarshaled, AnimationCurve_t441_marshaled& marshaled);
extern "C" void AnimationCurve_t441_marshal_back(const AnimationCurve_t441_marshaled& marshaled, AnimationCurve_t441& unmarshaled);
extern "C" void AnimationCurve_t441_marshal_cleanup(AnimationCurve_t441_marshaled& marshaled);
