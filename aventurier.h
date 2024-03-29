#ifndef AVENTURIER_H
#define AVENTURIER_H

#include "personnage.h"
#include "equipement.h"
#include "epee.h"
#include "armure.h"
#include "terrain.h"

class personnage;
class equipement;

class aventurier : public personnage
{
    public:
        aventurier(int pointsDeVie, int pointsDeForce, int x, int y, const epee& ep, const armure& arm, bool estAventurier);

        void seDeplace(int x_new, int y_new) override;
        void attaque(personnage& monstre) override;
        void recoitAttaque(int pointsDeForce) override;

        void recuperePointsDeForce(const personnage& monstre);

    private:
        epee d_ep;
        armure d_arm;
};
#endif // AVENTURIER_H
