#include "Vector3D.h"

Vector3D Vector3D::unitVectorX() {
	return Vector3D(1, 0, 0);
}

Vector3D Vector3D::unitVectorY() {
	return Vector3D(0, 1, 0);
}

Vector3D Vector3D::unitVectorZ() {
	return Vector3D{0, 0, 1};
}

Vector3D Vector3D::zero() {
	return Vector3D{};
}

std::string Vector3D::toStr() {
	return std::string("(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ", " + std::to_string(this->z) +  ")");
}


Vector3D& Vector3D::normalize() {
	double module = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
	this->x /= module;
	this->y /= module;
	this->z /= module;
	return *this;
}

bool Vector3D::compare(const Vector3D& v) {
	double module1 = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
	double module2 = sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));

	if (module1 >= module2)
		return true;
	return false;
}

double Vector3D::length() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

