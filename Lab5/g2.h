
#ifndef LAB5_G2_H
#define LAB5_G2_H

class Point {
	public:
		Point() : x(0), y(0) {}

		Point(double x, double y) : x(x), y(y) {}

		double getX() const;

		double getY() const;

		bool operator==(const Point& p) const;

		bool operator!=(const Point& p) const;

	private:
		double x;
		double y;
};

class Line {
	public:
		Line(double a, double b, double c) : a(a), b(b), c(c) {}

		Line(const Point p1, const Point p2) {
			this->a = p1.getY() - p2.getY();
			this->b = p2.getX() - p1.getX();
			this->c = p1.getX() * p2.getY() - p2.getX() * p1.getY();
		}

		double getA() const;

		double getB() const;

		double getC() const;

		bool operator==(const Line& p) const;

		bool operator!=(const Line& p) const;

	private:
		double a;
		double b;
		double c;

};

#endif
