#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/MeshData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Mes.h"
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"
// Vuforia.QCARManagerImpl/SurfaceData
#pragma pack(push, tp, 1)
struct  SurfaceData_t707 
{
	// System.IntPtr Vuforia.QCARManagerImpl/SurfaceData::meshBoundaryArray
	IntPtr_t ___meshBoundaryArray_0;
	// Vuforia.QCARManagerImpl/MeshData Vuforia.QCARManagerImpl/SurfaceData::meshData
	MeshData_t705  ___meshData_1;
	// Vuforia.QCARManagerImpl/MeshData Vuforia.QCARManagerImpl/SurfaceData::navMeshData
	MeshData_t705  ___navMeshData_2;
	// Vuforia.RectangleData Vuforia.QCARManagerImpl/SurfaceData::boundingBox
	RectangleData_t648  ___boundingBox_3;
	// Vuforia.QCARManagerImpl/PoseData Vuforia.QCARManagerImpl/SurfaceData::localPose
	PoseData_t697  ___localPose_4;
	// System.Int32 Vuforia.QCARManagerImpl/SurfaceData::id
	int32_t ___id_5;
	// System.Int32 Vuforia.QCARManagerImpl/SurfaceData::parentID
	int32_t ___parentID_6;
	// System.Int32 Vuforia.QCARManagerImpl/SurfaceData::numBoundaryIndices
	int32_t ___numBoundaryIndices_7;
	// System.Int32 Vuforia.QCARManagerImpl/SurfaceData::revision
	int32_t ___revision_8;
};
#pragma pack(pop, tp)
