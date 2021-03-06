// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "Actor.h"

class BallActor : public Actor
{
public:
	BallActor(class Game* game);

	void UpdateActor(float deltaTime) override;
	void SetPlayer(Actor* player);

	void HitTarget();
private:
	class AudioComponent* mAudioComp;
	class BallMove* mMyMove;
	float mLifeSpan;
};
