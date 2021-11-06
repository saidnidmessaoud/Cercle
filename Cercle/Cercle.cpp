#include <iostream>
#include "HeaderC.h"
#include "Point.h"

using namespace std;

int main()
{
    point p1(15, 3);
    cercle c1(p1, 2);


    c1.afficher();


    c1.changement(30);
    cout << "\n""Apres Le chengement  : " "\n" << endl;
    c1.afficher();


    cout << endl;


    cout << "la surface = " << c1.surface() << endl;
    cout << "le perimetre = " << c1.perimetre() << endl;


    cout << endl;


    point p2(12, 3);
    double r1 = 30;
    
    cout << "**le test de l'egalite**" << endl << endl;

    if (c1.test_egelite(p2, r1)) {
        cout << "les deux cercles sont egaux " << endl;
    }
    else{
        cout << "les deux cercles ne sont pas egaux " << endl;
    }


    cout << endl;


    cout << "**L'appartenance**" << endl << endl;
    if (c1.appartenence(p2) == true) {
        cout << "Les deux points sont s'appartiennent" << endl;
    }
    else {
        cout << "Les deux points ne sont pas s'appartiennent" << endl;
    }



}

