#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1733;
// System.IO.Stream
struct Stream_t1719;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1331;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1332;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1316;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1345;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m9106 (HttpsClientStream_t1733 * __this, Stream_t1719 * ___stream, X509CertificateCollection_t1331 * ___clientCertificates, HttpWebRequest_t1332 * ___request, ByteU5BU5D_t669* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m9107 (HttpsClientStream_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m9108 (HttpsClientStream_t1733 * __this, X509Certificate_t1316 * ___certificate, Int32U5BU5D_t186* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1316 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m9109 (Object_t * __this /* static, unused */, X509CertificateCollection_t1331 * ___clientCerts, X509Certificate_t1316 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1331 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1345 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m9110 (Object_t * __this /* static, unused */, X509Certificate_t1316 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
