#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t51;
// Vuforia.QCARRenderer
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer.h"
// Vuforia.QCARRenderer/VideoBGCfgData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB_0.h"
// Vuforia.QCARRendererImpl
struct  QCARRendererImpl_t721  : public QCARRenderer_t720
{
	// Vuforia.QCARRenderer/VideoBGCfgData Vuforia.QCARRendererImpl::mVideoBGConfig
	VideoBGCfgData_t719  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.QCARRendererImpl::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture2D Vuforia.QCARRendererImpl::mVideoBackgroundTexture
	Texture2D_t51 * ___mVideoBackgroundTexture_3;
};
