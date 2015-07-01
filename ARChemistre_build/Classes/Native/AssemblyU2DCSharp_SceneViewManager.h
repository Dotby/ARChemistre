#pragma once
#include <stdint.h>
// AppManager
struct AppManager_t22;
// SampleInitErrorHandler
struct SampleInitErrorHandler_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SceneViewManager
struct  SceneViewManager_t50  : public MonoBehaviour_t8
{
	// AppManager SceneViewManager::mAppManager
	AppManager_t22 * ___mAppManager_2;
	// SampleInitErrorHandler SceneViewManager::mPopUpMsg
	SampleInitErrorHandler_t49 * ___mPopUpMsg_3;
	// System.Boolean SceneViewManager::mErrorOccurred
	bool ___mErrorOccurred_4;
};
