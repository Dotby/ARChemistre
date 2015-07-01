#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1785;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1345;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m12674 (RSAPKCS1SignatureDeformatter_t1785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m9497 (RSAPKCS1SignatureDeformatter_t1785 * __this, AsymmetricAlgorithm_t1345 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m9498 (RSAPKCS1SignatureDeformatter_t1785 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m12675 (RSAPKCS1SignatureDeformatter_t1785 * __this, AsymmetricAlgorithm_t1345 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m9499 (RSAPKCS1SignatureDeformatter_t1785 * __this, ByteU5BU5D_t669* ___rgbHash, ByteU5BU5D_t669* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
