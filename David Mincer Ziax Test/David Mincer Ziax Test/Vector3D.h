#pragma once
class Vector3D
{
public:
	float x = 0,
		y = 0,
		z = 0;

	Vector3D();
	float Magnitude();
	Vector3D Normalised();
	~Vector3D();
};

