#pragma once
#include <stdint.h>
// SampleAppUIBox
struct SampleAppUIBox_t18;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t37;
// SampleAppUILabel
struct SampleAppUILabel_t39;
// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t42;
// SampleAppUIButton
struct SampleAppUIButton_t34;
// SampleAppsUILayout
struct SampleAppsUILayout_t41;
// System.Action
struct Action_t14;
// System.Object
#include "mscorlib_System_Object.h"
// Vuforia.CameraDevice/FocusMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"
// VideoPlaybackUIView
struct  VideoPlaybackUIView_t128  : public Object_t
{
	// SampleAppUIBox VideoPlaybackUIView::mBox
	SampleAppUIBox_t18 * ___mBox_0;
	// SampleAppUICheckButton VideoPlaybackUIView::mAboutLabel
	SampleAppUICheckButton_t37 * ___mAboutLabel_1;
	// SampleAppUILabel VideoPlaybackUIView::mVideoPlaybackLabel
	SampleAppUILabel_t39 * ___mVideoPlaybackLabel_2;
	// SampleAppUICheckButton VideoPlaybackUIView::mExtendedTracking
	SampleAppUICheckButton_t37 * ___mExtendedTracking_3;
	// SampleAppUICheckButton VideoPlaybackUIView::mCameraFlashSettings
	SampleAppUICheckButton_t37 * ___mCameraFlashSettings_4;
	// SampleAppUICheckButton VideoPlaybackUIView::mAutoFocusSetting
	SampleAppUICheckButton_t37 * ___mAutoFocusSetting_5;
	// SampleAppUICheckButton VideoPlaybackUIView::mPlayFullscreeSettings
	SampleAppUICheckButton_t37 * ___mPlayFullscreeSettings_6;
	// SampleAppUILabel VideoPlaybackUIView::mCameraLabel
	SampleAppUILabel_t39 * ___mCameraLabel_7;
	// SampleAppUIRadioButton VideoPlaybackUIView::mCameraFacing
	SampleAppUIRadioButton_t42 * ___mCameraFacing_8;
	// SampleAppUIButton VideoPlaybackUIView::mCloseButton
	SampleAppUIButton_t34 * ___mCloseButton_9;
	// Vuforia.CameraDevice/FocusMode VideoPlaybackUIView::mFocusMode
	int32_t ___mFocusMode_10;
	// SampleAppsUILayout VideoPlaybackUIView::mLayout
	SampleAppsUILayout_t41 * ___mLayout_11;
	// System.Action VideoPlaybackUIView::TappedToClose
	Action_t14 * ___TappedToClose_12;
};
