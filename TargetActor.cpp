// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#include "TargetActor.h"
#include "Game.h"
#include "Renderer.h"
#include "MeshComponent.h"
#include "BoxComponent.h"
#include "Mesh.h"
#include "TargetComponent.h"

TargetActor::TargetActor(Game* game)
	:Actor(game)
{
	//SetScale(10.0f);
	SetRotation(Quaternion(Vector3::UnitZ, Math::Pi));
	MeshComponent* mc = new MeshComponent(this);
	Mesh* mesh = GetGame()->GetRenderer()->GetMesh("Assets/Target.gpmesh");
	mc->SetMesh(mesh);
	// Add collision box
	BoxComponent* bc = new BoxComponent(this);
	bc->SetObjectBox(mesh->GetBox());
	new TargetComponent(this);

}
