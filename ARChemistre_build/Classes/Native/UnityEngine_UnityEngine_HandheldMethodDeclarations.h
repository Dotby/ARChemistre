#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Handheld
struct Handheld_t1024;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FullScreenMovieControlMode
#include "UnityEngine_UnityEngine_FullScreenMovieControlMode.h"
// UnityEngine.FullScreenMovieScalingMode
#include "UnityEngine_UnityEngine_FullScreenMovieScalingMode.h"

// System.Boolean UnityEngine.Handheld::PlayFullScreenMovie(System.String,UnityEngine.Color,UnityEngine.FullScreenMovieControlMode,UnityEngine.FullScreenMovieScalingMode)
extern "C" bool Handheld_PlayFullScreenMovie_m707 (Object_t * __this /* static, unused */, String_t* ___path, Color_t118  ___bgColor, int32_t ___controlMode, int32_t ___scalingMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Handheld::INTERNAL_CALL_PlayFullScreenMovie(System.String,UnityEngine.Color&,UnityEngine.FullScreenMovieControlMode,UnityEngine.FullScreenMovieScalingMode)
extern "C" bool Handheld_INTERNAL_CALL_PlayFullScreenMovie_m6149 (Object_t * __this /* static, unused */, String_t* ___path, Color_t118 * ___bgColor, int32_t ___controlMode, int32_t ___scalingMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
