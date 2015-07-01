#pragma once
#include <stdint.h>
// UnityEngine.Texture
struct Texture_t33;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// System.String
struct String_t;
// System.Action
struct Action_t14;
// ISampleAppUIElement
#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// SampleAppUIButton
struct  SampleAppUIButton_t34  : public ISampleAppUIElement_t27
{
	// UnityEngine.Texture SampleAppUIButton::mButtonImage
	Texture_t33 * ___mButtonImage_0;
	// UnityEngine.Rect SampleAppUIButton::mRect
	Rect_t32  ___mRect_1;
	// UnityEngine.GUIStyle SampleAppUIButton::mStyle
	GUIStyle_t15 * ___mStyle_2;
	// System.String SampleAppUIButton::mTitle
	String_t* ___mTitle_3;
	// System.Action SampleAppUIButton::TappedOn
	Action_t14 * ___TappedOn_4;
};
