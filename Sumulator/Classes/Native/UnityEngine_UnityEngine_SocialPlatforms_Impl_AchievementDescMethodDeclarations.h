﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t481;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t112;

// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m2724 (AchievementDescription_t481 * __this, String_t* ___id, String_t* ___title, Texture2D_t112 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C" String_t* AchievementDescription_ToString_m2725 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m2726 (AchievementDescription_t481 * __this, Texture2D_t112 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m2727 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m2728 (AchievementDescription_t481 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m2729 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m2730 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m2731 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m2732 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m2733 (AchievementDescription_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
