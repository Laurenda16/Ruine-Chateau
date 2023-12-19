#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<vector>
#include"personnage.h"

class personnage;
class terrain {
public:
 terrain(int x, int y);
 void initialiserTerrain();
 void definirTerrain();
 void afficherTerrain() const;
 void placerPersonnage(personnage& p, int x, int y);

private:
std::vector<std::vector<char>> terr;
int tailleX, tailleY; // Taille en largeur X et hauteur Y du terrain
};


#endif // TERRAIN_H
