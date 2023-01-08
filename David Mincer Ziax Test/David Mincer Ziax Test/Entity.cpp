#include "pch.h"
#include "Entity.h"


Entity::Entity()
{
}

/*
	Returns position
*/
Vector3D Entity::GetPos()
{
	return _pos;
}

/*
	Sets position to new values
*/
void Entity::SetPos(float x, float y, float z)
{
	_pos.x = x;
	_pos.y = y;
	_pos.z = z;
}

/*
	Returns scale
*/
Vector3D Entity::GetScale()
{
	return _scale;
}

/*
	Sets scale factor to new values
*/
void Entity::SetScale(float x, float y, float z)
{
	_scale.x = x;
	_scale.y = y;
	_scale.z = z;
}

/*
	Returns rotation
*/
Vector3D Entity::GetRotation()
{
	return _rot;
}

/*
	Sets rotation to new values
*/
void Entity::SetRotation(float x, float y, float z)
{
	_rot.x = x;
	_rot.y = y;
	_rot.z = z;
}


Entity::~Entity()
{
}
