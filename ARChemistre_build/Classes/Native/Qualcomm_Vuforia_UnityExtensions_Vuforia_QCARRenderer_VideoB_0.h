#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"
// Vuforia.QCARRenderer/VideoBackgroundReflection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB.h"
// Vuforia.QCARRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t719 
{
	// System.Int32 Vuforia.QCARRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_0;
	// System.Int32 Vuforia.QCARRenderer/VideoBGCfgData::synchronous
	int32_t ___synchronous_1;
	// Vuforia.QCARRenderer/Vec2I Vuforia.QCARRenderer/VideoBGCfgData::position
	Vec2I_t689  ___position_2;
	// Vuforia.QCARRenderer/Vec2I Vuforia.QCARRenderer/VideoBGCfgData::size
	Vec2I_t689  ___size_3;
	// Vuforia.QCARRenderer/VideoBackgroundReflection Vuforia.QCARRenderer/VideoBGCfgData::reflection
	int32_t ___reflection_4;
	// System.Int32 Vuforia.QCARRenderer/VideoBGCfgData::unused
	int32_t ___unused_5;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.QCARRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct VideoBGCfgData_t719_marshaled
{
	int32_t ___enabled_0;
	int32_t ___synchronous_1;
	Vec2I_t689  ___position_2;
	Vec2I_t689  ___size_3;
	int32_t ___reflection_4;
	int32_t ___unused_5;
};
#pragma pack(pop, tp)
