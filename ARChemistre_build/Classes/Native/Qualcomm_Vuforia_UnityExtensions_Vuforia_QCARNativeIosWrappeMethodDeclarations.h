#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNativeIosWrapper
struct QCARNativeIosWrapper_t764;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t480;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceInitCamera_m3500 (QCARNativeIosWrapper_t764 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceDeinitCamera_m3501 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStartCamera_m3502 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStopCamera_m3503 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceGetNumVideoModes_m3504 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_CameraDeviceGetVideoMode_m3505 (QCARNativeIosWrapper_t764 * __this, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSelectVideoMode_m3506 (QCARNativeIosWrapper_t764 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFlashTorchMode_m3507 (QCARNativeIosWrapper_t764 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFocusMode_m3508 (QCARNativeIosWrapper_t764 * __this, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetCameraConfiguration_m3509 (QCARNativeIosWrapper_t764 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetFrameFormat_m3510 (QCARNativeIosWrapper_t764 * __this, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetExists_m3511 (QCARNativeIosWrapper_t764 * __this, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetLoad_m3512 (QCARNativeIosWrapper_t764 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetNumTrackableType_m3513 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackablesOfType_m3514 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackableName_m3515 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetCreateTrackable_m3516 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetDestroyTrackable_m3517 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetHasReachedTrackableLimit_m3518 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_GetCameraThreadID_m3519 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderBuild_m3520 (QCARNativeIosWrapper_t764 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_FrameCounterGetBenchmarkingData_m3521 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStartScan_m3522 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStopScan_m3523 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m3524 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m3525 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetCreateVirtualButton_m3526 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetDestroyVirtualButton_m3527 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonGetId_m3528 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetNumVirtualButtons_m3529 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtons_m3530 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtonName_m3531 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t480 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetGetDimensions_m3532 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetSideLength_m3533 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetTopDiameter_m3534 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetBottomDiameter_m3535 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetSetSize_m3536 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetGetSize_m3537 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerStart_m3538 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ObjectTrackerStop()
extern "C" void QCARNativeIosWrapper_ObjectTrackerStop_m3539 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_ObjectTrackerCreateDataSet_m3540 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDestroyDataSet_m3541 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerActivateDataSet_m3542 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDeactivateDataSet_m3543 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m3544 (QCARNativeIosWrapper_t764 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerResetExtendedTracking_m3545 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerSetSize_m3546 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerStart_m3547 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::MarkerTrackerStop()
extern "C" void QCARNativeIosWrapper_MarkerTrackerStop_m3548 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerCreateMarker_m3549 (QCARNativeIosWrapper_t764 * __this, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerDestroyMarker_m3550 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitPlatformNative()
extern "C" void QCARNativeIosWrapper_InitPlatformNative_m3551 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_InitFrameState_m3552 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_DeinitFrameState_m3553 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_OnSurfaceChanged_m3554 (QCARNativeIosWrapper_t764 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnPause()
extern "C" void QCARNativeIosWrapper_OnPause_m3555 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnResume()
extern "C" void QCARNativeIosWrapper_OnResume_m3556 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_HasSurfaceBeenRecreated_m3557 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_UpdateQCAR_m3558 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererEnd()
extern "C" void QCARNativeIosWrapper_RendererEnd_m3559 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarGetBufferSize_m3560 (QCARNativeIosWrapper_t764 * __this, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_QcarAddCameraFrame_m3561 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererSetVideoBackgroundCfg_m3562 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundCfg_m3563 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3564 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_RendererSetVideoBackgroundTextureID_m3565 (QCARNativeIosWrapper_t764 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3566 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetHint_m3567 (QCARNativeIosWrapper_t764 * __this, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_GetProjectionGL_m3568 (QCARNativeIosWrapper_t764 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_SetApplicationEnvironment_m3569 (QCARNativeIosWrapper_t764 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_SetStateBufferSize_m3570 (QCARNativeIosWrapper_t764 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_SmartTerrainTrackerStart_m3571 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_SmartTerrainTrackerStop_m3572 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3573 (QCARNativeIosWrapper_t764 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerInitBuilder_m3574 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m3575 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3576 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3577 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m3578 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m3579 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m3580 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStart_m3581 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStop_m3582 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionIsReconstructing_m3583 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionReset_m3584 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_ReconstructionSetNavMeshPadding_m3585 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m3586 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionSetMaximumArea_m3587 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3588 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartInit_m3589 (QCARNativeIosWrapper_t764 * __this, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetInitState_m3590 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderDeinit_m3591 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartRecognition_m3592 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStop_m3593 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIScanlineColor_m3594 (QCARNativeIosWrapper_t764 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIPointColor_m3595 (QCARNativeIosWrapper_t764 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_TargetFinderUpdate_m3596 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetResults_m3597 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderEnableTracking_m3598 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_TargetFinderGetImageTargets_m3599 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_TargetFinderClearTrackables_m3600 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_TextTrackerStart_m3601 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerStop()
extern "C" void QCARNativeIosWrapper_TextTrackerStop_m3602 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TextTrackerSetRegionOfInterest_m3603 (QCARNativeIosWrapper_t764 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNativeIosWrapper_TextTrackerGetRegionOfInterest_m3604 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadWordList_m3605 (QCARNativeIosWrapper_t764 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordsFromFile_m3606 (QCARNativeIosWrapper_t764 * __this, String_t* ___path, int32_t ___storagetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordU_m3607 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordU_m3608 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListContainsWordU_m3609 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_WordListUnloadAllLists_m3610 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListSetFilterMode_m3611 (QCARNativeIosWrapper_t764 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterMode_m3612 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadFilterList_m3613 (QCARNativeIosWrapper_t764 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordToFilterListU_m3614 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordFromFilterListU_m3615 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_WordListClearFilterList_m3616 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterListWordCount_m3617 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_WordListGetFilterListWordU_m3618 (QCARNativeIosWrapper_t764 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterMask_m3619 (QCARNativeIosWrapper_t764 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterBoundingBoxes_m3620 (QCARNativeIosWrapper_t764 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerInitTracker_m3621 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerDeinitTracker_m3622 (QCARNativeIosWrapper_t764 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetEnabled_m3623 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetSensitivity_m3624 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetAreaRectangle_m3625 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_QcarInit_m3626 (QCARNativeIosWrapper_t764 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_QcarDeinit_m3627 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StartExtendedTracking_m3628 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StopExtendedTracking_m3629 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNativeIosWrapper_EyewearIsSupportedDeviceDetected_m3630 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSeeThru()
extern "C" bool QCARNativeIosWrapper_EyewearIsSeeThru_m3631 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_EyewearGetScreenOrientation_m3632 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoCapable_m3633 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoEnabled_m3634 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoGLOnly_m3635 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNativeIosWrapper_EyewearSetStereo_m3636 (QCARNativeIosWrapper_t764 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetDefaultSceneScale_m3637 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetProjectionMatrix_m3638 (QCARNativeIosWrapper_t764 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetMaxCount_m3639 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetUsedCount_m3640 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMIsProfileUsed_m3641 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetActiveProfile_m3642 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetActiveProfile_m3643 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetProjectionMatrix_m3644 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProjectionMatrix_m3645 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_EyewearCPMGetProfileName_m3646 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProfileName_m3647 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMClearProfile_m3648 (QCARNativeIosWrapper_t764 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorInit_m3649 (QCARNativeIosWrapper_t764 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m3650 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m3651 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m3652 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m3653 (QCARNativeIosWrapper_t764 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_smartTerrainTrackerStart_m3654 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_smartTerrainTrackerStop_m3655 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m3656 (Object_t * __this /* static, unused */, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerInitBuilder_m3657 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m3658 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m3659 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3660 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderAddReconstruction_m3661 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m3662 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3663 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStart_m3664 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStop_m3665 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionIsReconstructing_m3666 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionReset_m3667 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_reconstructionSetNavMeshPadding_m3668 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m3669 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionSetMaximumArea_m3670 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m3671 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceInitCamera_m3672 (Object_t * __this /* static, unused */, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceDeinitCamera_m3673 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStartCamera_m3674 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStopCamera_m3675 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceGetNumVideoModes_m3676 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_cameraDeviceGetVideoMode_m3677 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSelectVideoMode_m3678 (Object_t * __this /* static, unused */, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFlashTorchMode_m3679 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFocusMode_m3680 (Object_t * __this /* static, unused */, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3681 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetFrameFormat_m3682 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetExists_m3683 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetLoad_m3684 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetNumTrackableType_m3685 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackablesOfType_m3686 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackableName_m3687 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetCreateTrackable_m3688 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetDestroyTrackable_m3689 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetHasReachedTrackableLimit_m3690 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_getCameraThreadID_m3691 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderBuild_m3692 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_frameCounterGetBenchmarkingData_m3693 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStartScan_m3694 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStopScan_m3695 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3696 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_imageTargetBuilderGetTrackableSource_m3697 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_imageTargetCreateVirtualButton_m3698 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetDestroyVirtualButton_m3699 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonGetId_m3700 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetNumVirtualButtons_m3701 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtons_m3702 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtonName_m3703 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t480 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetGetDimensions_m3704 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetSideLength_m3705 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetTopDiameter_m3706 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetBottomDiameter_m3707 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetSetSize_m3708 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetGetSize_m3709 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerStart_m3710 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::objectTrackerStop()
extern "C" void QCARNativeIosWrapper_objectTrackerStop_m3711 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_objectTrackerCreateDataSet_m3712 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDestroyDataSet_m3713 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerActivateDataSet_m3714 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDeactivateDataSet_m3715 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerPersistExtendedTracking_m3716 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerResetExtendedTracking_m3717 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerSetSize_m3718 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_markerTrackerStart_m3719 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::markerTrackerStop()
extern "C" void QCARNativeIosWrapper_markerTrackerStop_m3720 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerCreateMarker_m3721 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerDestroyMarker_m3722 (Object_t * __this /* static, unused */, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initPlatformNative()
extern "C" void QCARNativeIosWrapper_initPlatformNative_m3723 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_initFrameState_m3724 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_deinitFrameState_m3725 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_onSurfaceChanged_m3726 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onPause()
extern "C" void QCARNativeIosWrapper_onPause_m3727 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onResume()
extern "C" void QCARNativeIosWrapper_onResume_m3728 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_hasSurfaceBeenRecreated_m3729 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_updateQCAR_m3730 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererEnd()
extern "C" void QCARNativeIosWrapper_rendererEnd_m3731 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarGetBufferSize_m3732 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_qcarAddCameraFrame_m3733 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererSetVideoBackgroundCfg_m3734 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundCfg_m3735 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3736 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_rendererSetVideoBackgroundTextureID_m3737 (Object_t * __this /* static, unused */, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m3738 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_qcarInit_m3739 (Object_t * __this /* static, unused */, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetHint_m3740 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_getProjectionGL_m3741 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_setApplicationEnvironment_m3742 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_setStateBufferSize_m3743 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartInit_m3744 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetInitState_m3745 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_targetFinderDeinit_m3746 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartRecognition_m3747 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStop_m3748 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIScanlineColor_m3749 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIPointColor_m3750 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_targetFinderUpdate_m3751 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetResults_m3752 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_targetFinderEnableTracking_m3753 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_targetFinderGetImageTargets_m3754 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_targetFinderClearTrackables_m3755 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_textTrackerStart_m3756 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::textTrackerStop()
extern "C" void QCARNativeIosWrapper_textTrackerStop_m3757 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_textTrackerSetRegionOfInterest_m3758 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_textTrackerGetRegionOfInterest_m3759 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadWordList_m3760 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordsFromFile_m3761 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordU_m3762 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordU_m3763 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListContainsWordU_m3764 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_wordListUnloadAllLists_m3765 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListSetFilterMode_m3766 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterMode_m3767 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordToFilterListU_m3768 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordFromFilterListU_m3769 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_wordListClearFilterList_m3770 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadFilterList_m3771 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterListWordCount_m3772 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_wordListGetFilterListWordU_m3773 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterMask_m3774 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterBoundingBoxes_m3775 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerInitTracker_m3776 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerDeinitTracker_m3777 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetEnabled_m3778 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetSensitivity_m3779 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetAreaRectangle_m3780 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_qcarDeinit_m3781 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_startExtendedTracking_m3782 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_stopExtendedTracking_m3783 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSupportedDeviceDetected()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSupportedDeviceDetected_m3784 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSeeThru()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSeeThru_m3785 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_eyewearGetScreenOrientation_m3786 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoCapable()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoCapable_m3787 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoEnabled()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoEnabled_m3788 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoGLOnly_m3789 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t QCARNativeIosWrapper_eyewearSetStereo_m3790 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetDefaultSceneScale_m3791 (Object_t * __this /* static, unused */, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetProjectionMatrix_m3792 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetMaxCount_m3793 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetUsedCount_m3794 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMIsProfileUsed_m3795 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetActiveProfile_m3796 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetActiveProfile_m3797 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetProjectionMatrix_m3798 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProjectionMatrix_m3799 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_eyewearCPMGetProfileName_m3800 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProfileName_m3801 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMClearProfile_m3802 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorInit_m3803 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m3804 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m3805 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m3806 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3807 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::.ctor()
extern "C" void QCARNativeIosWrapper__ctor_m3808 (QCARNativeIosWrapper_t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
