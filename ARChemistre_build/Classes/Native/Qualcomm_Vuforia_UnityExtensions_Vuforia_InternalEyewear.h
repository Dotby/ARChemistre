#pragma once
#include <stdint.h>
// Vuforia.InternalEyewear
struct InternalEyewear_t639;
// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t607;
// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t609;
// System.Object
#include "mscorlib_System_Object.h"
// Vuforia.InternalEyewear
struct  InternalEyewear_t639  : public Object_t
{
	// Vuforia.InternalEyewearCalibrationProfileManager Vuforia.InternalEyewear::mProfileManager
	InternalEyewearCalibrationProfileManager_t607 * ___mProfileManager_1;
	// Vuforia.InternalEyewearUserCalibrator Vuforia.InternalEyewear::mCalibrator
	InternalEyewearUserCalibrator_t609 * ___mCalibrator_2;
};
struct InternalEyewear_t639_StaticFields{
	// Vuforia.InternalEyewear Vuforia.InternalEyewear::mInstance
	InternalEyewear_t639 * ___mInstance_0;
};
