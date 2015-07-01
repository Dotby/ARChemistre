#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t980;
struct GcAchievementData_t980_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1098;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1098 * GcAchievementData_ToAchievement_m6653 (GcAchievementData_t980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t980_marshal(const GcAchievementData_t980& unmarshaled, GcAchievementData_t980_marshaled& marshaled);
void GcAchievementData_t980_marshal_back(const GcAchievementData_t980_marshaled& marshaled, GcAchievementData_t980& unmarshaled);
void GcAchievementData_t980_marshal_cleanup(GcAchievementData_t980_marshaled& marshaled);
