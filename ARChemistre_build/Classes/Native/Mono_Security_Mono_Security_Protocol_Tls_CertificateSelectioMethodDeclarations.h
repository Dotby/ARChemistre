﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1731;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1316;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1331;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m9432 (CertificateSelectionCallback_t1731 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1316 * CertificateSelectionCallback_Invoke_m9433 (CertificateSelectionCallback_t1731 * __this, X509CertificateCollection_t1331 * ___clientCertificates, X509Certificate_t1316 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1331 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" X509Certificate_t1316 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1731(Il2CppObject* delegate, X509CertificateCollection_t1331 * ___clientCertificates, X509Certificate_t1316 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1331 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m9434 (CertificateSelectionCallback_t1731 * __this, X509CertificateCollection_t1331 * ___clientCertificates, X509Certificate_t1316 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1331 * ___serverRequestedCertificates, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1316 * CertificateSelectionCallback_EndInvoke_m9435 (CertificateSelectionCallback_t1731 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;