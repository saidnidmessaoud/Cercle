#pragma once
#include "point.h"
class cercle
{
private:
	point P;
	double R;
	double const pw = 3.14;
public:
	cercle();
	cercle(point p, double r);
	void afficher();
	void changement(double ra);
	double surface()const;
	double perimetre()const;
	bool test_egelite(point p1, double& r1);
	bool appartenence(point& p2);
};