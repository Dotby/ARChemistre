#pragma once
#include <stdint.h>
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// AppManager
struct AppManager_t22;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SampleInitErrorHandler/ErrorData
#include "AssemblyU2DCSharp_SampleInitErrorHandler_ErrorData.h"
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"
// SampleInitErrorHandler
struct  SampleInitErrorHandler_t49  : public MonoBehaviour_t8
{
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorTitleMessage
	GUIStyle_t15 * ___mErrorTitleMessage_2;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorBodyMessage
	GUIStyle_t15 * ___mErrorBodyMessage_3;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorOkButton
	GUIStyle_t15 * ___mErrorOkButton_4;
	// SampleInitErrorHandler/ErrorData SampleInitErrorHandler::mCurrentError
	ErrorData_t48  ___mCurrentError_5;
	// AppManager SampleInitErrorHandler::mManager
	AppManager_t22 * ___mManager_6;
	// Vuforia.QCARUnity/InitError SampleInitErrorHandler::mErrorcode
	int32_t ___mErrorcode_7;
};
