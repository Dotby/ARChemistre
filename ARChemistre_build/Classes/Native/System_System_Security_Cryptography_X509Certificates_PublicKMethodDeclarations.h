#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1348;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1346;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1345;
// System.Security.Cryptography.Oid
struct Oid_t1347;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1349;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Security.Cryptography.DSA
struct DSA_t1350;
// System.Security.Cryptography.RSA
struct RSA_t1351;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m7311 (PublicKey_t1348 * __this, X509Certificate_t1349 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1346 * PublicKey_get_EncodedKeyValue_m7312 (PublicKey_t1348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1346 * PublicKey_get_EncodedParameters_m7313 (PublicKey_t1348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1345 * PublicKey_get_Key_m7314 (PublicKey_t1348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1347 * PublicKey_get_Oid_m7315 (PublicKey_t1348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t669* PublicKey_GetUnsignedBigInteger_m7316 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1350 * PublicKey_DecodeDSA_m7317 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___rawPublicKey, ByteU5BU5D_t669* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1351 * PublicKey_DecodeRSA_m7318 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
