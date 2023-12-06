#ifndef MONSTRE_H
#define MONSTRE_H

#include <cstdlib>

#include "aventurier.h"
#include "personnage.h"

class monstre : public personnage
{
    public:
        monstre(int pointsDeVie, int pointsDeForce, int pctHabilite);
        void seDeplace(personnage& p) const override; //Methode d�finie dans la classe personnage

        //int pointsDeVie() const override; //Methode d�finie dans la classe personnage
        //int pointsDeForce() const override; //Methode d�finie dans la classe personnage

        int pctHabilite() const;

        void attaque(personnage& p) override; //Methode d�finie dans la classe personnage
        void recoitAttaque(int pointsDeForce) override; //Methode d�finie dans la classe personnage
        //void mourir() override; //Methode d�finie dans la classe personnage

    private:
        int d_pctHabilite;

};


#endif // MONSTRE_H
