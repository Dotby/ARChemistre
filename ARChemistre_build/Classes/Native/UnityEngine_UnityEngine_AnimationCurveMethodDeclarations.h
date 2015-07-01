#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1072;
struct AnimationCurve_t1072_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1073;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6548 (AnimationCurve_t1072 * __this, KeyframeU5BU5D_t1073* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6549 (AnimationCurve_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6550 (AnimationCurve_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6551 (AnimationCurve_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6552 (AnimationCurve_t1072 * __this, KeyframeU5BU5D_t1073* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1072_marshal(const AnimationCurve_t1072& unmarshaled, AnimationCurve_t1072_marshaled& marshaled);
void AnimationCurve_t1072_marshal_back(const AnimationCurve_t1072_marshaled& marshaled, AnimationCurve_t1072& unmarshaled);
void AnimationCurve_t1072_marshal_cleanup(AnimationCurve_t1072_marshaled& marshaled);
