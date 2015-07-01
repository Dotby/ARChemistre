#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t2173;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1686;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.UInt32[]
struct UInt32U5BU5D_t1661;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m12519 (DESTransform_t2173 * __this, SymmetricAlgorithm_t1686 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t669* ___key, ByteU5BU5D_t669* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m12520 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m12521 (DESTransform_t2173 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m12522 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___input, ByteU5BU5D_t669* ___output, UInt32U5BU5D_t1661* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m12523 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m12524 (DESTransform_t2173 * __this, ByteU5BU5D_t669* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m12525 (DESTransform_t2173 * __this, ByteU5BU5D_t669* ___input, ByteU5BU5D_t669* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m12526 (DESTransform_t2173 * __this, ByteU5BU5D_t669* ___input, ByteU5BU5D_t669* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t669* DESTransform_GetStrongKey_m12527 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
