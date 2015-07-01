#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinderImpl/TargetFinderState
struct TargetFinderState_t792;
struct TargetFinderState_t792_marshaled;

void TargetFinderState_t792_marshal(const TargetFinderState_t792& unmarshaled, TargetFinderState_t792_marshaled& marshaled);
void TargetFinderState_t792_marshal_back(const TargetFinderState_t792_marshaled& marshaled, TargetFinderState_t792& unmarshaled);
void TargetFinderState_t792_marshal_cleanup(TargetFinderState_t792_marshaled& marshaled);
