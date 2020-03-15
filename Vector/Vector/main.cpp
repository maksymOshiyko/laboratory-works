#include <iostream>
#include <string>
using namespace std;

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

		Vector2D up() {
			return Vector2D(0, 1);
		}

		Vector2D right() {
			return Vector2D(1, 0);
		}

		Vector2D down() {
			return Vector2D{0, -1};
		}

		Vector2D left() {
			return Vector2D(-1, 0);
		}

		Vector2D zero() {
			return Vector2D{};
		}

		string toStr() {
			return string("(" + to_string(this->x) + ", " + to_string(this->y) + ")");
		}

		Vector2D& turn(double angle) {
			double rad = angle * 3.14 / 180;
			this->x = this->x * cos(rad) - this->y * sin(rad);
			this->y = this->y * cos(rad) + this->x * sin(rad);
			return *this;
		}
		
		Vector2D operator + (const Vector2D& v) {
			return Vector2D{ this->x + v.x, this->y + v.y };
		}

		Vector2D& operator = (const Vector2D& v) {
			if (this != &v) {
				this->x = v.x;
				this->y = v.y;
			}
			return *this;
		}

};


int main()
{
	Vector2D v1(1,0), v2(2, 3), v3;
	v1.turn(90);
	cout << v1.getX();
	
	return 0;
}
