#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.TargetFinder/UpdateState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
// Vuforia.TargetFinderImpl/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_t792 
{
	// System.Int32 Vuforia.TargetFinderImpl/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;
	// System.Int32 Vuforia.TargetFinderImpl/TargetFinderState::ResultCount
	int32_t ___ResultCount_2;
	// System.Int32 Vuforia.TargetFinderImpl/TargetFinderState::unused
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.TargetFinderImpl/TargetFinderState
#pragma pack(push, tp, 1)
struct TargetFinderState_t792_marshaled
{
	int32_t ___IsRequesting_0;
	int32_t ___UpdateState_1;
	int32_t ___ResultCount_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
