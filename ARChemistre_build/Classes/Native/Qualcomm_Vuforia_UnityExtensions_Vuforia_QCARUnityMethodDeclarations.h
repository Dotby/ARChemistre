#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARUnity
struct QCARUnity_t810;
// Vuforia.QCARUnity/QCARHint
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_QCARHint.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.QCARUnity::Deinit()
extern "C" void QCARUnity_Deinit_m565 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::IsRendererDirty()
extern "C" bool QCARUnity_IsRendererDirty_m4436 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(Vuforia.QCARUnity/QCARHint,System.Int32)
extern "C" bool QCARUnity_SetHint_m4437 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(System.Int32,System.Int32)
extern "C" bool QCARUnity_SetHint_m4438 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.QCARUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t187  QCARUnity_GetProjectionGL_m4439 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnPause()
extern "C" void QCARUnity_OnPause_m563 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnResume()
extern "C" void QCARUnity_OnResume_m564 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::SetRendererDirty()
extern "C" void QCARUnity_SetRendererDirty_m4440 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
