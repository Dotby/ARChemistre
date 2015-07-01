#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordManagerImpl
struct WordManagerImpl_t758;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t748;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t749;
// Vuforia.Word
struct Word_t750;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t86;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t751;
// UnityEngine.Transform
struct Transform_t6;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t713;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t714;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>
struct IEnumerable_1_t759;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>
struct IEnumerable_1_t760;
// Vuforia.WordResult
struct WordResult_t761;
// Vuforia.WordPrefabCreationMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m3447 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m3448 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m3449 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m3450 (WordManagerImpl_t758 * __this, Object_t * ___word, WordAbstractBehaviour_t86 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m3451 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m3452 (WordManagerImpl_t758 * __this, WordAbstractBehaviour_t86 * ___behaviour, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m3453 (WordManagerImpl_t758 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m3454 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m3455 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m3456 (WordManagerImpl_t758 * __this, Transform_t6 * ___arCameraTransform, WordDataU5BU5D_t713* ___newWordData, WordResultDataU5BU5D_t714* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m3457 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m3458 (WordManagerImpl_t758 * __this, Object_t* ___newWordData, Object_t* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m3459 (WordManagerImpl_t758 * __this, Transform_t6 * ___arCameraTransform, Object_t* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m3460 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m3461 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m3462 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t86 * WordManagerImpl_AssociateWordBehaviour_m3463 (WordManagerImpl_t758 * __this, WordResult_t761 * ___wordResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t86 * WordManagerImpl_AssociateWordBehaviour_m3464 (WordManagerImpl_t758 * __this, WordResult_t761 * ___wordResult, WordAbstractBehaviour_t86 * ___wordBehaviourTemplate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t86 * WordManagerImpl_InstantiateWordBehaviour_m3465 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t86 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t86 * WordManagerImpl_CreateWordBehaviour_m3466 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m3467 (WordManagerImpl_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
