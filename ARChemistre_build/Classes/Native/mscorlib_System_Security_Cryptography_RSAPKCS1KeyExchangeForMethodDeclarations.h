#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1799;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1345;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m9596 (RSAPKCS1KeyExchangeFormatter_t1799 * __this, AsymmetricAlgorithm_t1345 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t669* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m9597 (RSAPKCS1KeyExchangeFormatter_t1799 * __this, ByteU5BU5D_t669* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m12673 (RSAPKCS1KeyExchangeFormatter_t1799 * __this, AsymmetricAlgorithm_t1345 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
