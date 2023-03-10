#pragma once
#include "Entity.h"
#include "Vector3D.h"

class DynamicEntity :
	public Entity
{
private:
	float _speed;
public:
	DynamicEntity();
	DynamicEntity(float speed);
	float GetSpeed();
	void SetSpeed(float newSpeed);
	void Move(Vector3D direction);
	~DynamicEntity();
};

