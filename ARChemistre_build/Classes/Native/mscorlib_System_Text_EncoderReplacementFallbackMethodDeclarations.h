﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t2233;
// System.String
struct String_t;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2221;
// System.Object
struct Object_t;

// System.Void System.Text.EncoderReplacementFallback::.ctor()
extern "C" void EncoderReplacementFallback__ctor_m12928 (EncoderReplacementFallback_t2233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
extern "C" void EncoderReplacementFallback__ctor_m12929 (EncoderReplacementFallback_t2233 * __this, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.EncoderReplacementFallback::get_DefaultString()
extern "C" String_t* EncoderReplacementFallback_get_DefaultString_m12930 (EncoderReplacementFallback_t2233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallbackBuffer System.Text.EncoderReplacementFallback::CreateFallbackBuffer()
extern "C" EncoderFallbackBuffer_t2221 * EncoderReplacementFallback_CreateFallbackBuffer_m12931 (EncoderReplacementFallback_t2233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallback::Equals(System.Object)
extern "C" bool EncoderReplacementFallback_Equals_m12932 (EncoderReplacementFallback_t2233 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallback::GetHashCode()
extern "C" int32_t EncoderReplacementFallback_GetHashCode_m12933 (EncoderReplacementFallback_t2233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;