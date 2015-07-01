#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t609;
// Vuforia.InternalEyewear/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t610;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Boolean Vuforia.InternalEyewearUserCalibrator::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool InternalEyewearUserCalibrator_init_m2970 (InternalEyewearUserCalibrator_t609 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMinScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMinScaleHint_m2971 (InternalEyewearUserCalibrator_t609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMaxScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMaxScaleHint_m2972 (InternalEyewearUserCalibrator_t609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::isStereoStretched()
extern "C" bool InternalEyewearUserCalibrator_isStereoStretched_m2973 (InternalEyewearUserCalibrator_t609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::getProjectionMatrix(Vuforia.InternalEyewear/EyewearCalibrationReading[],UnityEngine.Matrix4x4)
extern "C" bool InternalEyewearUserCalibrator_getProjectionMatrix_m2974 (InternalEyewearUserCalibrator_t609 * __this, EyewearCalibrationReadingU5BU5D_t610* ___readings, Matrix4x4_t187  ___projectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewearUserCalibrator::.ctor()
extern "C" void InternalEyewearUserCalibrator__ctor_m2975 (InternalEyewearUserCalibrator_t609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
