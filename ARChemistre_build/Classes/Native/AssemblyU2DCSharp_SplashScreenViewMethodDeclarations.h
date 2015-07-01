#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SplashScreenView
struct SplashScreenView_t25;
// UnityEngine.Texture2D
struct Texture2D_t51;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t52;

// System.Void SplashScreenView::.ctor()
extern "C" void SplashScreenView__ctor_m105 (SplashScreenView_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::LoadView()
extern "C" void SplashScreenView_LoadView_m106 (SplashScreenView_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UnLoadView()
extern "C" void SplashScreenView_UnLoadView_m107 (SplashScreenView_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UpdateUI(System.Boolean)
extern "C" void SplashScreenView_UpdateUI_m108 (SplashScreenView_t25 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D SplashScreenView::PickImageWithBestAspect(UnityEngine.Texture2D[])
extern "C" Texture2D_t51 * SplashScreenView_PickImageWithBestAspect_m109 (SplashScreenView_t25 * __this, Texture2DU5BU5D_t52* ___splashImages, MethodInfo* method) IL2CPP_METHOD_ATTR;
