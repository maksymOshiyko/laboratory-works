#ifndef VECTOR_VECTOR2D_H
#define VECTOR_VECTOR2D_H

#include <string>
#include <cmath>
#include "Vector3D.h"


class Vector2D {

	private:
		double x;
		double y;
	public:
		Vector2D() {
			this->x = 0;
			this->y = 0;
		}

		Vector2D(double x, double y) {
			this->x = x;
			this->y = y;
		}

		double getX() {
			return this->x;
		}

		double getY() {
			return this->y;
		}

		static Vector2D up();

		static Vector2D right();

		static Vector2D down();

		static Vector2D left();

		static Vector2D zero();

		std::string toStr() const;

		Vector2D& turn(double angle);

		Vector2D& normalize();

		bool compare(const Vector2D& v);

		double length();

		Vector2D operator+(const Vector2D& v) {
			return Vector2D{this->x + v.x, this->y + v.y};
		}

		Vector2D operator-(const Vector2D& v) {
			return Vector2D{this->x - v.x, this->y - v.y};
		}

		Vector2D& operator=(const Vector2D& v) {
			if (this != &v) {
				this->x = v.x;
				this->y = v.y;
			}
			return *this;
		}

		bool operator==(const Vector2D& v) {
			return (this->x == v.x && this->y == v.y) ? true : false;
		}
};


#endif //VECTOR_VECTOR2D_H
