#include "pch.h"
#include "Entity.h"
#include "Vector3D.h"


Entity::Entity()
{
}

Vector3D Entity::GetPos()
{
	return _pos;
}

void Entity::SetPos(float x, float y, float z)
{
	_pos.x = x;
	_pos.y = y;
	_pos.z = z;
}

Vector3D Entity::GetScale()
{
	return _scale;
}

void Entity::SetScale(float x, float y, float z)
{
	_scale.x = x;
	_scale.y = y;
	_scale.z = z;
}

Vector3D Entity::GetRotation()
{
	return _rot;
}

void Entity::SetRotation(float x, float y, float z)
{
	_rot.x = x;
	_rot.y = y;
	_rot.z = z;
}


Entity::~Entity()
{
}
