#include "pch.h"
#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
{
}

float Vector3D::Magnitude()
{
	return sqrt((x * x) + (y * y) + (z * z));
}

Vector3D Vector3D::Normalised()
{
	Vector3D newVector3D;

	newVector3D.x = x / Magnitude();
	newVector3D.y = y / Magnitude();
	newVector3D.y = y / Magnitude();

	return newVector3D;
}


Vector3D::~Vector3D()
{
}
