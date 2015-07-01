#pragma once
#include <stdint.h>
// SampleAppUIRect
struct SampleAppUIRect_t35;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t36;
// ISampleAppUIElement
#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
// SampleAppUICheckButton
struct  SampleAppUICheckButton_t37  : public ISampleAppUIElement_t27
{
	// SampleAppUIRect SampleAppUICheckButton::mRect
	SampleAppUIRect_t35 * ___mRect_0;
	// System.Boolean SampleAppUICheckButton::mTappedOn
	bool ___mTappedOn_1;
	// System.Boolean SampleAppUICheckButton::mSelected
	bool ___mSelected_2;
	// UnityEngine.GUIStyle SampleAppUICheckButton::mStyle
	GUIStyle_t15 * ___mStyle_3;
	// System.Single SampleAppUICheckButton::mHeight
	float ___mHeight_4;
	// System.Single SampleAppUICheckButton::mWidth
	float ___mWidth_5;
	// System.String SampleAppUICheckButton::mTitle
	String_t* ___mTitle_6;
	// System.Action`1<System.Boolean> SampleAppUICheckButton::TappedOn
	Action_1_t36 * ___TappedOn_7;
};
