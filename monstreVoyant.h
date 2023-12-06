#ifndef MONSTREVOYANT_H
#define MONSTREVOYANT_H

#include "monstre.h"

class monstreVoyant : public monstre
{
    public:
        monstreVoyant(int pointsDeVie, int pointsDeForce, int pctHabilite);
        void seDeplace(personnage& p) const override;

    private:
        int d_pointsDeVie, d_pointsDeForce, d_pctHabilite;

};


#endif // MONSTREAVEUGLE_H

