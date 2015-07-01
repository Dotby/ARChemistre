#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t677;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t678;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t661;
// Vuforia.TargetFinder
struct TargetFinder_t675;
// Vuforia.ObjectTracker
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"
// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t679  : public ObjectTracker_t195
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t677 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t678 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t661 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t675 * ___mTargetFinder_4;
};
