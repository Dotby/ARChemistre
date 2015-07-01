#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/MeshData
#pragma pack(push, tp, 1)
struct  MeshData_t705 
{
	// System.IntPtr Vuforia.QCARManagerImpl/MeshData::positionsArray
	IntPtr_t ___positionsArray_0;
	// System.IntPtr Vuforia.QCARManagerImpl/MeshData::normalsArray
	IntPtr_t ___normalsArray_1;
	// System.IntPtr Vuforia.QCARManagerImpl/MeshData::triangleIdxArray
	IntPtr_t ___triangleIdxArray_2;
	// System.Int32 Vuforia.QCARManagerImpl/MeshData::numVertexValues
	int32_t ___numVertexValues_3;
	// System.Int32 Vuforia.QCARManagerImpl/MeshData::hasNormals
	int32_t ___hasNormals_4;
	// System.Int32 Vuforia.QCARManagerImpl/MeshData::numTriangleIndices
	int32_t ___numTriangleIndices_5;
	// System.Int32 Vuforia.QCARManagerImpl/MeshData::unused
	int32_t ___unused_6;
};
#pragma pack(pop, tp)
