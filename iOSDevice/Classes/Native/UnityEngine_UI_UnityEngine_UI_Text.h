#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t102;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t147;
// UnityEngine.Material
struct Material_t107;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t146;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t88  : public MaskableGraphic_t127
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t102 * ___m_FontData_26;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_27;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t147 * ___m_TextCache_28;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t147 * ___m_TextCacheForLayout_29;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_31;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t146* ___m_TempVerts_32;
};
struct Text_t88_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t107 * ___s_DefaultText_30;
};
