#ifndef MONSTREAVEUGLE_H
#define MONSTREAVEUGLE_H

#include "monstre.h"

class monstreAveugle : public monstre
{
    public:
        monstreAveugle(int pointsDeVie, int pointsDeForce, int pctHabilite);
        void seDeplace() override;

    private:
        int d_pointsDeVie, d_pointsDeForce, d_pctHabilite;

};


#endif // MONSTREAVEUGLE_H
