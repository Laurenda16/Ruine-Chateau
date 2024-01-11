#ifndef MONSTRE_H
#define MONSTRE_H

#include <cstdlib>

#include "aventurier.h"
#include "personnage.h"

class monstre : public personnage
{
    public:
        monstre(int pointsDeVie, int pointsDeForce, int x, int y, double pctHabilite, bool estAventurier);

        void seDeplace(int x_new, int y_new) override; //Methode definie dans la classe personnage

        double pctHabilite() const;

        void attaque(personnage& p) override; //Methode definie dans la classe personnage
        void recoitAttaque(int degats) override; //Methode definie dans la classe personnage

    private:
        double d_pctHabilite;
};


#endif // MONSTRE_H
