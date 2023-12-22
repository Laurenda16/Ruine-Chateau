#include "terrain.h"

terrain::terrain(int largeur, int hauteur) : d_largeur(largeur), d_hauteur(hauteur)
{
    initialiserTerrain();
}

void terrain::initialiserTerrain()
{
    terr.resize(d_largeur, std::vector<char>(d_hauteur, '.'));
    for (int i = 0; i < d_largeur; ++i) {
        for (int j = 0; j < d_hauteur; ++j) {
            if (i == 0 || j == 0 || i == d_largeur - 1 || j == d_hauteur - 1) {
                terr[i][j] = '#'; // Murs du chateau
            } else {
                terr[i][j] = '.'; // Cases par défaut
            }
        }
    }
}


void terrain::definirTerrain()
{
    std::cout << "Entrez la largeur du terrain : ";
    std::cin >> d_largeur;

    std::cout << "Entrez la hauteur du terrain : ";
    std::cin >> d_hauteur;

    // Réinitialiser le terrain avec les nouvelles tailles
    initialiserTerrain();
}


void terrain::afficherTerrain() const
{
    for (int i = 0; i < d_largeur; ++i)
    {
        for (int j = 0; j < d_hauteur; ++j)
        {
            std::cout << terr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

// Méthode pour placer un personnage sur le terrain
void terrain::placerPersonnage(personnage& p, int x, int y)
{
    terr [x][y] = 'P'; // 'P' représente un personnage sur le terrain
    p.seDeplace(x, y);
}


// Méthode pour déplacer un personnage sur le terrain
void terrain::deplacerPersonnage(personnage& p, int x_new, int y_new)
{
    terr[p.x()][p.y()] = '.'; // Efface l'ancienne position
    terr[x_new][y_new] = 'P'; // Nouvelle position du personnage
    p.seDeplace(x_new, y_new);
}
