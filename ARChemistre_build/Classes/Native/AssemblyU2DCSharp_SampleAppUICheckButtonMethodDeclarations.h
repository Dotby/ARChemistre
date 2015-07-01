#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SampleAppUICheckButton
struct SampleAppUICheckButton_t37;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// System.Action`1<System.Boolean>
struct Action_1_t36;

// System.Void SampleAppUICheckButton::.ctor(System.Single,System.String,System.Boolean,UnityEngine.GUIStyle)
extern "C" void SampleAppUICheckButton__ctor_m55 (SampleAppUICheckButton_t37 * __this, float ___index, String_t* ___title, bool ___selected, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::add_TappedOn(System.Action`1<System.Boolean>)
extern "C" void SampleAppUICheckButton_add_TappedOn_m56 (SampleAppUICheckButton_t37 * __this, Action_1_t36 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::remove_TappedOn(System.Action`1<System.Boolean>)
extern "C" void SampleAppUICheckButton_remove_TappedOn_m57 (SampleAppUICheckButton_t37 * __this, Action_1_t36 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SampleAppUICheckButton::get_Title()
extern "C" String_t* SampleAppUICheckButton_get_Title_m58 (SampleAppUICheckButton_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::set_Title(System.String)
extern "C" void SampleAppUICheckButton_set_Title_m59 (SampleAppUICheckButton_t37 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUICheckButton::get_Width()
extern "C" float SampleAppUICheckButton_get_Width_m60 (SampleAppUICheckButton_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUICheckButton::get_Height()
extern "C" float SampleAppUICheckButton_get_Height_m61 (SampleAppUICheckButton_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::Enable(System.Boolean)
extern "C" void SampleAppUICheckButton_Enable_m62 (SampleAppUICheckButton_t37 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SampleAppUICheckButton::get_IsEnabled()
extern "C" bool SampleAppUICheckButton_get_IsEnabled_m63 (SampleAppUICheckButton_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::Draw()
extern "C" void SampleAppUICheckButton_Draw_m64 (SampleAppUICheckButton_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
