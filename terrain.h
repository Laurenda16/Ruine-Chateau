#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <limits>

#include "personnage.h"
#include "monstre.h"
#include "monstreVoyant.h"
#include "monstreAveugle.h"

class personnage;

class terrain
{
    public:
        terrain(int largeur, int hauteur);

        void initialiserTerrain();
        void definirTerrain();
        void rafraichirTerrain();
        void afficherTerrain();
        int largeur() const;
        int hauteur() const;
        const std::vector<std::vector<char>>& getTerrain() const;

        void placerPersonnage(personnage& p, int x, int y);
        void deplacerPersonnage(const personnage& p, int x_new, int y_new);

        void definirElement(char element, int x, int y);
        void afficherElementsTerrain() const;

        void sauvegarderTerrain(const std::string& nomFichier) const;
        bool chargerTerrain(const std::string& nomFichier);

    private:
        int d_largeur, d_hauteur; // Taille en largeur et hauteur du terrain
        std::vector<std::vector<char>> terr;

};

#endif // TERRAIN_H
