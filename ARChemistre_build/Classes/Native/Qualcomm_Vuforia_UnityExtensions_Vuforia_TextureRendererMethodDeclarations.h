#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextureRenderer
struct TextureRenderer_t798;
// UnityEngine.Texture
struct Texture_t33;
// UnityEngine.RenderTexture
struct RenderTexture_t799;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" int32_t TextureRenderer_get_Width_m4385 (TextureRenderer_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" int32_t TextureRenderer_get_Height_m4386 (TextureRenderer_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void TextureRenderer__ctor_m4387 (TextureRenderer_t798 * __this, Texture_t33 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t689  ___requestedTextureSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" RenderTexture_t799 * TextureRenderer_Render_m4388 (TextureRenderer_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" void TextureRenderer_Destroy_m4389 (TextureRenderer_t798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
