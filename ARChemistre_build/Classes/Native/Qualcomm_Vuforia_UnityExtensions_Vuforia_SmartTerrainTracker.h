#pragma once
#include <stdint.h>
// System.Action
struct Action_t14;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct  SmartTerrainTrackerAbstractBehaviour_t102  : public MonoBehaviour_t8
{
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_2;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_3;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitBuilder
	bool ___mAutoInitBuilder_4;
	// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::mSceneUnitsToMillimeter
	float ___mSceneUnitsToMillimeter_5;
	// System.Action Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerStarted
	Action_t14 * ___mTrackerStarted_6;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_7;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_8;
};
