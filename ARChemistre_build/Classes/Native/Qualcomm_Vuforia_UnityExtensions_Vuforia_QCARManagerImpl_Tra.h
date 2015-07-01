#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t698 
{
	// Vuforia.QCARManagerImpl/PoseData Vuforia.QCARManagerImpl/TrackableResultData::pose
	PoseData_t697  ___pose_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.QCARManagerImpl/TrackableResultData::status
	int32_t ___status_1;
	// System.Int32 Vuforia.QCARManagerImpl/TrackableResultData::id
	int32_t ___id_2;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.QCARManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_t698_marshaled
{
	PoseData_t697  ___pose_0;
	int32_t ___status_1;
	int32_t ___id_2;
};
#pragma pack(pop, tp)
