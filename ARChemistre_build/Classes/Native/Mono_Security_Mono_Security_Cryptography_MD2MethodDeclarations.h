﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2
struct MD2_t1678;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.MD2::.ctor()
extern "C" void MD2__ctor_m8748 (MD2_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
extern "C" MD2_t1678 * MD2_Create_m8749 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create(System.String)
extern "C" MD2_t1678 * MD2_Create_m8750 (Object_t * __this /* static, unused */, String_t* ___hashName, MethodInfo* method) IL2CPP_METHOD_ATTR;