#include <iostream>

#include "menuJeu.h"

using namespace std;

void test1()
{
    /*terrain t{0,0};
    t.initialiserTerrain();
    t.definirTerrain();
    cout<<std::endl;

    monstre m1{50,80,3,2,10};
    t.placerPersonnage(m1,m1.x(),m1.y());
    monstre m2{50,25,3,2,30};
    t.placerPersonnage(m2,m2.x(),m2.y()+3);

    t.afficherTerrain();*/

    menuJeu m {};
    m.execute();
}

/**!mettre ce main en commentaire et mettre en commentaire la ligne 7085 du fichier doctest.h pour que ce main s'execute!*/
int main()
{
    test1();
    return 0;
}
