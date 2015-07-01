#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilderImpl
struct ImageTargetBuilderImpl_t672;
// System.String
struct String_t;
// Vuforia.TrackableSource
struct TrackableSource_t646;
// Vuforia.ImageTargetBuilder/FrameQuality
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// System.Boolean Vuforia.ImageTargetBuilderImpl::Build(System.String,System.Single)
extern "C" bool ImageTargetBuilderImpl_Build_m3256 (ImageTargetBuilderImpl_t672 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StartScan()
extern "C" void ImageTargetBuilderImpl_StartScan_m3257 (ImageTargetBuilderImpl_t672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StopScan()
extern "C" void ImageTargetBuilderImpl_StopScan_m3258 (ImageTargetBuilderImpl_t672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.ImageTargetBuilderImpl::GetFrameQuality()
extern "C" int32_t ImageTargetBuilderImpl_GetFrameQuality_m3259 (ImageTargetBuilderImpl_t672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableSource Vuforia.ImageTargetBuilderImpl::GetTrackableSource()
extern "C" TrackableSource_t646 * ImageTargetBuilderImpl_GetTrackableSource_m3260 (ImageTargetBuilderImpl_t672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::.ctor()
extern "C" void ImageTargetBuilderImpl__ctor_m3261 (ImageTargetBuilderImpl_t672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
