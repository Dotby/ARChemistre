#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t1126;
// UnityEngine.Animator
struct Animator_t422;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m6765 (StateMachineBehaviour_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m6766 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m6767 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m6768 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m6769 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m6770 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, AnimatorStateInfo_t1069  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m6771 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m6772 (StateMachineBehaviour_t1126 * __this, Animator_t422 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
