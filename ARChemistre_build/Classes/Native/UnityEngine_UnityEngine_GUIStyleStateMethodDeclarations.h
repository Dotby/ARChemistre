#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyleState
struct GUIStyleState_t144;
// UnityEngine.Texture2D
struct Texture2D_t51;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m6085 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m6086 (GUIStyleState_t144 * __this, GUIStyle_t15 * ___sourceStyle, IntPtr_t ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m6087 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m6088 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m6089 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::SetBackgroundInternal(UnityEngine.Texture2D)
extern "C" void GUIStyleState_SetBackgroundInternal_m6090 (GUIStyleState_t144 * __this, Texture2D_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t51 * GUIStyleState_GetBackgroundInternal_m6091 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
extern "C" Texture2D_t51 * GUIStyleState_get_background_m431 (GUIStyleState_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" void GUIStyleState_set_background_m423 (GUIStyleState_t144 * __this, Texture2D_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m6092 (GUIStyleState_t144 * __this, Color_t118 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m427 (GUIStyleState_t144 * __this, Color_t118  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
