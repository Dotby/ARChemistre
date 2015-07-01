#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t5;
// UnityEngine.ParticleSystem
struct ParticleSystem_t9;
// UnityEngine.AudioSource
struct AudioSource_t10;
// UnityEngine.UI.Text
struct Text_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Natrium
struct  Natrium_t11  : public MonoBehaviour_t8
{
	// UnityEngine.AudioClip Natrium::bubble
	AudioClip_t5 * ___bubble_2;
	// UnityEngine.AudioClip Natrium::gas
	AudioClip_t5 * ___gas_3;
	// UnityEngine.ParticleSystem Natrium::ps
	ParticleSystem_t9 * ___ps_4;
	// UnityEngine.ParticleSystem Natrium::smoke
	ParticleSystem_t9 * ___smoke_5;
	// UnityEngine.AudioSource Natrium::player
	AudioSource_t10 * ___player_6;
	// System.Boolean Natrium::onFire
	bool ___onFire_7;
	// System.Single Natrium::tp
	float ___tp_8;
	// System.Boolean Natrium::inWater
	bool ___inWater_9;
	// UnityEngine.UI.Text Natrium::infoTxt
	Text_t4 * ___infoTxt_10;
};
