#include "HeaderC.h"
#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;


cercle::cercle()
{
    this->P;
    this->R = 0.0;
}

cercle::cercle(point p, double r)
{
    this->P = p; 
    this->R = r;
}

void cercle::afficher()
{
    this->P.afficherPoint();
    cout << "R = " << this->R << endl;
}

void cercle::changement(double ra)
{
    this->R = ra;
}

double cercle::surface() const
{
    
    return pow(this->R, 2) * this->pw;
}

double cercle::perimetre() const
{
    return this->R * this->pw * 2;
}

bool cercle::test_egelite(point p1, double& r1)
{
    if (this->R == r1 && P.test_egelitep(p1) == true ) {
        return true;
    }

    else { 
        return false; 
    }
}

bool cercle::appartenence(point& p2)
{

    if ((this->P.distance(p2)) == this->R) {
        return true;
    }
    else
    {
       return false;
    }
       
}
