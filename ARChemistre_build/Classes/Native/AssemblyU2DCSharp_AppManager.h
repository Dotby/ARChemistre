#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ISampleAppUIEventHandler
struct ISampleAppUIEventHandler_t24;
// SplashScreenView
struct SplashScreenView_t25;
// AboutScreenView
struct AboutScreenView_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AppManager/ViewType
#include "AssemblyU2DCSharp_AppManager_ViewType.h"
// AppManager
struct  AppManager_t22  : public MonoBehaviour_t8
{
	// System.String AppManager::TitleForAboutPage
	String_t* ___TitleForAboutPage_2;
	// ISampleAppUIEventHandler AppManager::m_UIEventHandler
	ISampleAppUIEventHandler_t24 * ___m_UIEventHandler_3;
	// SplashScreenView AppManager::mSplashView
	SplashScreenView_t25 * ___mSplashView_5;
	// AboutScreenView AppManager::mAboutView
	AboutScreenView_t19 * ___mAboutView_6;
	// System.Single AppManager::mSecondsVisible
	float ___mSecondsVisible_7;
};
struct AppManager_t22_StaticFields{
	// AppManager/ViewType AppManager::mActiveViewType
	int32_t ___mActiveViewType_4;
};
