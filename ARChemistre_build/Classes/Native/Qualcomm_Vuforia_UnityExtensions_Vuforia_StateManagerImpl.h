#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t783;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t784;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t785;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t758;
// Vuforia.StateManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_StateManager.h"
// Vuforia.StateManagerImpl
struct  StateManagerImpl_t717  : public StateManager_t198
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t783 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t784 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t785 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t785 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t758 * ___mWordManager_4;
};
