﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t399;
struct Event_t399_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m2535 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m6155 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m6156 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m6157 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m2559 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m6158 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C" int32_t Event_GetTypeForControl_m6159 (Event_t399 * __this, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t20  Event_get_mousePosition_m6160 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m6161 (Event_t399 * __this, Vector2_t20 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t20  Event_get_delta_m6162 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m6163 (Event_t399 * __this, Vector2_t20 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2555 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2557 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m6164 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2556 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t399 * Event_get_current_m6165 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m6166 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m6167 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m6168 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m2560 (Object_t * __this /* static, unused */, Event_t399 * ___outEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m6169 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m6170 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m6171 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m6172 (Event_t399 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m6173 (Event_t399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t399_marshal(const Event_t399& unmarshaled, Event_t399_marshaled& marshaled);
void Event_t399_marshal_back(const Event_t399_marshaled& marshaled, Event_t399& unmarshaled);
void Event_t399_marshal_cleanup(Event_t399_marshaled& marshaled);