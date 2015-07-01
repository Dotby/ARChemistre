#pragma once
#include <stdint.h>
// System.Single[]
struct SingleU5BU5D_t638;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.InternalEyewear/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct  EyewearCalibrationReading_t611 
{
	// System.Single[] Vuforia.InternalEyewear/EyewearCalibrationReading::pose
	SingleU5BU5D_t638* ___pose_0;
	// System.Single Vuforia.InternalEyewear/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.InternalEyewear/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.InternalEyewear/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.InternalEyewear/EyewearCalibrationReading::unused
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.InternalEyewear/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct EyewearCalibrationReading_t611_marshaled
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
