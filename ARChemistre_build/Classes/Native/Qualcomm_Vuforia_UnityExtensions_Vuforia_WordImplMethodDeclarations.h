#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordImpl
struct WordImpl_t745;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t621;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t744;
// Vuforia.ImageImpl
struct ImageImpl_t671;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Vuforia.QCARManagerImpl/ImageHeaderData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Ima.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C" void WordImpl__ctor_m3437 (WordImpl_t745 * __this, int32_t ___id, String_t* ___text, Vector2_t20  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C" String_t* WordImpl_get_StringValue_m3438 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C" Vector2_t20  WordImpl_get_Size_m3439 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C" Image_t621 * WordImpl_GetLetterMask_m3440 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C" RectangleDataU5BU5D_t744* WordImpl_GetLetterBoundingBoxes_m3441 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C" void WordImpl_InitImageHeader_m3442 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C" void WordImpl_CreateLetterMask_m3443 (WordImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.QCARManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C" void WordImpl_SetImageValues_m3444 (Object_t * __this /* static, unused */, ImageHeaderData_t704  ___imageHeader, ImageImpl_t671 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C" void WordImpl_AllocateImage_m3445 (Object_t * __this /* static, unused */, ImageImpl_t671 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
