#pragma once
#include "Vector3D.h"

class Entity
{
private:
	Vector3D _pos,
		_scale,
		_rot;

public:
	Entity();
	Vector3D GetPos();
	void SetPos(float x, float y, float z);
	Vector3D GetScale();
	void SetScale(float x, float y, float z);
	Vector3D GetRotation();
	void SetRotation(float x, float y, float z);
	~Entity();
};

