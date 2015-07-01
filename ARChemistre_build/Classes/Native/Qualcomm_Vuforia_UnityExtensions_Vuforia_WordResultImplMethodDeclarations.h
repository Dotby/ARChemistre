#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordResultImpl
struct WordResultImpl_t762;
// Vuforia.Word
struct Word_t750;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C" void WordResultImpl__ctor_m3469 (WordResultImpl_t762 * __this, Object_t * ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C" Object_t * WordResultImpl_get_Word_m3470 (WordResultImpl_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C" Vector3_t30  WordResultImpl_get_Position_m3471 (WordResultImpl_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C" Quaternion_t54  WordResultImpl_get_Orientation_m3472 (WordResultImpl_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C" OrientedBoundingBox_t650  WordResultImpl_get_Obb_m3473 (WordResultImpl_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C" int32_t WordResultImpl_get_CurrentStatus_m3474 (WordResultImpl_t762 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void WordResultImpl_SetPose_m3475 (WordResultImpl_t762 * __this, Vector3_t30  ___position, Quaternion_t54  ___orientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C" void WordResultImpl_SetObb_m3476 (WordResultImpl_t762 * __this, OrientedBoundingBox_t650  ___obb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C" void WordResultImpl_SetStatus_m3477 (WordResultImpl_t762 * __this, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
