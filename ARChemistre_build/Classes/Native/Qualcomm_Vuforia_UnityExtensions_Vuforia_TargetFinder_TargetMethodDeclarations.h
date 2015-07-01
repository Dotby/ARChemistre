#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t789;
struct TargetSearchResult_t789_marshaled;

void TargetSearchResult_t789_marshal(const TargetSearchResult_t789& unmarshaled, TargetSearchResult_t789_marshaled& marshaled);
void TargetSearchResult_t789_marshal_back(const TargetSearchResult_t789_marshaled& marshaled, TargetSearchResult_t789& unmarshaled);
void TargetSearchResult_t789_marshal_cleanup(TargetSearchResult_t789_marshaled& marshaled);
