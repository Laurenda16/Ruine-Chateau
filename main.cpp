#include <iostream>
#include"terrain.h"
#include "personnage.h"
#include"monstre.h"

using namespace std;

void test1()
{
    terrain t{0,0};
    t.initialiserTerrain();
    t.definirTerrain();
    t.afficherTerrain();
    monstre m{50,80,3,2,10};
    t.placerPersonnage(m,5,3);
}

//main mis en commentaire pour �viter red�claration � cause de maintest.cpp
/*int main()
{
   /* terrain t{5,7};
    t.genererTerrain();
    t.afficherTerrain();*/
   /*test1();
   return 0;
}*/
