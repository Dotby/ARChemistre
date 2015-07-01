#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.Image
struct Image_t621;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t744;
// Vuforia.TrackableImpl
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Vuforia.QCARManagerImpl/ImageHeaderData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Ima.h"
// Vuforia.WordImpl
struct  WordImpl_t745  : public TrackableImpl_t625
{
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t20  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t621 * ___mLetterMask_4;
	// Vuforia.QCARManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t704  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t744* ___mLetterBoundingBoxes_6;
};
