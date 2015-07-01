#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t340;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t338;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t262;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t258;
// System.Collections.IEnumerator
struct IEnumerator_t26;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1315 (Button_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t338 * Button_get_onClick_m1316 (Button_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1317 (Button_t340 * __this, ButtonClickedEvent_t338 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1318 (Button_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1319 (Button_t340 * __this, PointerEventData_t262 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1320 (Button_t340 * __this, BaseEventData_t258 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1321 (Button_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
