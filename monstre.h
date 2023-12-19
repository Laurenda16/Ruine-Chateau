#ifndef MONSTRE_H
#define MONSTRE_H

#include <cstdlib>

#include "aventurier.h"
#include"personnage.h"

class personnage;

class monstre : public personnage
{
    public:
        monstre(int pointsDeVie, int pointsDeForce, int x, int y, int pctHabilite);
        void seDeplace (int x_new, int y_new) override; //Methode définie dans la classe personnage

        //int pointsDeVie() const override; //Methode définie dans la classe personnage
        //int pointsDeForce() const override; //Methode définie dans la classe personnage
        int pctHabilite() const;

        void attaque(personnage& p) override; //Methode définie dans la classe personnage
        void recoitAttaque(int pointsDeForce) override; //Methode définie dans la classe personnage
        //void mourir() override; //Methode définie dans la classe personnage

    private:
        int d_pctHabilite;

};


#endif // MONSTRE_H
