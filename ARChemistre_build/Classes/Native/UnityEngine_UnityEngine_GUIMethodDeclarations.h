#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t140;
// UnityEngine.GUISkin
struct GUISkin_t16;
// UnityEngine.Material
struct Material_t116;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// UnityEngine.GUIContent
struct GUIContent_t508;
// UnityEngine.Texture
struct Texture_t33;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t161;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5889 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t31  GUI_get_nextScrollStepTime_m5890 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5891 (Object_t * __this /* static, unused */, DateTime_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m5892 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m5893 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m433 (Object_t * __this /* static, unused */, GUISkin_t16 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t16 * GUI_get_skin_m5894 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m5895 (Object_t * __this /* static, unused */, Color_t118 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t118  GUI_get_color_m5896 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5897 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
extern "C" Matrix4x4_t187  GUI_get_matrix_m5898 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
extern "C" void GUI_set_matrix_m5899 (Object_t * __this /* static, unused */, Matrix4x4_t187  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m538 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m479 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5900 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5901 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5902 (Object_t * __this /* static, unused */, Rect_t32 * ___position, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m508 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t33 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m5903 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t33 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t116 * GUI_get_blendMaterial_m5904 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t116 * GUI_get_blitMaterial_m5905 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m430 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5906 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m539 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m445 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m475 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t33 * ___image, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5907 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5908 (Object_t * __this /* static, unused */, Rect_t32 * ___position, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m5909 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, int32_t ___focusType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
extern "C" bool GUI_Toggle_m994 (Object_t * __this /* static, unused */, Rect_t32  ___position, bool ___value, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m477 (Object_t * __this /* static, unused */, Rect_t32  ___position, bool ___value, String_t* ___text, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m5910 (Object_t * __this /* static, unused */, Rect_t32  ___position, bool ___value, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m5911 (Object_t * __this /* static, unused */, Rect_t32  ___position, int32_t ___id, bool ___value, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m5912 (Object_t * __this /* static, unused */, Rect_t32 * ___position, int32_t ___id, bool ___value, GUIContent_t508 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single)
extern "C" float GUI_VerticalSlider_m990 (Object_t * __this /* static, unused */, Rect_t32  ___position, float ___value, float ___topValue, float ___bottomValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m5913 (Object_t * __this /* static, unused */, Rect_t32  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t15 * ___slider, GUIStyle_t15 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m5914 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m5915 (Object_t * __this /* static, unused */, Rect_t32  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m5916 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m5917 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t32  ___rect, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m5918 (Object_t * __this /* static, unused */, Rect_t32  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m5919 (Object_t * __this /* static, unused */, Rect_t32  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t15 * ___slider, GUIStyle_t15 * ___thumb, GUIStyle_t15 * ___leftButton, GUIStyle_t15 * ___rightButton, bool ___horiz, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m5920 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t508 * ___content, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m5921 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t20  GUI_BeginScrollView_m5922 (Object_t * __this /* static, unused */, Rect_t32  ___position, Vector2_t20  ___scrollPosition, Rect_t32  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t15 * ___horizontalScrollbar, GUIStyle_t15 * ___verticalScrollbar, GUIStyle_t15 * ___background, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m5923 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t32  GUI_Window_m537 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t32  ___clientRect, WindowFunction_t161 * ___func, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5924 (Object_t * __this /* static, unused */, WindowFunction_t161 * ___func, int32_t ___id, GUISkin_t16 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t15 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t32  GUI_DoWindow_m5925 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t32  ___clientRect, WindowFunction_t161 * ___func, GUIContent_t508 * ___title, GUIStyle_t15 * ___style, GUISkin_t16 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t32  GUI_INTERNAL_CALL_DoWindow_m5926 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t32 * ___clientRect, WindowFunction_t161 * ___func, GUIContent_t508 * ___title, GUIStyle_t15 * ___style, GUISkin_t16 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
