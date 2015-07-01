#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinderImpl/InternalTargetSearchResult
#pragma pack(push, tp, 1)
struct  InternalTargetSearchResult_t793 
{
	// System.IntPtr Vuforia.TargetFinderImpl/InternalTargetSearchResult::TargetNamePtr
	IntPtr_t ___TargetNamePtr_0;
	// System.IntPtr Vuforia.TargetFinderImpl/InternalTargetSearchResult::UniqueTargetIdPtr
	IntPtr_t ___UniqueTargetIdPtr_1;
	// System.IntPtr Vuforia.TargetFinderImpl/InternalTargetSearchResult::MetaDataPtr
	IntPtr_t ___MetaDataPtr_2;
	// System.IntPtr Vuforia.TargetFinderImpl/InternalTargetSearchResult::TargetSearchResultPtr
	IntPtr_t ___TargetSearchResultPtr_3;
	// System.Single Vuforia.TargetFinderImpl/InternalTargetSearchResult::TargetSize
	float ___TargetSize_4;
	// System.Int32 Vuforia.TargetFinderImpl/InternalTargetSearchResult::TrackingRating
	int32_t ___TrackingRating_5;
};
#pragma pack(pop, tp)
