#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t79;
// System.String
struct String_t;
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C" void IOSUnityPlayer__ctor_m164 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C" void IOSUnityPlayer_LoadNativeLibraries_m165 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C" void IOSUnityPlayer_InitializePlatform_m166 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern "C" int32_t IOSUnityPlayer_Start_m167 (IOSUnityPlayer_t79 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C" void IOSUnityPlayer_Update_m168 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C" void IOSUnityPlayer_Dispose_m169 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C" void IOSUnityPlayer_OnPause_m170 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C" void IOSUnityPlayer_OnResume_m171 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C" void IOSUnityPlayer_OnDestroy_m172 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C" void IOSUnityPlayer_InitializeSurface_m173 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C" void IOSUnityPlayer_SetUnityScreenOrientation_m174 (IOSUnityPlayer_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C" void IOSUnityPlayer_setPlatFormNative_m175 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.String)
extern "C" int32_t IOSUnityPlayer_initQCARiOS_m176 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C" void IOSUnityPlayer_setSurfaceOrientationiOS_m177 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
