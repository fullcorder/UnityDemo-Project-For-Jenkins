﻿#pragma once
#include <stdint.h>
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t489;
// UnityEngine.Camera[]
struct CameraU5BU5D_t490;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t488  : public Object_t
{
};
struct SendMouseEvents_t488_StaticFields{
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t489* ___m_LastHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t489* ___m_MouseDownHit_5;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t489* ___m_CurrentHit_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t490* ___m_Cameras_7;
};
