#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.Camera
struct Camera_t2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3;
// UnityEngine.UI.Text
struct Text_t4;
// UnityEngine.AudioClip
struct AudioClip_t5;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HandEmulator
struct  HandEmulator_t7  : public MonoBehaviour_t8
{
	// UnityEngine.GameObject HandEmulator::item
	GameObject_t1 * ___item_2;
	// UnityEngine.GameObject HandEmulator::lastItem
	GameObject_t1 * ___lastItem_3;
	// UnityEngine.GameObject HandEmulator::inHand
	GameObject_t1 * ___inHand_4;
	// UnityEngine.GameObject HandEmulator::hand
	GameObject_t1 * ___hand_5;
	// UnityEngine.Camera HandEmulator::cam
	Camera_t2 * ___cam_6;
	// UnityEngine.GameObject[] HandEmulator::activeObjects
	GameObjectU5BU5D_t3* ___activeObjects_7;
	// UnityEngine.UI.Text HandEmulator::infoTxt
	Text_t4 * ___infoTxt_8;
	// UnityEngine.AudioClip HandEmulator::getSnd
	AudioClip_t5 * ___getSnd_9;
	// UnityEngine.Transform HandEmulator::startParent
	Transform_t6 * ___startParent_10;
};
