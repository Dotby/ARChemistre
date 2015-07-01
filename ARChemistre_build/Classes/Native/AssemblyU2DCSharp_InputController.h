#pragma once
#include <stdint.h>
// System.Action
struct Action_t14;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// InputController
struct  InputController_t29  : public Object_t
{
};
struct InputController_t29_StaticFields{
	// System.Boolean InputController::GUIInput
	bool ___GUIInput_0;
	// System.Action InputController::DoubleTapped
	Action_t14 * ___DoubleTapped_1;
	// System.Action InputController::SingleTapped
	Action_t14 * ___SingleTapped_2;
	// System.Action InputController::BackButtonTapped
	Action_t14 * ___BackButtonTapped_3;
	// System.Single InputController::timeSinceBackEventDispatched
	float ___timeSinceBackEventDispatched_4;
	// System.Boolean InputController::backButtonEventDispached
	bool ___backButtonEventDispached_5;
	// System.Boolean InputController::tapEventDispatched
	bool ___tapEventDispatched_6;
	// System.Single InputController::mMillisecondsSinceLastTap
	float ___mMillisecondsSinceLastTap_7;
	// System.Int32 InputController::MAX_TAP_MILLISEC
	int32_t ___MAX_TAP_MILLISEC_8;
	// System.Single InputController::MAX_TAP_DISTANCE_SCREEN_SPACE
	float ___MAX_TAP_DISTANCE_SCREEN_SPACE_9;
	// System.Boolean InputController::mWaitingForSecondTap
	bool ___mWaitingForSecondTap_10;
	// UnityEngine.Vector3 InputController::mFirstTapPosition
	Vector3_t30  ___mFirstTapPosition_11;
	// System.DateTime InputController::mFirstTapTime
	DateTime_t31  ___mFirstTapTime_12;
};
