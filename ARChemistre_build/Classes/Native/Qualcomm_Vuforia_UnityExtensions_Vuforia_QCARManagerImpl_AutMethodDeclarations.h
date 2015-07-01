#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/AutoRotationState
struct AutoRotationState_t710;
struct AutoRotationState_t710_marshaled;

void AutoRotationState_t710_marshal(const AutoRotationState_t710& unmarshaled, AutoRotationState_t710_marshaled& marshaled);
void AutoRotationState_t710_marshal_back(const AutoRotationState_t710_marshaled& marshaled, AutoRotationState_t710& unmarshaled);
void AutoRotationState_t710_marshal_cleanup(AutoRotationState_t710_marshaled& marshaled);
