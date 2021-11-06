#pragma once
class point
{
private:
	double X;
	double Y;
public:
	point();
	point(double x, double y);
	void translation(double xp, double yp);
	double distance(point& p1);
	void afficherPoint();
	bool test_egelitep(point& p2);
};