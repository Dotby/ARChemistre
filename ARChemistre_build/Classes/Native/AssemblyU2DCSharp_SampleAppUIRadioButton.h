#pragma once
#include <stdint.h>
// System.Boolean[]
struct BooleanU5BU5D_t44;
// SampleAppUIRect[]
struct SampleAppUIRectU5BU5D_t45;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t46;
// System.String[]
struct StringU5BU5D_t43;
// System.Action`1<System.Int32>
struct Action_1_t47;
// ISampleAppUIElement
#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
// SampleAppUIRadioButton
struct  SampleAppUIRadioButton_t42  : public ISampleAppUIElement_t27
{
	// System.Single SampleAppUIRadioButton::mIndex
	float ___mIndex_0;
	// System.Boolean[] SampleAppUIRadioButton::mOptionsTapped
	BooleanU5BU5D_t44* ___mOptionsTapped_1;
	// System.Boolean[] SampleAppUIRadioButton::mOptionsSelected
	BooleanU5BU5D_t44* ___mOptionsSelected_2;
	// SampleAppUIRect[] SampleAppUIRadioButton::mRect
	SampleAppUIRectU5BU5D_t45* ___mRect_3;
	// System.Boolean SampleAppUIRadioButton::mTappedOn
	bool ___mTappedOn_4;
	// UnityEngine.GUIStyle[] SampleAppUIRadioButton::mStyle
	GUIStyleU5BU5D_t46* ___mStyle_5;
	// System.Single SampleAppUIRadioButton::mWidth
	float ___mWidth_6;
	// System.Single SampleAppUIRadioButton::mHeight
	float ___mHeight_7;
	// System.String[] SampleAppUIRadioButton::titleList
	StringU5BU5D_t43* ___titleList_8;
	// System.Action`1<System.Int32> SampleAppUIRadioButton::TappedOnOption
	Action_1_t47 * ___TappedOnOption_9;
};
