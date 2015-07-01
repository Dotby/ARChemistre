﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderFallback
struct DecoderFallback_t2223;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2222;

// System.Void System.Text.DecoderFallback::.ctor()
extern "C" void DecoderFallback__ctor_m12888 (DecoderFallback_t2223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallback::.cctor()
extern "C" void DecoderFallback__cctor_m12889 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.DecoderFallback::get_ExceptionFallback()
extern "C" DecoderFallback_t2223 * DecoderFallback_get_ExceptionFallback_m12890 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.DecoderFallback::get_ReplacementFallback()
extern "C" DecoderFallback_t2223 * DecoderFallback_get_ReplacementFallback_m12891 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.DecoderFallback::get_StandardSafeFallback()
extern "C" DecoderFallback_t2223 * DecoderFallback_get_StandardSafeFallback_m12892 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.DecoderFallback::CreateFallbackBuffer()