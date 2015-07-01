#pragma once
#include <stdint.h>
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t70;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackableEventHandler
struct  TrackableEventHandler_t124  : public MonoBehaviour_t8
{
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t70 * ___mTrackableBehaviour_2;
	// System.Boolean TrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_3;
	// System.Boolean TrackableEventHandler::mLostTracking
	bool ___mLostTracking_4;
	// System.Single TrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_5;
};
