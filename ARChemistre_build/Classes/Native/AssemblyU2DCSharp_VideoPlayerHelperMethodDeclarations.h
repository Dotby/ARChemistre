#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VideoPlayerHelper
struct VideoPlayerHelper_t130;
// System.String
struct String_t;
// VideoPlayerHelper/MediaType
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"
// VideoPlayerHelper/MediaState
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void VideoPlayerHelper::.ctor()
extern "C" void VideoPlayerHelper__ctor_m318 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::SetFilename(System.String)
extern "C" void VideoPlayerHelper_SetFilename_m319 (VideoPlayerHelper_t130 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Init()
extern "C" bool VideoPlayerHelper_Init_m320 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Deinit()
extern "C" bool VideoPlayerHelper_Deinit_m321 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Load(System.String,VideoPlayerHelper/MediaType,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_Load_m322 (VideoPlayerHelper_t130 * __this, String_t* ___filename, int32_t ___requestedType, bool ___playOnTextureImmediately, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Unload()
extern "C" bool VideoPlayerHelper_Unload_m323 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableOnTexture()
extern "C" bool VideoPlayerHelper_IsPlayableOnTexture_m324 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableFullscreen()
extern "C" bool VideoPlayerHelper_IsPlayableFullscreen_m325 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVideoTextureID(System.Int32)
extern "C" bool VideoPlayerHelper_SetVideoTextureID_m326 (VideoPlayerHelper_t130 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::GetStatus()
extern "C" int32_t VideoPlayerHelper_GetStatus_m327 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoWidth()
extern "C" int32_t VideoPlayerHelper_GetVideoWidth_m328 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoHeight()
extern "C" int32_t VideoPlayerHelper_GetVideoHeight_m329 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetLength()
extern "C" float VideoPlayerHelper_GetLength_m330 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Play(System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_Play_m331 (VideoPlayerHelper_t130 * __this, bool ___fullScreen, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Pause()
extern "C" bool VideoPlayerHelper_Pause_m332 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Stop()
extern "C" bool VideoPlayerHelper_Stop_m333 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::UpdateVideoData()
extern "C" int32_t VideoPlayerHelper_UpdateVideoData_m334 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SeekTo(System.Single)
extern "C" bool VideoPlayerHelper_SeekTo_m335 (VideoPlayerHelper_t130 * __this, float ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetCurrentPosition()
extern "C" float VideoPlayerHelper_GetCurrentPosition_m336 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVolume(System.Single)
extern "C" bool VideoPlayerHelper_SetVolume_m337 (VideoPlayerHelper_t130 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetCurrentBufferingPercentage()
extern "C" int32_t VideoPlayerHelper_GetCurrentBufferingPercentage_m338 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::OnPause()
extern "C" void VideoPlayerHelper_OnPause_m339 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr VideoPlayerHelper::videoPlayerInitIOS()
extern "C" IntPtr_t VideoPlayerHelper_videoPlayerInitIOS_m340 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinitIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerDeinitIOS_m341 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoadIOS(System.IntPtr,System.String,System.Int32,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerLoadIOS_m342 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, String_t* ___filename, int32_t ___requestType, bool ___playOnTextureImmediately, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnloadIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerUnloadIOS_m343 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTextureIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableOnTextureIOS_m344 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreenIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableFullscreenIOS_m345 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTextureIDIOS(System.IntPtr,System.Int32)
extern "C" bool VideoPlayerHelper_videoPlayerSetVideoTextureIDIOS_m346 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatusIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetStatusIOS_m347 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidthIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoWidthIOS_m348 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeightIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoHeightIOS_m349 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLengthIOS(System.IntPtr)
extern "C" float VideoPlayerHelper_videoPlayerGetLengthIOS_m350 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlayIOS(System.IntPtr,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerPlayIOS_m351 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, bool ___fullScreen, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPauseIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerPauseIOS_m352 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStopIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerStopIOS_m353 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoDataIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerUpdateVideoDataIOS_m354 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekToIOS(System.IntPtr,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSeekToIOS_m355 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, float ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPositionIOS(System.IntPtr)
extern "C" float VideoPlayerHelper_videoPlayerGetCurrentPositionIOS_m356 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolumeIOS(System.IntPtr,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSetVolumeIOS_m357 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentageIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentageIOS_m358 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPauseIOS(System.IntPtr)
extern "C" void VideoPlayerHelper_videoPlayerOnPauseIOS_m359 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerInit()
extern "C" bool VideoPlayerHelper_videoPlayerInit_m360 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinit()
extern "C" bool VideoPlayerHelper_videoPlayerDeinit_m361 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoad(System.String,System.Int32,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerLoad_m362 (VideoPlayerHelper_t130 * __this, String_t* ___filename, int32_t ___requestType, bool ___playOnTextureImmediately, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnload()
extern "C" bool VideoPlayerHelper_videoPlayerUnload_m363 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTexture()
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableOnTexture_m364 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreen()
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableFullscreen_m365 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTextureID(System.Int32)
extern "C" bool VideoPlayerHelper_videoPlayerSetVideoTextureID_m366 (VideoPlayerHelper_t130 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatus()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetStatus_m367 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidth()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoWidth_m368 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeight()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoHeight_m369 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLength()
extern "C" float VideoPlayerHelper_videoPlayerGetLength_m370 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlay(System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerPlay_m371 (VideoPlayerHelper_t130 * __this, bool ___fullScreen, float ___seekPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPause()
extern "C" bool VideoPlayerHelper_videoPlayerPause_m372 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStop()
extern "C" bool VideoPlayerHelper_videoPlayerStop_m373 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoData()
extern "C" int32_t VideoPlayerHelper_videoPlayerUpdateVideoData_m374 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekTo(System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSeekTo_m375 (VideoPlayerHelper_t130 * __this, float ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPosition()
extern "C" float VideoPlayerHelper_videoPlayerGetCurrentPosition_m376 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolume(System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSetVolume_m377 (VideoPlayerHelper_t130 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentage()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentage_m378 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPause()
extern "C" void VideoPlayerHelper_videoPlayerOnPause_m379 (VideoPlayerHelper_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
