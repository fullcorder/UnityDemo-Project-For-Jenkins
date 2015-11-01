#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t166;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C" Rect_t145  Clipping_FindCullAndClipWorldRect_m1137 (Object_t * __this /* static, unused */, List_1_t166 * ___rectMaskParents, bool* ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C" Rect_t145  Clipping_RectIntersect_m1138 (Object_t * __this /* static, unused */, Rect_t145  ___a, Rect_t145  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
