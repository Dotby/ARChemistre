#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.QCARManagerImpl/MeshData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Mes.h"
// Vuforia.QCARManagerImpl/Obb3D
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Obb_0.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"
// Vuforia.QCARManagerImpl/PropData
#pragma pack(push, tp, 1)
struct  PropData_t708 
{
	// Vuforia.QCARManagerImpl/MeshData Vuforia.QCARManagerImpl/PropData::meshData
	MeshData_t705  ___meshData_0;
	// System.Int32 Vuforia.QCARManagerImpl/PropData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.QCARManagerImpl/PropData::parentID
	int32_t ___parentID_2;
	// Vuforia.QCARManagerImpl/Obb3D Vuforia.QCARManagerImpl/PropData::boundingBox
	Obb3D_t701  ___boundingBox_3;
	// UnityEngine.Vector2 Vuforia.QCARManagerImpl/PropData::localPosition
	Vector2_t20  ___localPosition_4;
	// Vuforia.QCARManagerImpl/PoseData Vuforia.QCARManagerImpl/PropData::localPose
	PoseData_t697  ___localPose_5;
	// System.Int32 Vuforia.QCARManagerImpl/PropData::revision
	int32_t ___revision_6;
	// System.Int32 Vuforia.QCARManagerImpl/PropData::unused
	int32_t ___unused_7;
};
#pragma pack(pop, tp)
