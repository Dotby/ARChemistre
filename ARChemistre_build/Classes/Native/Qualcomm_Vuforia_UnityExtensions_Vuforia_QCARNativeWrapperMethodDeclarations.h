#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNativeWrapper
struct QCARNativeWrapper_t766;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t480;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceInitCamera_m3964 (QCARNativeWrapper_t766 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceDeinitCamera_m3965 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceStartCamera_m3966 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceStopCamera_m3967 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeWrapper_CameraDeviceGetNumVideoModes_m3968 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeWrapper_CameraDeviceGetVideoMode_m3969 (QCARNativeWrapper_t766 * __this, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSelectVideoMode_m3970 (QCARNativeWrapper_t766 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetFlashTorchMode_m3971 (QCARNativeWrapper_t766 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetFocusMode_m3972 (QCARNativeWrapper_t766 * __this, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetCameraConfiguration_m3973 (QCARNativeWrapper_t766 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarSetFrameFormat_m3974 (QCARNativeWrapper_t766 * __this, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetExists_m3975 (QCARNativeWrapper_t766 * __this, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetLoad_m3976 (QCARNativeWrapper_t766 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetGetNumTrackableType_m3977 (QCARNativeWrapper_t766 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetGetTrackablesOfType_m3978 (QCARNativeWrapper_t766 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetGetTrackableName_m3979 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetCreateTrackable_m3980 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetDestroyTrackable_m3981 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetHasReachedTrackableLimit_m3982 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::GetCameraThreadID()
extern "C" int32_t QCARNativeWrapper_GetCameraThreadID_m3983 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_ImageTargetBuilderBuild_m3984 (QCARNativeWrapper_t766 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeWrapper_FrameCounterGetBenchmarkingData_m3985 (QCARNativeWrapper_t766 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNativeWrapper_ImageTargetBuilderStartScan_m3986 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNativeWrapper_ImageTargetBuilderStopScan_m3987 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeWrapper_ImageTargetBuilderGetFrameQuality_m3988 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeWrapper_ImageTargetBuilderGetTrackableSource_m3989 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ImageTargetCreateVirtualButton_m3990 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetDestroyVirtualButton_m3991 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_VirtualButtonGetId_m3992 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetNumVirtualButtons_m3993 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetVirtualButtons_m3994 (QCARNativeWrapper_t766 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetVirtualButtonName_m3995 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t480 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_CylinderTargetGetDimensions_m3996 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetSideLength_m3997 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetTopDiameter_m3998 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetBottomDiameter_m3999 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTargetSetSize_m4000 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTargetGetSize_m4001 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNativeWrapper_ObjectTrackerStart_m4002 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ObjectTrackerStop()
extern "C" void QCARNativeWrapper_ObjectTrackerStop_m4003 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeWrapper_ObjectTrackerCreateDataSet_m4004 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerDestroyDataSet_m4005 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerActivateDataSet_m4006 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerDeactivateDataSet_m4007 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerPersistExtendedTracking_m4008 (QCARNativeWrapper_t766 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeWrapper_ObjectTrackerResetExtendedTracking_m4009 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeWrapper_MarkerSetSize_m4010 (QCARNativeWrapper_t766 * __this, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNativeWrapper_MarkerTrackerStart_m4011 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::MarkerTrackerStop()
extern "C" void QCARNativeWrapper_MarkerTrackerStop_m4012 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_MarkerTrackerCreateMarker_m4013 (QCARNativeWrapper_t766 * __this, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeWrapper_MarkerTrackerDestroyMarker_m4014 (QCARNativeWrapper_t766 * __this, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::InitPlatformNative()
extern "C" void QCARNativeWrapper_InitPlatformNative_m4015 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_InitFrameState_m4016 (QCARNativeWrapper_t766 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_DeinitFrameState_m4017 (QCARNativeWrapper_t766 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_OnSurfaceChanged_m4018 (QCARNativeWrapper_t766 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnPause()
extern "C" void QCARNativeWrapper_OnPause_m4019 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnResume()
extern "C" void QCARNativeWrapper_OnResume_m4020 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNativeWrapper_HasSurfaceBeenRecreated_m4021 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_UpdateQCAR_m4022 (QCARNativeWrapper_t766 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererEnd()
extern "C" void QCARNativeWrapper_RendererEnd_m4023 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarGetBufferSize_m4024 (QCARNativeWrapper_t766 * __this, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_QcarAddCameraFrame_m4025 (QCARNativeWrapper_t766 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererSetVideoBackgroundCfg_m4026 (QCARNativeWrapper_t766 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererGetVideoBackgroundCfg_m4027 (QCARNativeWrapper_t766 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererGetVideoBackgroundTextureInfo_m4028 (QCARNativeWrapper_t766 * __this, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeWrapper_RendererSetVideoBackgroundTextureID_m4029 (QCARNativeWrapper_t766 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m4030 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarSetHint_m4031 (QCARNativeWrapper_t766 * __this, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_GetProjectionGL_m4032 (QCARNativeWrapper_t766 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_SetApplicationEnvironment_m4033 (QCARNativeWrapper_t766 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNativeWrapper_SetStateBufferSize_m4034 (QCARNativeWrapper_t766 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNativeWrapper_SmartTerrainTrackerStart_m4035 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNativeWrapper_SmartTerrainTrackerStop_m4036 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m4037 (QCARNativeWrapper_t766 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerInitBuilder_m4038 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerDeinitBuilder_m4039 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m4040 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m4041 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderAddReconstruction_m4042 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m4043 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m4044 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionStart_m4045 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionStop_m4046 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionIsReconstructing_m4047 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionReset_m4048 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeWrapper_ReconstructionSetNavMeshPadding_m4049 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m4050 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionSetMaximumArea_m4051 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4052 (QCARNativeWrapper_t766 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeWrapper_TargetFinderStartInit_m4053 (QCARNativeWrapper_t766 * __this, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNativeWrapper_TargetFinderGetInitState_m4054 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNativeWrapper_TargetFinderDeinit_m4055 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNativeWrapper_TargetFinderStartRecognition_m4056 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStop()
extern "C" int32_t QCARNativeWrapper_TargetFinderStop_m4057 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_TargetFinderSetUIScanlineColor_m4058 (QCARNativeWrapper_t766 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_TargetFinderSetUIPointColor_m4059 (QCARNativeWrapper_t766 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeWrapper_TargetFinderUpdate_m4060 (QCARNativeWrapper_t766 * __this, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_TargetFinderGetResults_m4061 (QCARNativeWrapper_t766 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_TargetFinderEnableTracking_m4062 (QCARNativeWrapper_t766 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeWrapper_TargetFinderGetImageTargets_m4063 (QCARNativeWrapper_t766 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderClearTrackables()
extern "C" void QCARNativeWrapper_TargetFinderClearTrackables_m4064 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TextTrackerStart()
extern "C" int32_t QCARNativeWrapper_TextTrackerStart_m4065 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TextTrackerStop()
extern "C" void QCARNativeWrapper_TextTrackerStop_m4066 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_TextTrackerSetRegionOfInterest_m4067 (QCARNativeWrapper_t766 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNativeWrapper_TextTrackerGetRegionOfInterest_m4068 (QCARNativeWrapper_t766 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListLoadWordList_m4069 (QCARNativeWrapper_t766 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListAddWordsFromFile_m4070 (QCARNativeWrapper_t766 * __this, String_t* ___path, int32_t ___storagetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListAddWordU_m4071 (QCARNativeWrapper_t766 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListRemoveWordU_m4072 (QCARNativeWrapper_t766 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListContainsWordU_m4073 (QCARNativeWrapper_t766 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNativeWrapper_WordListUnloadAllLists_m4074 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListSetFilterMode_m4075 (QCARNativeWrapper_t766 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNativeWrapper_WordListGetFilterMode_m4076 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListLoadFilterList_m4077 (QCARNativeWrapper_t766 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListAddWordToFilterListU_m4078 (QCARNativeWrapper_t766 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListRemoveWordFromFilterListU_m4079 (QCARNativeWrapper_t766 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListClearFilterList()
extern "C" int32_t QCARNativeWrapper_WordListClearFilterList_m4080 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNativeWrapper_WordListGetFilterListWordCount_m4081 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_WordListGetFilterListWordU_m4082 (QCARNativeWrapper_t766 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordGetLetterMask_m4083 (QCARNativeWrapper_t766 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordGetLetterBoundingBoxes_m4084 (QCARNativeWrapper_t766 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_TrackerManagerInitTracker_m4085 (QCARNativeWrapper_t766 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_TrackerManagerDeinitTracker_m4086 (QCARNativeWrapper_t766 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetEnabled_m4087 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetSensitivity_m4088 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetAreaRectangle_m4089 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarInit(System.String)
extern "C" int32_t QCARNativeWrapper_QcarInit_m4090 (QCARNativeWrapper_t766 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarDeinit()
extern "C" int32_t QCARNativeWrapper_QcarDeinit_m4091 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_StartExtendedTracking_m4092 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_StopExtendedTracking_m4093 (QCARNativeWrapper_t766 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNativeWrapper_EyewearIsSupportedDeviceDetected_m4094 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsSeeThru()
extern "C" bool QCARNativeWrapper_EyewearIsSeeThru_m4095 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNativeWrapper_EyewearGetScreenOrientation_m4096 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNativeWrapper_EyewearIsStereoCapable_m4097 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNativeWrapper_EyewearIsStereoEnabled_m4098 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNativeWrapper_EyewearIsStereoGLOnly_m4099 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNativeWrapper_EyewearSetStereo_m4100 (QCARNativeWrapper_t766 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_EyewearGetDefaultSceneScale_m4101 (QCARNativeWrapper_t766 * __this, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_EyewearGetProjectionMatrix_m4102 (QCARNativeWrapper_t766 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetMaxCount_m4103 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetUsedCount_m4104 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMIsProfileUsed_m4105 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetActiveProfile_m4106 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMSetActiveProfile_m4107 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetProjectionMatrix_m4108 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearCPMSetProjectionMatrix_m4109 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_EyewearCPMGetProfileName_m4110 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearCPMSetProfileName_m4111 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMClearProfile_m4112 (QCARNativeWrapper_t766 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorInit_m4113 (QCARNativeWrapper_t766 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m4114 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m4115 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorIsStereoStretched_m4116 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m4117 (QCARNativeWrapper_t766 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceInitCamera_m4118 (Object_t * __this /* static, unused */, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceDeinitCamera_m4119 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceStartCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceStartCamera_m4120 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceStopCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceStopCamera_m4121 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeWrapper_cameraDeviceGetNumVideoModes_m4122 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeWrapper_cameraDeviceGetVideoMode_m4123 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSelectVideoMode_m4124 (Object_t * __this /* static, unused */, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetFlashTorchMode_m4125 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetFocusMode_m4126 (Object_t * __this /* static, unused */, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetCameraConfiguration_m4127 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarSetFrameFormat_m4128 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetExists_m4129 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetLoad_m4130 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetGetNumTrackableType_m4131 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetGetTrackablesOfType_m4132 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetGetTrackableName_m4133 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetCreateTrackable_m4134 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetDestroyTrackable_m4135 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetHasReachedTrackableLimit_m4136 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::getCameraThreadID()
extern "C" int32_t QCARNativeWrapper_getCameraThreadID_m4137 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_imageTargetBuilderBuild_m4138 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeWrapper_frameCounterGetBenchmarkingData_m4139 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::imageTargetBuilderStartScan()
extern "C" void QCARNativeWrapper_imageTargetBuilderStartScan_m4140 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::imageTargetBuilderStopScan()
extern "C" void QCARNativeWrapper_imageTargetBuilderStopScan_m4141 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeWrapper_imageTargetBuilderGetFrameQuality_m4142 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeWrapper_imageTargetBuilderGetTrackableSource_m4143 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_imageTargetCreateVirtualButton_m4144 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetDestroyVirtualButton_m4145 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_virtualButtonGetId_m4146 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetGetNumVirtualButtons_m4147 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetGetVirtualButtons_m4148 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_imageTargetGetVirtualButtonName_m4149 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t480 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_cylinderTargetGetDimensions_m4150 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetSideLength_m4151 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetTopDiameter_m4152 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetBottomDiameter_m4153 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTargetSetSize_m4154 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTargetGetSize_m4155 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerStart()
extern "C" int32_t QCARNativeWrapper_objectTrackerStart_m4156 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::objectTrackerStop()
extern "C" void QCARNativeWrapper_objectTrackerStop_m4157 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeWrapper_objectTrackerCreateDataSet_m4158 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerDestroyDataSet_m4159 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerActivateDataSet_m4160 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerDeactivateDataSet_m4161 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeWrapper_objectTrackerPersistExtendedTracking_m4162 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeWrapper_objectTrackerResetExtendedTracking_m4163 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeWrapper_markerSetSize_m4164 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerStart()
extern "C" int32_t QCARNativeWrapper_markerTrackerStart_m4165 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::markerTrackerStop()
extern "C" void QCARNativeWrapper_markerTrackerStop_m4166 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_markerTrackerCreateMarker_m4167 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::initPlatformNative()
extern "C" void QCARNativeWrapper_initPlatformNative_m4168 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeWrapper_markerTrackerDestroyMarker_m4169 (Object_t * __this /* static, unused */, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::initFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_initFrameState_m4170 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::deinitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_deinitFrameState_m4171 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_onSurfaceChanged_m4172 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onPause()
extern "C" void QCARNativeWrapper_onPause_m4173 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onResume()
extern "C" void QCARNativeWrapper_onResume_m4174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::hasSurfaceBeenRecreated()
extern "C" bool QCARNativeWrapper_hasSurfaceBeenRecreated_m4175 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_updateQCAR_m4176 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererEnd()
extern "C" void QCARNativeWrapper_rendererEnd_m4177 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarGetBufferSize_m4178 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_qcarAddCameraFrame_m4179 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererSetVideoBackgroundCfg_m4180 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererGetVideoBackgroundCfg_m4181 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererGetVideoBackgroundTextureInfo_m4182 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeWrapper_rendererSetVideoBackgroundTextureID_m4183 (Object_t * __this /* static, unused */, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m4184 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarInit(System.String)
extern "C" int32_t QCARNativeWrapper_qcarInit_m4185 (Object_t * __this /* static, unused */, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarSetHint_m4186 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_getProjectionGL_m4187 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_setApplicationEnvironment_m4188 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::setStateBufferSize(System.Int32)
extern "C" void QCARNativeWrapper_setStateBufferSize_m4189 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::smartTerrainTrackerStart()
extern "C" int32_t QCARNativeWrapper_smartTerrainTrackerStart_m4190 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::smartTerrainTrackerStop()
extern "C" void QCARNativeWrapper_smartTerrainTrackerStop_m4191 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m4192 (Object_t * __this /* static, unused */, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeWrapper_smartTerrainTrackerInitBuilder_m4193 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeWrapper_smartTerrainTrackerDeinitBuilder_m4194 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m4195 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m4196 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderAddReconstruction_m4197 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderRemoveReconstruction_m4198 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderDestroyReconstruction_m4199 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionStart(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionStart_m4200 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionStop(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionStop_m4201 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionIsReconstructing_m4202 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionReset(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionReset_m4203 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeWrapper_reconstructionSetNavMeshPadding_m4204 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeWrapper_reconstructionFromTargetSetInitializationTarget_m4205 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionSetMaximumArea_m4206 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m4207 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeWrapper_targetFinderStartInit_m4208 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderGetInitState()
extern "C" int32_t QCARNativeWrapper_targetFinderGetInitState_m4209 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderDeinit()
extern "C" int32_t QCARNativeWrapper_targetFinderDeinit_m4210 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStartRecognition()
extern "C" int32_t QCARNativeWrapper_targetFinderStartRecognition_m4211 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStop()
extern "C" int32_t QCARNativeWrapper_targetFinderStop_m4212 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_targetFinderSetUIScanlineColor_m4213 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_targetFinderSetUIPointColor_m4214 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeWrapper_targetFinderUpdate_m4215 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_targetFinderGetResults_m4216 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_targetFinderEnableTracking_m4217 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeWrapper_targetFinderGetImageTargets_m4218 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderClearTrackables()
extern "C" void QCARNativeWrapper_targetFinderClearTrackables_m4219 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerStart()
extern "C" int32_t QCARNativeWrapper_textTrackerStart_m4220 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::textTrackerStop()
extern "C" void QCARNativeWrapper_textTrackerStop_m4221 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_textTrackerSetRegionOfInterest_m4222 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_textTrackerGetRegionOfInterest_m4223 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListLoadWordList_m4224 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListAddWordsFromFile_m4225 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListAddWordU_m4226 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListRemoveWordU_m4227 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListContainsWordU_m4228 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListUnloadAllLists()
extern "C" int32_t QCARNativeWrapper_wordListUnloadAllLists_m4229 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListSetFilterMode_m4230 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListGetFilterMode()
extern "C" int32_t QCARNativeWrapper_wordListGetFilterMode_m4231 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListAddWordToFilterListU_m4232 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListRemoveWordFromFilterListU_m4233 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListClearFilterList()
extern "C" int32_t QCARNativeWrapper_wordListClearFilterList_m4234 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListLoadFilterList_m4235 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListGetFilterListWordCount()
extern "C" int32_t QCARNativeWrapper_wordListGetFilterListWordCount_m4236 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_wordListGetFilterListWordU_m4237 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordGetLetterMask_m4238 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordGetLetterBoundingBoxes_m4239 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_trackerManagerInitTracker_m4240 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_trackerManagerDeinitTracker_m4241 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetEnabled_m4242 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetSensitivity_m4243 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetAreaRectangle_m4244 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarDeinit()
extern "C" int32_t QCARNativeWrapper_qcarDeinit_m4245 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_startExtendedTracking_m4246 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_stopExtendedTracking_m4247 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsSupportedDeviceDetected()
extern "C" int32_t QCARNativeWrapper_eyewearIsSupportedDeviceDetected_m4248 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsSeeThru()
extern "C" int32_t QCARNativeWrapper_eyewearIsSeeThru_m4249 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetScreenOrientation()
extern "C" int32_t QCARNativeWrapper_eyewearGetScreenOrientation_m4250 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoCapable()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoCapable_m4251 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoEnabled()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoEnabled_m4252 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoGLOnly_m4253 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t QCARNativeWrapper_eyewearSetStereo_m4254 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearGetDefaultSceneScale_m4255 (Object_t * __this /* static, unused */, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearGetProjectionMatrix_m4256 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetMaxCount_m4257 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetUsedCount_m4258 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMIsProfileUsed_m4259 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetActiveProfile_m4260 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetActiveProfile_m4261 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetProjectionMatrix_m4262 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetProjectionMatrix_m4263 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_eyewearCPMGetProfileName_m4264 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetProfileName_m4265 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMClearProfile_m4266 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorInit_m4267 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m4268 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m4269 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorIsStereoStretched_m4270 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m4271 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::.ctor()
extern "C" void QCARNativeWrapper__ctor_m4272 (QCARNativeWrapper_t766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
