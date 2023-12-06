#include "terrain.h"

terrain::terrain(int x, int y) : tailleX(x), tailleY(y) {
        terr.resize(x, std::vector<char>(y, '.'));
    }

void terrain::genererTerrain() {
    // Initialisation de la graine pour la génération aléatoire
    srand(time(nullptr));

    // Remplissage du terrain avec des chemins libres ('.') et des murs ('#')
    for (int i = 0; i < tailleX; ++i) {
        for (int j = 0; j < tailleY; ++j) {
            // Générer aléatoirement des murs avec une certaine probabilité
            if (rand() % 100 < 30) { // Changer 30 pour modifier la densité des murs
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
