#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<vector>

class terrain {
public:
 terrain(int x, int y);
 void genererTerrain();
 void afficherTerrain() const;

private:
std::vector<std::vector<char>> terr;
int tailleX, tailleY; // Taille en largeur X et hauteur Y du terrain
};


#endif // TERRAIN_H
