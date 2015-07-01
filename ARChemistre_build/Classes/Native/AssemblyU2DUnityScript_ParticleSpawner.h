#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ParticleSpawner
struct  ParticleSpawner_t240  : public MonoBehaviour_t8
{
	// UnityEngine.GameObject[] ParticleSpawner::particles
	GameObjectU5BU5D_t3* ___particles_2;
	// System.Int32 ParticleSpawner::maxButtons
	int32_t ___maxButtons_3;
	// System.Boolean ParticleSpawner::showInfo
	bool ___showInfo_4;
	// System.Int32 ParticleSpawner::page
	int32_t ___page_5;
	// System.Int32 ParticleSpawner::pages
	int32_t ___pages_6;
	// System.String ParticleSpawner::currentPSInfo
	String_t* ___currentPSInfo_7;
	// UnityEngine.GameObject ParticleSpawner::currentPS
	GameObject_t1 * ___currentPS_8;
};
