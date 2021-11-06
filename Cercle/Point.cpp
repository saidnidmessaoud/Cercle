#include "Point.h"
#include "HeaderC.h"
#include <iostream>
#include <math.h>
using namespace std;

point::point()
{
    this->X = 0;
    this->Y = 0;
}

point::point(double x, double y)
{
    this->X = x;
    this->Y = y;
}

void point::translation(double xp, double yp)
{
    this->X = this->X + xp;
    this->Y = this->Y + xp;
}

double point::distance(point& p1)
{
    int d;
    d = sqrt(pow(this->X - p1.X, 2) + pow(this->Y - p1.Y, 2));
    return d;
}

void point::afficherPoint()
{
    cout << "X = " << this->X << endl;
    cout << "Y = " << this->Y << endl;
}

bool point::test_egelitep(point& p2)
{
    if (this->X == p2.X && this->Y == p2.Y) {
        return true;
    }
    else{
        return false;
    }
    
}
