#include "g2.h"

#ifndef LAB5_G2_CPP
#define LAB5_G2_CPP

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

double Line::getA() const {
	return this->a;
}

double Line::getB() const {
	return this->b;
}

double Line::getC() const {
	return this->c;
}

bool Line::operator==(const Line &l) const {
	return (this->a == l.a && this->b == l.b && this->c == l.c) ? true : false;
}

bool Line::operator!=(const Line &l) const {
	return (this->a == l.a && this->b == l.b && this->c == l.c) ? false : true;
}

#endif
