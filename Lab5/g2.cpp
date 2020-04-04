#include "g2.h"

double Point::getX() const {
	return this->x;
}

double Point::getY() const {
	return this->y;
}

bool Point::operator==(const Point& p) const {
	return (this->x == p.x && this->y == p.y) ? true : false;
}

bool Point::operator!=(const Point& p) const {
	return (this->x == p.x && this->y == p.y) ? false : true;
}

std::string Point::toStr() const {
	return std::string("(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")");
}

double Line::getA() const {
	return this->a;
}

double Line::getB() const {
	return this->b;
}

double Line::getC() const {
	return this->c;
}

std::string Line::toStr(){
	return std::string(std::to_string(this->getA()) + "x +" + std::to_string(this->getB()) + "y +" + std::to_string(this->getC()) + " = 0");
}

bool Line::operator==(const Line &l) const {
	return (this->a == l.a && this->b == l.b && this->c == l.c) ? true : false;
}

bool Line::operator!=(const Line &l) const {
	return (this->a == l.a && this->b == l.b && this->c == l.c) ? false : true;
}


