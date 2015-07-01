#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.QCARManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t697 
{
	// UnityEngine.Vector3 Vuforia.QCARManagerImpl/PoseData::position
	Vector3_t30  ___position_0;
	// UnityEngine.Quaternion Vuforia.QCARManagerImpl/PoseData::orientation
	Quaternion_t54  ___orientation_1;
	// System.Int32 Vuforia.QCARManagerImpl/PoseData::unused
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
