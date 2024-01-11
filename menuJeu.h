#ifndef MENUJEU_H
#define MENUJEU_H

#include <iostream>
#include <filesystem>
#include <vector>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <dirent.h>
#include <limits>
#include <conio.h>
#include <thread>

#include "terrain.h"
#include "personnage.h"
#include "monstre.h"
#include "monstreAveugle.h"
#include "monstreVoyant.h"
#include "aventurier.h"
#include "equipement.h"
#include "epee.h"
#include "armure.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class menuJeu
{
    public :
        void execute();

    private:
        int choixMenu();
        void afficherTerrains();
        void commencerPartie();
        void creerTerrain();
        void modifierTerrain();
        void verificationFin();

        static constexpr char* cheminDossier = "Terrains/";

        vector<std::string> fichiers;
        string nomFichier;
        char destination;
        bool quitter = false;
        bool ramasseAmulette = false;

};


#endif // MENUJEU_H
