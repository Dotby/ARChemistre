#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SampleAppUIButton
struct SampleAppUIButton_t34;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// UnityEngine.Texture
struct Texture_t33;
// System.String
struct String_t;
// System.Action
struct Action_t14;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,UnityEngine.Texture)
extern "C" void SampleAppUIButton__ctor_m50 (SampleAppUIButton_t34 * __this, Rect_t32  ___rect, GUIStyle_t15 * ___style, Texture_t33 * ___buttonTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,System.String)
extern "C" void SampleAppUIButton__ctor_m51 (SampleAppUIButton_t34 * __this, Rect_t32  ___rect, GUIStyle_t15 * ___style, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::add_TappedOn(System.Action)
extern "C" void SampleAppUIButton_add_TappedOn_m52 (SampleAppUIButton_t34 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::remove_TappedOn(System.Action)
extern "C" void SampleAppUIButton_remove_TappedOn_m53 (SampleAppUIButton_t34 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::Draw()
extern "C" void SampleAppUIButton_Draw_m54 (SampleAppUIButton_t34 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
