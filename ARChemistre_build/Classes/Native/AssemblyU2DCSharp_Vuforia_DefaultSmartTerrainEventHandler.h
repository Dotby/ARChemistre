#pragma once
#include <stdint.h>
// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t64;
// Vuforia.PropBehaviour
struct PropBehaviour_t65;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t66;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t67  : public MonoBehaviour_t8
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t64 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t65 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t66 * ___SurfaceTemplate_4;
};
