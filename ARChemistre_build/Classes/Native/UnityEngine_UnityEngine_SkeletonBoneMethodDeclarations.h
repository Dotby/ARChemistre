﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1076;
struct SkeletonBone_t1076_marshaled;

void SkeletonBone_t1076_marshal(const SkeletonBone_t1076& unmarshaled, SkeletonBone_t1076_marshaled& marshaled);
void SkeletonBone_t1076_marshal_back(const SkeletonBone_t1076_marshaled& marshaled, SkeletonBone_t1076& unmarshaled);
void SkeletonBone_t1076_marshal_cleanup(SkeletonBone_t1076_marshaled& marshaled);