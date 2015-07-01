#pragma once
#include <stdint.h>
// VideoPlaybackUIView
struct VideoPlaybackUIView_t128;
// System.Action
struct Action_t14;
// ISampleAppUIEventHandler
#include "AssemblyU2DCSharp_ISampleAppUIEventHandler.h"
// VideoPlaybackUIEventHandler
struct  VideoPlaybackUIEventHandler_t126  : public ISampleAppUIEventHandler_t24
{
	// System.Boolean VideoPlaybackUIEventHandler::mFullScreenMode
	bool ___mFullScreenMode_2;
	// VideoPlaybackUIView VideoPlaybackUIEventHandler::mView
	VideoPlaybackUIView_t128 * ___mView_4;
	// System.Boolean VideoPlaybackUIEventHandler::mCameraFacingFront
	bool ___mCameraFacingFront_5;
	// System.Action VideoPlaybackUIEventHandler::CloseView
	Action_t14 * ___CloseView_6;
	// System.Action VideoPlaybackUIEventHandler::GoToAboutPage
	Action_t14 * ___GoToAboutPage_7;
};
struct VideoPlaybackUIEventHandler_t126_StaticFields{
	// System.Boolean VideoPlaybackUIEventHandler::sExtendedTrackingIsEnabled
	bool ___sExtendedTrackingIsEnabled_3;
};
