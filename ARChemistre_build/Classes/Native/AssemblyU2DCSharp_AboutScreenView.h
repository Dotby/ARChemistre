#pragma once
#include <stdint.h>
// UnityEngine.TextAsset
struct TextAsset_t13;
// System.Action
struct Action_t14;
// UnityEngine.GUIStyle
struct GUIStyle_t15;
// System.String
struct String_t;
// UnityEngine.GUISkin
struct GUISkin_t16;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t17;
// SampleAppUIBox
struct SampleAppUIBox_t18;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// AboutScreenView
struct  AboutScreenView_t19  : public Object_t
{
	// UnityEngine.TextAsset AboutScreenView::m_AboutText
	TextAsset_t13 * ___m_AboutText_2;
	// System.Action AboutScreenView::OnStartButtonTapped
	Action_t14 * ___OnStartButtonTapped_3;
	// UnityEngine.GUIStyle AboutScreenView::mAboutTitleBgStyle
	GUIStyle_t15 * ___mAboutTitleBgStyle_4;
	// UnityEngine.GUIStyle AboutScreenView::mOKButtonBgStyle
	GUIStyle_t15 * ___mOKButtonBgStyle_5;
	// System.String AboutScreenView::mTitle
	String_t* ___mTitle_6;
	// UnityEngine.GUISkin AboutScreenView::mUISkin
	GUISkin_t16 * ___mUISkin_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> AboutScreenView::mButtonGUIStyles
	Dictionary_2_t17 * ___mButtonGUIStyles_8;
	// UnityEngine.Vector2 AboutScreenView::mScrollPosition
	Vector2_t20  ___mScrollPosition_9;
	// System.Single AboutScreenView::mStartButtonAreaHeight
	float ___mStartButtonAreaHeight_10;
	// System.Single AboutScreenView::mAboutTitleHeight
	float ___mAboutTitleHeight_11;
	// UnityEngine.Vector2 AboutScreenView::mLastTouchPosition
	Vector2_t20  ___mLastTouchPosition_12;
	// SampleAppUIBox AboutScreenView::mBox
	SampleAppUIBox_t18 * ___mBox_13;
};
