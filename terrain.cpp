#include "terrain.h"

terrain::terrain(int x, int y) : tailleX(x), tailleY(y) {
        initialiserTerrain();
    }

void terrain::initialiserTerrain() {

    terr.resize(tailleX, std::vector<char>(tailleY, '.'));
    for (int i = 0; i < tailleX; ++i) {
        for (int j = 0; j < tailleY; ++j) {
            if (i == 0 || j == 0 || i == tailleX - 1 || j == tailleY - 1) {
                terr[i][j] = '#'; // Cases inaccessibles à l'extérieur du château
            } else {
                terr[i][j] = '.'; // Cases par défaut
            }
        }
    }

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


        terr [x][y] = 'P'; // 'P' représente un personnage sur le terrain
        p.seDeplace(x, y);
}


    // Méthode pour déplacer un personnage sur le terrain
void terrain::deplacerPersonnage(personnage& p, int x_new, int y_new) {
        terr[p.x()][p.y()] = '.'; // Efface l'ancienne position
        terr[x_new][y_new] = 'P'; // Nouvelle position du personnage
        p.seDeplace(x_new, y_new);
}
