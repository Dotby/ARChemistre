#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t5;
// System.Single[]
struct SingleU5BU5D_t638;

// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m6517 (AudioClip_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m6518 (AudioClip_t5 * __this, SingleU5BU5D_t638* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m6519 (AudioClip_t5 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
