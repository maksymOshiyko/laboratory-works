#include "Vector2D.h"

Vector2D Vector2D::up() {
	return Vector2D(0, 1);
}

Vector2D Vector2D::right() {
	return Vector2D(1, 0);
}

Vector2D Vector2D::down() {
	return Vector2D{0, -1};
}

Vector2D Vector2D::left() {
	return Vector2D(-1, 0);
}

Vector2D Vector2D::zero() {
	return Vector2D{};
}

std::string Vector2D::toStr() const {
	return std::string("(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")");
}

Vector2D& Vector2D::turn(double angle) {
	double rad = angle * M_PI / 180;
	double temp = this->x;
	this->x = this->x * cos(rad) - this->y * sin(rad);
	this->y = this->y * cos(rad) + temp * sin(rad);
	return *this;
}

Vector2D& Vector2D::normalize() {
	double module = sqrt(pow(this->x, 2) + pow(this->y, 2));
	this->x /= module;
	this->y /= module;
	return *this;
}

bool Vector2D::compare(const Vector2D& v) {
	double module1 = sqrt(pow(this->x, 2) + pow(this->y, 2));
	double module2 = sqrt(pow(v.x, 2) + pow(v.y, 2));
	if (module1 >= module2)
		return true;
	return false;
}

double Vector2D::length() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

