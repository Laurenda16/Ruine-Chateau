#include "terrain.h"

terrain::terrain(int x, int y) : tailleX(x), tailleY(y) {
        terr.resize(x, std::vector<char>(y, '.'));
    }

void terrain::genererTerrain() {
    // Initialisation de la graine pour la g�n�ration al�atoire
    srand(time(nullptr));

    // Remplissage du terrain avec des chemins libres ('.') et des murs ('#')
    for (int i = 0; i < tailleX; ++i) {
        for (int j = 0; j < tailleY; ++j) {
            // G�n�rer al�atoirement des murs avec une certaine probabilit�
            if (rand() % 100 < 30) { // Changer 30 pour modifier la densit� des murs
                terr[i][j] = '#';
            } else {
                terr[i][j] = '.'; // Chemin libre
            }
        }
    }
}

void terrain::afficherTerrain() const{
     for (int i = 0; i < tailleX; ++i) {
            for (int j = 0; j < tailleY; ++j) {
                std::cout << terr[i][j] << ' ';
            }
            std::cout << std::endl;
        }
}
