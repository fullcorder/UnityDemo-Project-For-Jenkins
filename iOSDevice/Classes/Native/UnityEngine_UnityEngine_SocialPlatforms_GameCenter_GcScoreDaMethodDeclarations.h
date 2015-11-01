#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t482;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t482 * GcScoreData_ToScore_m2690 (GcScoreData_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t471_marshal(const GcScoreData_t471& unmarshaled, GcScoreData_t471_marshaled& marshaled);
extern "C" void GcScoreData_t471_marshal_back(const GcScoreData_t471_marshaled& marshaled, GcScoreData_t471& unmarshaled);
extern "C" void GcScoreData_t471_marshal_cleanup(GcScoreData_t471_marshaled& marshaled);
