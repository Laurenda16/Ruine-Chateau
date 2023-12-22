#ifndef MONSTREVOYANT_H
#define MONSTREVOYANT_H

#include "monstre.h"

class monstreVoyant : public monstre
{
    public:
        monstreVoyant(int pointsDeVie, int pointsDeForce, int x, int y, int pctHabilite);
        void seDeplace (int x_new, int y_new) override;

    private:
        int d_pointsDeVie, d_pointsDeForce, d_pctHabilite;

};


#endif // MONSTREAVEUGLE_H

