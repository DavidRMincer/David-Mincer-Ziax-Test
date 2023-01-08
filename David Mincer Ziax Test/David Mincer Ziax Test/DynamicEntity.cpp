#include "pch.h"
#include "DynamicEntity.h"


DynamicEntity::DynamicEntity()
{
}

float DynamicEntity::GetSpeed()
{
	return _speed;
}

void DynamicEntity::SetSpeed(float newSpeed)
{
	_speed = newSpeed;
}

void DynamicEntity::Move(Vector3D direction)
{
	direction = direction.Normalised();

	SetPos(GetPos().x + direction.x,
		GetPos().y + direction.y,
		GetPos().z + direction.z);
}


DynamicEntity::~DynamicEntity()
{
}
