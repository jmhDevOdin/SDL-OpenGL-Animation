// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "Math.h"

const size_t MAX_SKELETON_BONES = 96;

struct MatrixPalette
{
	Matrix4 mEntry[MAX_SKELETON_BONES];
};
