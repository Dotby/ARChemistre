#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t2184;
// System.Security.Cryptography.RC2
struct RC2_t1792;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m12621 (RC2Transform_t2184 * __this, RC2_t1792 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t669* ___key, ByteU5BU5D_t669* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m12622 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m12623 (RC2Transform_t2184 * __this, ByteU5BU5D_t669* ___input, ByteU5BU5D_t669* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
