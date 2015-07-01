#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t1004;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t142;
// UnityEngine.GUIContent
struct GUIContent_t508;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t143;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m441 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m5927 (Object_t * __this /* static, unused */, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m439 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m438 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5928 (Object_t * __this /* static, unused */, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m442 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m434 (Object_t * __this /* static, unused */, Rect_t32  ___screenRect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m5929 (Object_t * __this /* static, unused */, Rect_t32  ___screenRect, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m444 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t20  GUILayout_BeginScrollView_m437 (Object_t * __this /* static, unused */, Vector2_t20  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t20  GUILayout_BeginScrollView_m5930 (Object_t * __this /* static, unused */, Vector2_t20  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t15 * ___horizontalScrollbar, GUIStyle_t15 * ___verticalScrollbar, GUIStyle_t15 * ___background, GUILayoutOptionU5BU5D_t142* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m443 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m5931 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t143 * GUILayout_Width_m435 (Object_t * __this /* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t143 * GUILayout_Height_m436 (Object_t * __this /* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t143 * GUILayout_ExpandWidth_m5932 (Object_t * __this /* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t143 * GUILayout_ExpandHeight_m5933 (Object_t * __this /* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
