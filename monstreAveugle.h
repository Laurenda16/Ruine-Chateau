#ifndef MONSTREAVEUGLE_H
#define MONSTREAVEUGLE_H

#include "monstre.h"
#include"personnage.h"

class monstreAveugle : public monstre
{
    public:
        monstreAveugle(int pointsDeVie, int pointsDeForce, int pctHabilite);
        void seDeplace(personnage& p) const override; //Methode définie dans la classe personnage

    private:
        int d_pointsDeVie, d_pointsDeForce, d_pctHabilite;

};


#endif // MONSTREAVEUGLE_H
