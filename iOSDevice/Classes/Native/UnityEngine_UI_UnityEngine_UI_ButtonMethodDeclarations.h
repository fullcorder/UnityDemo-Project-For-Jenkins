#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t76;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t73;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t47;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t7;
// System.Collections.IEnumerator
struct IEnumerator_t261;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m324 (Button_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t73 * Button_get_onClick_m325 (Button_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m326 (Button_t76 * __this, ButtonClickedEvent_t73 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m327 (Button_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m328 (Button_t76 * __this, PointerEventData_t47 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m329 (Button_t76 * __this, BaseEventData_t7 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m330 (Button_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
