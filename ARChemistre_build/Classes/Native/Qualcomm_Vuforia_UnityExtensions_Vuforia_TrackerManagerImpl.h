#pragma once
#include <stdint.h>
// Vuforia.ObjectTracker
struct ObjectTracker_t195;
// Vuforia.MarkerTracker
struct MarkerTracker_t681;
// Vuforia.TextTracker
struct TextTracker_t736;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t734;
// Vuforia.StateManager
struct StateManager_t198;
// Vuforia.TrackerManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"
// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t800  : public TrackerManager_t194
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t195 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t681 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t736 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t734 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t198 * ___mStateManager_5;
};
