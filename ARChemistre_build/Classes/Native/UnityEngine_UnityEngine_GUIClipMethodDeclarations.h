#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIClip
struct GUIClip_t1016;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m6011 (Object_t * __this /* static, unused */, Rect_t32  ___screenRect, Vector2_t20  ___scrollOffset, Vector2_t20  ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m6012 (Object_t * __this /* static, unused */, Rect_t32 * ___screenRect, Vector2_t20 * ___scrollOffset, Vector2_t20 * ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m6013 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIClip::Unclip(UnityEngine.Vector2)
extern "C" Vector2_t20  GUIClip_Unclip_m6014 (Object_t * __this /* static, unused */, Vector2_t20  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_Unclip_Vector2_m6015 (Object_t * __this /* static, unused */, Vector2_t20 * ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_INTERNAL_CALL_Unclip_Vector2_m6016 (Object_t * __this /* static, unused */, Vector2_t20 * ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
extern "C" Matrix4x4_t187  GUIClip_GetMatrix_m6017 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void GUIClip_SetMatrix_m6018 (Object_t * __this /* static, unused */, Matrix4x4_t187  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_SetMatrix(UnityEngine.Matrix4x4&)
extern "C" void GUIClip_INTERNAL_CALL_SetMatrix_m6019 (Object_t * __this /* static, unused */, Matrix4x4_t187 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
