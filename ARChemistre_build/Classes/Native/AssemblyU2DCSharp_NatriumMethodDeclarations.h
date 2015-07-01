#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Natrium
struct Natrium_t11;
// UnityEngine.Collider
struct Collider_t12;
// UnityEngine.AudioClip
struct AudioClip_t5;

// System.Void Natrium::.ctor()
extern "C" void Natrium__ctor_m5 (Natrium_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::Start()
extern "C" void Natrium_Start_m6 (Natrium_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::OnTriggerStay(UnityEngine.Collider)
extern "C" void Natrium_OnTriggerStay_m7 (Natrium_t11 * __this, Collider_t12 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::OnTriggerExit(UnityEngine.Collider)
extern "C" void Natrium_OnTriggerExit_m8 (Natrium_t11 * __this, Collider_t12 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::PlaySnd(UnityEngine.AudioClip)
extern "C" void Natrium_PlaySnd_m9 (Natrium_t11 * __this, AudioClip_t5 * ___snd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::StartBoil()
extern "C" void Natrium_StartBoil_m10 (Natrium_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::StartGas()
extern "C" void Natrium_StartGas_m11 (Natrium_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Natrium::Update()
extern "C" void Natrium_Update_m12 (Natrium_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
