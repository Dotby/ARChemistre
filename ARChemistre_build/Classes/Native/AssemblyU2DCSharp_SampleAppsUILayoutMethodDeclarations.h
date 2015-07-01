#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SampleAppsUILayout
struct SampleAppsUILayout_t41;
// UnityEngine.Font
struct Font_t28;
// SampleAppUILabel
struct SampleAppUILabel_t39;
// System.String
struct String_t;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t37;
// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t42;
// System.String[]
struct StringU5BU5D_t43;
// SampleAppUIButton
struct SampleAppUIButton_t34;
// UnityEngine.Texture
struct Texture_t33;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppsUILayout::.ctor()
extern "C" void SampleAppsUILayout__ctor_m71 (SampleAppsUILayout_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font SampleAppsUILayout::get_StyleFont()
extern "C" Font_t28 * SampleAppsUILayout_get_StyleFont_m72 (SampleAppsUILayout_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::Draw()
extern "C" void SampleAppsUILayout_Draw_m73 (SampleAppsUILayout_t41 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddLabel(System.String)
extern "C" SampleAppUILabel_t39 * SampleAppsUILayout_AddLabel_m74 (SampleAppsUILayout_t41 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddGroupLabel(System.String)
extern "C" SampleAppUILabel_t39 * SampleAppsUILayout_AddGroupLabel_m75 (SampleAppsUILayout_t41 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSimpleButton(System.String)
extern "C" SampleAppUICheckButton_t37 * SampleAppsUILayout_AddSimpleButton_m76 (SampleAppsUILayout_t41 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t37 * SampleAppsUILayout_AddSlider_m77 (SampleAppsUILayout_t41 * __this, String_t* ___title, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider_Type2(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t37 * SampleAppsUILayout_AddSlider_Type2_m78 (SampleAppsUILayout_t41 * __this, String_t* ___title, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIRadioButton SampleAppsUILayout::AddToggleOptions(System.String[],System.Int32)
extern "C" SampleAppUIRadioButton_t42 * SampleAppsUILayout_AddToggleOptions_m79 (SampleAppsUILayout_t41 * __this, StringU5BU5D_t43* ___titleList, int32_t ___selectedId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(System.String,UnityEngine.Rect)
extern "C" SampleAppUIButton_t34 * SampleAppsUILayout_AddButton_m80 (SampleAppsUILayout_t41 * __this, String_t* ___title, Rect_t32  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(UnityEngine.Texture,UnityEngine.Rect)
extern "C" SampleAppUIButton_t34 * SampleAppsUILayout_AddButton_m81 (SampleAppsUILayout_t41 * __this, Texture_t33 * ___buttonTexture, Rect_t32  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::AddGap(System.Single)
extern "C" void SampleAppsUILayout_AddGap_m82 (SampleAppsUILayout_t41 * __this, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
