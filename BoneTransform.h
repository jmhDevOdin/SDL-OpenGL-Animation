// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "Math.h"

class BoneTransform
{
public:
	// For now, just make this data public
	Quaternion mRotation;
	Vector3 mTranslation;

	Matrix4 ToMatrix() const;

	static BoneTransform Interpolate(const BoneTransform& a, const BoneTransform& b, float f);
};