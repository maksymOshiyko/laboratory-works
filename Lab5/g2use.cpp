#include "g2use.h"
#include "g2.h"
#include <cmath>

bool isEqual(Line l1, Line l2 ){
	double module1 = sqrt(pow(l1.getA(),2) + pow(l1.getB(),2));
	double module2 = sqrt(pow(l2.getA(),2) + pow(l2.getB(),2));
	if(l1.getA()/module1 == l2.getA()/module2 && l1.getB()/module1 == l2.getB()/module2 && l1.getC()/module1 == l2.getC()/module2){
		return true;
	}
	return false;
}

bool isParallel(Line l1, Line l2){
	double k1 = -(l1.getA() / l1.getB());
	double k2 = -(l2.getA() / l2.getB());
	if(k1 == k2){
		return true;
	}
	return false;
}





