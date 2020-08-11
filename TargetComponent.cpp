// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#include "BoxComponent.h"
#include "Actor.h"
#include "Game.h"
#include "PhysWorld.h"
#include "TargetComponent.h"
#include "Math.h"
#include "Game.h"
#include "HUD.h"

TargetComponent::TargetComponent(Actor * owner)
	:Component(owner)
{
	mOwner->GetGame()->GetHUD()->AddTargetComponent(this);
}

TargetComponent::~TargetComponent()
{
	mOwner->GetGame()->GetHUD()->RemoveTargetComponent(this);
}
