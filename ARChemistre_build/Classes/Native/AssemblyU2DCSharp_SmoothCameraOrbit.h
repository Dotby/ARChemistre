#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// SmoothCameraOrbit
struct  SmoothCameraOrbit_t53  : public MonoBehaviour_t8
{
	// UnityEngine.Transform SmoothCameraOrbit::target
	Transform_t6 * ___target_2;
	// UnityEngine.Vector3 SmoothCameraOrbit::targetOffset
	Vector3_t30  ___targetOffset_3;
	// System.Single SmoothCameraOrbit::distance
	float ___distance_4;
	// System.Single SmoothCameraOrbit::maxDistance
	float ___maxDistance_5;
	// System.Single SmoothCameraOrbit::minDistance
	float ___minDistance_6;
	// System.Single SmoothCameraOrbit::xSpeed
	float ___xSpeed_7;
	// System.Single SmoothCameraOrbit::ySpeed
	float ___ySpeed_8;
	// System.Int32 SmoothCameraOrbit::yMinLimit
	int32_t ___yMinLimit_9;
	// System.Int32 SmoothCameraOrbit::yMaxLimit
	int32_t ___yMaxLimit_10;
	// System.Int32 SmoothCameraOrbit::zoomRate
	int32_t ___zoomRate_11;
	// System.Single SmoothCameraOrbit::panSpeed
	float ___panSpeed_12;
	// System.Single SmoothCameraOrbit::zoomDampening
	float ___zoomDampening_13;
	// System.Single SmoothCameraOrbit::autoRotate
	float ___autoRotate_14;
	// System.Single SmoothCameraOrbit::xDeg
	float ___xDeg_15;
	// System.Single SmoothCameraOrbit::yDeg
	float ___yDeg_16;
	// System.Single SmoothCameraOrbit::currentDistance
	float ___currentDistance_17;
	// System.Single SmoothCameraOrbit::desiredDistance
	float ___desiredDistance_18;
	// UnityEngine.Quaternion SmoothCameraOrbit::currentRotation
	Quaternion_t54  ___currentRotation_19;
	// UnityEngine.Quaternion SmoothCameraOrbit::desiredRotation
	Quaternion_t54  ___desiredRotation_20;
	// UnityEngine.Quaternion SmoothCameraOrbit::rotation
	Quaternion_t54  ___rotation_21;
	// UnityEngine.Vector3 SmoothCameraOrbit::position
	Vector3_t30  ___position_22;
	// System.Single SmoothCameraOrbit::idleTimer
	float ___idleTimer_23;
	// System.Single SmoothCameraOrbit::idleSmooth
	float ___idleSmooth_24;
};
