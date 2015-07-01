#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t982;
struct GcScoreData_t982_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1099;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1099 * GcScoreData_ToScore_m6654 (GcScoreData_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t982_marshal(const GcScoreData_t982& unmarshaled, GcScoreData_t982_marshaled& marshaled);
void GcScoreData_t982_marshal_back(const GcScoreData_t982_marshaled& marshaled, GcScoreData_t982& unmarshaled);
void GcScoreData_t982_marshal_cleanup(GcScoreData_t982_marshaled& marshaled);
