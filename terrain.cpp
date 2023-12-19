#include "terrain.h"

terrain::terrain(int x, int y) : tailleX(x), tailleY(y) {
        initialiserTerrain();
    }

/*void terrain::genererTerrain() {
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
}*/
void terrain::initialiserTerrain() {

    terr.resize(tailleX, std::vector<char>(tailleY, '.'));
    for (int i = 0; i < tailleX; ++i) {
        for (int j = 0; j < tailleY; ++j) {
            if (i == 0 || j == 0 || i == tailleX - 1 || j == tailleY - 1) {
                terr[i][j] = '@'; // Cases inaccessibles à l'extérieur du château
            } else {
                terr[i][j] = '.'; // Cases par défaut
                 //terr[i][j] = '#';
            }
        }
    }

    // Placement des murs dans le château
    /*for (int i = 1; i < tailleX - 1; ++i) {
        for (int j = 1; j < tailleY - 1; ++j) {
                terr[i][j] = '#';
            }
        }*/

}


void terrain::definirTerrain() {
        std::cout << "Entrez la nouvelle taille X du terrain : ";
        std::cin >> tailleX;

        std::cout << "Entrez la nouvelle taille Y du terrain : ";
        std::cin >> tailleY;

        // Réinitialiser le terrain avec les nouvelles tailles
        initialiserTerrain();
}


void terrain::afficherTerrain() const{
     for (int i = 0; i < tailleX; ++i) {
            for (int j = 0; j < tailleY; ++j) {
                std::cout << terr[i][j] << ' ';
            }
            std::cout << std::endl;
        }
}

void terrain::placerPersonnage(personnage& p, int x, int y) {
        terr[x][y] = 'P';
        p.seDeplace(x, y);
         // 'P' représente le personnage sur la carte
    }
