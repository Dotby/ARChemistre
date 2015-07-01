#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
// Vuforia.QCARManagerImpl/Obb2D
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Obb.h"
// Vuforia.QCARManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct  WordResultData_t702 
{
	// Vuforia.QCARManagerImpl/PoseData Vuforia.QCARManagerImpl/WordResultData::pose
	PoseData_t697  ___pose_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.QCARManagerImpl/WordResultData::status
	int32_t ___status_1;
	// System.Int32 Vuforia.QCARManagerImpl/WordResultData::id
	int32_t ___id_2;
	// Vuforia.QCARManagerImpl/Obb2D Vuforia.QCARManagerImpl/WordResultData::orientedBoundingBox
	Obb2D_t700  ___orientedBoundingBox_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.QCARManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct WordResultData_t702_marshaled
{
	PoseData_t697  ___pose_0;
	int32_t ___status_1;
	int32_t ___id_2;
	Obb2D_t700  ___orientedBoundingBox_3;
};
#pragma pack(pop, tp)
