#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SmoothCameraOrbit
struct SmoothCameraOrbit_t53;

// System.Void SmoothCameraOrbit::.ctor()
extern "C" void SmoothCameraOrbit__ctor_m110 (SmoothCameraOrbit_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothCameraOrbit::Start()
extern "C" void SmoothCameraOrbit_Start_m111 (SmoothCameraOrbit_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothCameraOrbit::OnEnable()
extern "C" void SmoothCameraOrbit_OnEnable_m112 (SmoothCameraOrbit_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothCameraOrbit::Init()
extern "C" void SmoothCameraOrbit_Init_m113 (SmoothCameraOrbit_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothCameraOrbit::LateUpdate()
extern "C" void SmoothCameraOrbit_LateUpdate_m114 (SmoothCameraOrbit_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SmoothCameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern "C" float SmoothCameraOrbit_ClampAngle_m115 (Object_t * __this /* static, unused */, float ___angle, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
