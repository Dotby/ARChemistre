#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.WebCamImpl
struct WebCamImpl_t664;
// UnityEngine.Camera
struct Camera_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t115  : public MonoBehaviour_t8
{
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_2;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mPlayModeRenderVideo
	bool ___mPlayModeRenderVideo_3;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_5;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_6;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t664 * ___mWebCamImpl_7;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t2 * ___mBackgroundCameraInstance_8;
};
