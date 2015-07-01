#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/TrackableResultData
struct TrackableResultData_t698;
struct TrackableResultData_t698_marshaled;

void TrackableResultData_t698_marshal(const TrackableResultData_t698& unmarshaled, TrackableResultData_t698_marshaled& marshaled);
void TrackableResultData_t698_marshal_back(const TrackableResultData_t698_marshaled& marshaled, TrackableResultData_t698& unmarshaled);
void TrackableResultData_t698_marshal_cleanup(TrackableResultData_t698_marshaled& marshaled);
