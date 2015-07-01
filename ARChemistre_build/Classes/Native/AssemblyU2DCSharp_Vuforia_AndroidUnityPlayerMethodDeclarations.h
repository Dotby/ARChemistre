#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.AndroidUnityPlayer
struct AndroidUnityPlayer_t77;
// System.String
struct String_t;
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"

// System.Void Vuforia.AndroidUnityPlayer::.ctor()
extern "C" void AndroidUnityPlayer__ctor_m146 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibraries()
extern "C" void AndroidUnityPlayer_LoadNativeLibraries_m147 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializePlatform()
extern "C" void AndroidUnityPlayer_InitializePlatform_m148 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARUnity/InitError Vuforia.AndroidUnityPlayer::Start(System.String)
extern "C" int32_t AndroidUnityPlayer_Start_m149 (AndroidUnityPlayer_t77 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Update()
extern "C" void AndroidUnityPlayer_Update_m150 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnPause()
extern "C" void AndroidUnityPlayer_OnPause_m151 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnResume()
extern "C" void AndroidUnityPlayer_OnResume_m152 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnDestroy()
extern "C" void AndroidUnityPlayer_OnDestroy_m153 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Dispose()
extern "C" void AndroidUnityPlayer_Dispose_m154 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibrariesFromJava()
extern "C" void AndroidUnityPlayer_LoadNativeLibrariesFromJava_m155 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitAndroidPlatform()
extern "C" void AndroidUnityPlayer_InitAndroidPlatform_m156 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.AndroidUnityPlayer::InitQCAR(System.String)
extern "C" int32_t AndroidUnityPlayer_InitQCAR_m157 (AndroidUnityPlayer_t77 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializeSurface()
extern "C" void AndroidUnityPlayer_InitializeSurface_m158 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::ResetUnityScreenOrientation()
extern "C" void AndroidUnityPlayer_ResetUnityScreenOrientation_m159 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::CheckOrientation()
extern "C" void AndroidUnityPlayer_CheckOrientation_m160 (AndroidUnityPlayer_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
