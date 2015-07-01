#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t914;
struct WebCamDevice_t914_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m5355 (WebCamDevice_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m6522 (WebCamDevice_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t914_marshal(const WebCamDevice_t914& unmarshaled, WebCamDevice_t914_marshaled& marshaled);
void WebCamDevice_t914_marshal_back(const WebCamDevice_t914_marshaled& marshaled, WebCamDevice_t914& unmarshaled);
void WebCamDevice_t914_marshal_cleanup(WebCamDevice_t914_marshaled& marshaled);
