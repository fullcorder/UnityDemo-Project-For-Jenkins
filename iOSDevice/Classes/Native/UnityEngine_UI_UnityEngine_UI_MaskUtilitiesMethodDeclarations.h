#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t158;
// UnityEngine.Component
struct Component_t267;
// UnityEngine.Transform
struct Transform_t189;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t157;
// UnityEngine.UI.IClippable
struct IClippable_t268;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t166;

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m771 (MaskUtilities_t158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m772 (Object_t * __this /* static, unused */, Component_t267 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m773 (Object_t * __this /* static, unused */, Component_t267 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t189 * MaskUtilities_FindRootSortOverrideCanvas_m774 (Object_t * __this /* static, unused */, Transform_t189 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m775 (Object_t * __this /* static, unused */, Transform_t189 * ___transform, Transform_t189 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t157 * MaskUtilities_GetRectMaskForClippable_m776 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m777 (Object_t * __this /* static, unused */, RectMask2D_t157 * ___clipper, List_1_t166 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
