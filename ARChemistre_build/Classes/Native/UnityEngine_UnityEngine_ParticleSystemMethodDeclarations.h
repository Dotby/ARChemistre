#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t9;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1056;
// UnityEngine.Transform
struct Transform_t6;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1057;

// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C" void ParticleSystem_set_startSpeed_m412 (ParticleSystem_t9 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m6466 (ParticleSystem_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m6467 (ParticleSystem_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m411 (ParticleSystem_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m6468 (ParticleSystem_t9 * __this, bool ___withChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m415 (ParticleSystem_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m6469 (ParticleSystem_t9 * __this, bool ___withChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t1056* ParticleSystem_GetParticleSystems_m6470 (Object_t * __this /* static, unused */, ParticleSystem_t9 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6471 (Object_t * __this /* static, unused */, Transform_t6 * ___transform, List_1_t1057 * ___particleSystems, MethodInfo* method) IL2CPP_METHOD_ATTR;
