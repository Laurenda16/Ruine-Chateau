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

    initialiserTerrain();
}

void terrain::rafraichirTerrain()
{
    // Effacer le contenu de la console
    system("cls");

    cout << "Touches de deplacement : zqsd\n";
    cout << "'@' represente l'aventurier, 'M' les monstres et 'X' l'amulette\n";
    cout << "Recuperez l'amulette et sortez du chateau (touchez un mur) pour gagner la partie\n\n";

    afficherTerrain();

    cout << "\nAppuyer sur echap pour quitter\n";
}

void terrain::afficherTerrain()
{
    for (int i = 0; i < d_largeur; ++i)
    {
        for (int j = 0; j < d_hauteur; ++j)
        {
            if (i < terr.size() && j < terr[i].size()) {
                std::cout << terr[i][j] << ' ';

                // Effacez la position précédente de l'aventurier
                if (terr[i][j] == '@') {
                    terr[i][j] = '.';
                }
            } else {
                std::cout << "Erreur d'indice : " << i << ", " << j << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

int terrain::largeur() const
{
    return d_largeur;
}

int terrain::hauteur() const
{
    return d_hauteur;
}

const std::vector<std::vector<char>>& terrain::getTerrain() const
{
    return terr;
}

// Méthode pour placer un personnage sur le terrain
void terrain::placerPersonnage(personnage& p, int x, int y)
{
    if (p.getEstAventurier())
    {
        terr [x][y] = '@'; //'@' représente l'aventurier sur le terrain
    } else
    {
        terr [x][y] = 'M'; //'M' représente un monstre sur le terrain
    }
}


void terrain::deplacerPersonnage(const personnage& p, int x_new, int y_new)
{
    if (p.getEstAventurier())
    {
        terr[x_new][y_new] = '@';
    } else
    {
        terr[x_new][y_new] = 'M';
    }

    rafraichirTerrain();
}


void terrain::definirElement(char element, int x, int y)
{
    if (x >= 0 && y >= 0 && x < d_largeur && y < d_hauteur) {
        terr[x][y] = element;
    }
}

void terrain::afficherElementsTerrain() const
{
    for (int i = 0; i < d_largeur; ++i) {
        for (int j = 0; j < d_hauteur; ++j) {
            std::cout << terr[i][j] << ' ';
        }
        std::cout << '\n';
    }
}




void terrain::sauvegarderTerrain(const std::string& nomFichier) const
{
    std::string cheminDossier = "Terrains/";
    std::string extension = ".txt";
    std::string cheminComplet = cheminDossier + nomFichier + extension;

    std::ofstream fichier(cheminComplet);

    if (fichier.is_open())
    {
        //Ecrire les dimensions en tant qu'en-tête
        fichier << d_largeur << ' ' << d_hauteur << std::endl;


        for (int i = 0; i < d_largeur; ++i)
        {
            for (int j = 0; j < d_hauteur; ++j)
            {
                fichier << terr[i][j] << ' ';
            }
            fichier << std::endl;
        }

        fichier.close();
        std::cout << "Terrain sauvegarde avec succes dans le fichier " << cheminComplet << std::endl;
    }
    else
    {
        std::cout << "Erreur lors de l'ouverture du fichier " << cheminComplet << " pour la sauvegarde." << std::endl;
    }
}

bool terrain::chargerTerrain(const std::string& nomFichier)
{
    std::ifstream fichier(nomFichier);

    if (fichier.is_open())
    {
        fichier >> d_largeur >> d_hauteur;

        initialiserTerrain();

        // Lire le terrain
        for (int i = 0; i < d_largeur; ++i)
        {
            for (int j = 0; j < d_hauteur; ++j)
            {
                char caractere;
                fichier >> caractere;
                terr[i][j] = caractere;
            }
        }

        fichier.close();

        epee ep {50};
        armure arm {50};
        aventurier a {50,80,1,1,ep,arm,true};
        placerPersonnage(a,a.x(),a.y());

        monstreVoyant mv {50,80,5,5,50,false};
        placerPersonnage(mv,mv.x(),mv.y());

        monstreAveugle ma {50,80,10,10,50,false};
        placerPersonnage(ma,ma.x(),ma.y());

        definirElement('X', 12, 5);
        //afficherElementsTerrain();

        return true;
    }
    else
    {
        return false;
    }
}
