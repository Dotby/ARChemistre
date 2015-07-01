#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNullWrapper
struct QCARNullWrapper_t765;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t480;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceInitCamera_m3809 (QCARNullWrapper_t765 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceDeinitCamera_m3810 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStartCamera_m3811 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStopCamera_m3812 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNullWrapper_CameraDeviceGetNumVideoModes_m3813 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNullWrapper_CameraDeviceGetVideoMode_m3814 (QCARNullWrapper_t765 * __this, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSelectVideoMode_m3815 (QCARNullWrapper_t765 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFlashTorchMode_m3816 (QCARNullWrapper_t765 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFocusMode_m3817 (QCARNullWrapper_t765 * __this, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetCameraConfiguration_m3818 (QCARNullWrapper_t765 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetFrameFormat_m3819 (QCARNullWrapper_t765 * __this, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetExists_m3820 (QCARNullWrapper_t765 * __this, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetLoad_m3821 (QCARNullWrapper_t765 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetNumTrackableType_m3822 (QCARNullWrapper_t765 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackablesOfType_m3823 (QCARNullWrapper_t765 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackableName_m3824 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetCreateTrackable_m3825 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t480 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetDestroyTrackable_m3826 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetHasReachedTrackableLimit_m3827 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetCameraThreadID()
extern "C" int32_t QCARNullWrapper_GetCameraThreadID_m3828 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderBuild_m3829 (QCARNullWrapper_t765 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNullWrapper_FrameCounterGetBenchmarkingData_m3830 (QCARNullWrapper_t765 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStartScan_m3831 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStopScan_m3832 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderGetFrameQuality_m3833 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNullWrapper_ImageTargetBuilderGetTrackableSource_m3834 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ImageTargetCreateVirtualButton_m3835 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetDestroyVirtualButton_m3836 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_VirtualButtonGetId_m3837 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetNumVirtualButtons_m3838 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtons_m3839 (QCARNullWrapper_t765 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtonName_m3840 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t480 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_CylinderTargetGetDimensions_m3841 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetSideLength_m3842 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetTopDiameter_m3843 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetBottomDiameter_m3844 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetSetSize_m3845 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetGetSize_m3846 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNullWrapper_ObjectTrackerStart_m3847 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ObjectTrackerStop()
extern "C" void QCARNullWrapper_ObjectTrackerStop_m3848 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNullWrapper_ObjectTrackerCreateDataSet_m3849 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDestroyDataSet_m3850 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerActivateDataSet_m3851 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDeactivateDataSet_m3852 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNullWrapper_ObjectTrackerPersistExtendedTracking_m3853 (QCARNullWrapper_t765 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNullWrapper_ObjectTrackerResetExtendedTracking_m3854 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNullWrapper_MarkerTrackerStart_m3855 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::MarkerTrackerStop()
extern "C" void QCARNullWrapper_MarkerTrackerStop_m3856 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNullWrapper_OnSurfaceChanged_m3857 (QCARNullWrapper_t765 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnPause()
extern "C" void QCARNullWrapper_OnPause_m3858 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnResume()
extern "C" void QCARNullWrapper_OnResume_m3859 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNullWrapper_HasSurfaceBeenRecreated_m3860 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerSetSize_m3861 (QCARNullWrapper_t765 * __this, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerTrackerCreateMarker_m3862 (QCARNullWrapper_t765 * __this, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNullWrapper_MarkerTrackerDestroyMarker_m3863 (QCARNullWrapper_t765 * __this, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitPlatformNative()
extern "C" void QCARNullWrapper_InitPlatformNative_m3864 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_InitFrameState_m3865 (QCARNullWrapper_t765 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_DeinitFrameState_m3866 (QCARNullWrapper_t765 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_UpdateQCAR_m3867 (QCARNullWrapper_t765 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererEnd()
extern "C" void QCARNullWrapper_RendererEnd_m3868 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarGetBufferSize_m3869 (QCARNullWrapper_t765 * __this, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_QcarAddCameraFrame_m3870 (QCARNullWrapper_t765 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererSetVideoBackgroundCfg_m3871 (QCARNullWrapper_t765 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundCfg_m3872 (QCARNullWrapper_t765 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundTextureInfo_m3873 (QCARNullWrapper_t765 * __this, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNullWrapper_RendererSetVideoBackgroundTextureID_m3874 (QCARNullWrapper_t765 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3875 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetHint_m3876 (QCARNullWrapper_t765 * __this, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_GetProjectionGL_m3877 (QCARNullWrapper_t765 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_SetApplicationEnvironment_m3878 (QCARNullWrapper_t765 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNullWrapper_SetStateBufferSize_m3879 (QCARNullWrapper_t765 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNullWrapper_SmartTerrainTrackerStart_m3880 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNullWrapper_SmartTerrainTrackerStop_m3881 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3882 (QCARNullWrapper_t765 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerInitBuilder_m3883 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerDeinitBuilder_m3884 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3885 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3886 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderAddReconstruction_m3887 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderRemoveReconstruction_m3888 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderDestroyReconstruction_m3889 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStart_m3890 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStop_m3891 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionIsReconstructing_m3892 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionReset_m3893 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNullWrapper_ReconstructionSetNavMeshPadding_m3894 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNullWrapper_ReconstructionFromTargetSetInitializationTarget_m3895 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionSetMaximumArea_m3896 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3897 (QCARNullWrapper_t765 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNullWrapper_TargetFinderStartInit_m3898 (QCARNullWrapper_t765 * __this, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNullWrapper_TargetFinderGetInitState_m3899 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNullWrapper_TargetFinderDeinit_m3900 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNullWrapper_TargetFinderStartRecognition_m3901 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStop()
extern "C" int32_t QCARNullWrapper_TargetFinderStop_m3902 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIScanlineColor_m3903 (QCARNullWrapper_t765 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIPointColor_m3904 (QCARNullWrapper_t765 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNullWrapper_TargetFinderUpdate_m3905 (QCARNullWrapper_t765 * __this, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_TargetFinderGetResults_m3906 (QCARNullWrapper_t765 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNullWrapper_TargetFinderEnableTracking_m3907 (QCARNullWrapper_t765 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNullWrapper_TargetFinderGetImageTargets_m3908 (QCARNullWrapper_t765 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderClearTrackables()
extern "C" void QCARNullWrapper_TargetFinderClearTrackables_m3909 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerStart()
extern "C" int32_t QCARNullWrapper_TextTrackerStart_m3910 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerStop()
extern "C" void QCARNullWrapper_TextTrackerStop_m3911 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_TextTrackerSetRegionOfInterest_m3912 (QCARNullWrapper_t765 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNullWrapper_TextTrackerGetRegionOfInterest_m3913 (QCARNullWrapper_t765 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadWordList_m3914 (QCARNullWrapper_t765 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListAddWordsFromFile_m3915 (QCARNullWrapper_t765 * __this, String_t* ___path, int32_t ___storagetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordU_m3916 (QCARNullWrapper_t765 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordU_m3917 (QCARNullWrapper_t765 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListContainsWordU_m3918 (QCARNullWrapper_t765 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNullWrapper_WordListUnloadAllLists_m3919 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNullWrapper_WordListSetFilterMode_m3920 (QCARNullWrapper_t765 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNullWrapper_WordListGetFilterMode_m3921 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadFilterList_m3922 (QCARNullWrapper_t765 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordToFilterListU_m3923 (QCARNullWrapper_t765 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordFromFilterListU_m3924 (QCARNullWrapper_t765 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListClearFilterList()
extern "C" int32_t QCARNullWrapper_WordListClearFilterList_m3925 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNullWrapper_WordListGetFilterListWordCount_m3926 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_WordListGetFilterListWordU_m3927 (QCARNullWrapper_t765 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterMask_m3928 (QCARNullWrapper_t765 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterBoundingBoxes_m3929 (QCARNullWrapper_t765 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerInitTracker_m3930 (QCARNullWrapper_t765 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerDeinitTracker_m3931 (QCARNullWrapper_t765 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetEnabled_m3932 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetSensitivity_m3933 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetAreaRectangle_m3934 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarInit(System.String)
extern "C" int32_t QCARNullWrapper_QcarInit_m3935 (QCARNullWrapper_t765 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarDeinit()
extern "C" int32_t QCARNullWrapper_QcarDeinit_m3936 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StartExtendedTracking_m3937 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StopExtendedTracking_m3938 (QCARNullWrapper_t765 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNullWrapper_EyewearIsSupportedDeviceDetected_m3939 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSeeThru()
extern "C" bool QCARNullWrapper_EyewearIsSeeThru_m3940 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNullWrapper_EyewearGetScreenOrientation_m3941 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNullWrapper_EyewearIsStereoCapable_m3942 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNullWrapper_EyewearIsStereoEnabled_m3943 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNullWrapper_EyewearIsStereoGLOnly_m3944 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNullWrapper_EyewearSetStereo_m3945 (QCARNullWrapper_t765 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearGetDefaultSceneScale_m3946 (QCARNullWrapper_t765 * __this, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_EyewearGetProjectionMatrix_m3947 (QCARNullWrapper_t765 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetMaxCount_m3948 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetUsedCount_m3949 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMIsProfileUsed_m3950 (QCARNullWrapper_t765 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetActiveProfile_m3951 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMSetActiveProfile_m3952 (QCARNullWrapper_t765 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearCPMGetProjectionMatrix_m3953 (QCARNullWrapper_t765 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProjectionMatrix_m3954 (QCARNullWrapper_t765 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_EyewearCPMGetProfileName_m3955 (QCARNullWrapper_t765 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProfileName_m3956 (QCARNullWrapper_t765 * __this, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMClearProfile_m3957 (QCARNullWrapper_t765 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorInit_m3958 (QCARNullWrapper_t765 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMinScaleHint_m3959 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m3960 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNullWrapper_EyewearUserCalibratorIsStereoStretched_m3961 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m3962 (QCARNullWrapper_t765 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::.ctor()
extern "C" void QCARNullWrapper__ctor_m3963 (QCARNullWrapper_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
