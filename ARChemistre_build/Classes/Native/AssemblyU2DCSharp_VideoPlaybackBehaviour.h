#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t33;
// VideoPlayerHelper
struct VideoPlayerHelper_t130;
// UnityEngine.Texture2D
struct Texture2D_t51;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// VideoPlayerHelper/MediaType
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"
// VideoPlayerHelper/MediaState
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"
// VideoPlaybackBehaviour
struct  VideoPlaybackBehaviour_t121  : public MonoBehaviour_t8
{
	// System.String VideoPlaybackBehaviour::m_path
	String_t* ___m_path_2;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_playTexture
	Texture_t33 * ___m_playTexture_3;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_busyTexture
	Texture_t33 * ___m_busyTexture_4;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_errorTexture
	Texture_t33 * ___m_errorTexture_5;
	// System.Boolean VideoPlaybackBehaviour::m_autoPlay
	bool ___m_autoPlay_6;
	// VideoPlayerHelper VideoPlaybackBehaviour::mVideoPlayer
	VideoPlayerHelper_t130 * ___mVideoPlayer_7;
	// System.Boolean VideoPlaybackBehaviour::mIsInited
	bool ___mIsInited_8;
	// System.Boolean VideoPlaybackBehaviour::mIsPrepared
	bool ___mIsPrepared_9;
	// System.Boolean VideoPlaybackBehaviour::mAppPaused
	bool ___mAppPaused_10;
	// UnityEngine.Texture2D VideoPlaybackBehaviour::mVideoTexture
	Texture2D_t51 * ___mVideoTexture_11;
	// UnityEngine.Texture VideoPlaybackBehaviour::mKeyframeTexture
	Texture_t33 * ___mKeyframeTexture_12;
	// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::mMediaType
	int32_t ___mMediaType_13;
	// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::mCurrentState
	int32_t ___mCurrentState_14;
	// System.Single VideoPlaybackBehaviour::mSeekPosition
	float ___mSeekPosition_15;
	// System.Boolean VideoPlaybackBehaviour::isPlayableOnTexture
	bool ___isPlayableOnTexture_16;
	// UnityEngine.GameObject VideoPlaybackBehaviour::mIconPlane
	GameObject_t1 * ___mIconPlane_17;
	// System.Boolean VideoPlaybackBehaviour::mIconPlaneActive
	bool ___mIconPlaneActive_18;
};
