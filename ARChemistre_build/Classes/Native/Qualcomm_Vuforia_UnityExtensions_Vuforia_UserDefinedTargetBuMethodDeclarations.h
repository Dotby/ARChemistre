#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
struct UserDefinedTargetBuildingAbstractBehaviour_t108;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t823;
// System.String
struct String_t;
// Vuforia.ImageTargetBuilder/FrameQuality
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::RegisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_RegisterEventHandler_m4532 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, Object_t * ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::UnregisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" bool UserDefinedTargetBuildingAbstractBehaviour_UnregisterEventHandler_m4533 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, Object_t * ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StartScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StartScanning_m4534 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::BuildNewTarget(System.String,System.Single)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_BuildNewTarget_m4535 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopScanning()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_StopScanning_m4536 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::SetFrameQuality(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_SetFrameQuality_m4537 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, int32_t ___frameQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Start()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Start_m4538 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::Update()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_Update_m4539 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnEnable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnEnable_m4540 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDisable()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDisable_m4541 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnDestroy()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnDestroy_m4542 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnQCARStarted()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnQCARStarted_m4543 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::OnPause(System.Boolean)
extern "C" void UserDefinedTargetBuildingAbstractBehaviour_OnPause_m4544 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.UserDefinedTargetBuildingAbstractBehaviour::.ctor()
extern "C" void UserDefinedTargetBuildingAbstractBehaviour__ctor_m616 (UserDefinedTargetBuildingAbstractBehaviour_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
