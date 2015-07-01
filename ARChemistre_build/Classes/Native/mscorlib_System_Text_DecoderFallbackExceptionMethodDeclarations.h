﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t2226;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C" void DecoderFallbackException__ctor_m12895 (DecoderFallbackException_t2226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C" void DecoderFallbackException__ctor_m12896 (DecoderFallbackException_t2226 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C" void DecoderFallbackException__ctor_m12897 (DecoderFallbackException_t2226 * __this, String_t* ___message, ByteU5BU5D_t669* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;