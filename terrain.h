#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "personnage.h"

class personnage;

class terrain {

    public:
         terrain(int x, int y);

         void initialiserTerrain();
         void definirTerrain();
         void afficherTerrain() const;
         void placerPersonnage(personnage& p, int x, int y);
         void deplacerPersonnage(personnage& p, int x_new, int y_new);

    private:
        int tailleX, tailleY; // Taille en largeur X et hauteur Y du terrain
        std::vector<std::vector<char>> terr;

};

#endif // TERRAIN_H
