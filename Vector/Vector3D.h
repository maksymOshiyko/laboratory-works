#ifndef VECTOR_VECTOR3D_H
#define VECTOR_VECTOR3D_H

#include <string>
#include <cmath>
#include "Vector2D.h"


class Vector3D {

	private:
		double x;
		double y;
		double z;

	public:
		Vector3D() {
			this->x = 0;
			this->y = 0;
			this->z = 0;
		}

		Vector3D(double x, double y, double z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}

		double getX() {
			return this->x;
		}

		double getY() {
			return this->y;
		}

		double getZ() {
			return this->z;
		}

		static Vector3D unitVectorX();

		static Vector3D unitVectorY();

		static Vector3D unitVectorZ();

		static Vector3D zero();

		std::string toStr();

		Vector3D& normalize();

		bool compare(const Vector3D& v);

		double length();

		bool crossPlane(double a, double b, double c){
			double scalarProduct = a * this->x + b * this->y + c * this.z;
			if(scalarProduct == 0)
				return false;
			return true;
		}

		Vector3D operator+(const Vector3D& v) {
			return Vector3D{this->x + v.x, this->y + v.y, this->z + v.z};
		}

		Vector3D operator-(const Vector3D& v) {
			return Vector3D{this->x - v.x, this->y - v.y, this->z + v.z};
		}

		Vector3D& operator=(const Vector3D& v) {
			if (this != &v) {
				this->x = v.x;
				this->y = v.y;
				this->z = v.z;
			}
			return *this;
		}



		bool operator==(const Vector3D& v) {
			return (this->x == v.x && this->y == v.y && this->z == v.z) ? true : false;
		}

		Vector3D& operator*(double a) {
			this->x *= a;
			this->y *= a;
			this->z *= a;
			return *this;
		}
};


#endif //VECTOR_VECTOR3D_H
