#include "pch.h"
#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
{
}

/*
	Returns magnitude of the vector
*/
float Vector3D::Magnitude()
{
	return sqrt((x * x) + (y * y) + (z * z));
}

/*
	Returns version of vector with a magnitude of 1
*/
Vector3D Vector3D::Normalised()
{
	Vector3D newVector3D;

	// Divide each value by magnitude
	newVector3D.x = x / Magnitude();
	newVector3D.y = y / Magnitude();
	newVector3D.y = y / Magnitude();

	return newVector3D;
}


Vector3D::~Vector3D()
{
}
