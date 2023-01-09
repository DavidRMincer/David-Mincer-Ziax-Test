#include "pch.h"
#include "DynamicEntity.h"


DynamicEntity::DynamicEntity()
{
}

DynamicEntity::DynamicEntity(float speed)
{
	_speed = speed;
}

/*
	Returns speed
*/
float DynamicEntity::GetSpeed()
{
	return _speed;
}

/*
	Sets speed value
*/
void DynamicEntity::SetSpeed(float newSpeed)
{
	_speed = newSpeed;
}

/*
	Changes position by speed along direction
*/
void DynamicEntity::Move(Vector3D direction)
{
	// Normalises direction vector first
	direction = direction.Normalised();

	// Moves entity
	SetPos(GetPos().x + direction.x,
		GetPos().y + direction.y,
		GetPos().z + direction.z);
}


DynamicEntity::~DynamicEntity()
{
}
