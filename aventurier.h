#ifndef AVENTURIER_H
#define AVENTURIER_H

#include "armure.h"
#include "epee.h"

class aventurier {
public:
    aventurier(int pointsDeVie, int pointsDeForce, int bourse, const epee &ep, const armure &arm);
    void setPosition(int x, int y);
    void getPosition(int &x, int &y);

private:
    int d_pointsDeVie;
    int d_pointsDeForce;
    int d_bourse;
    epee d_ep;
    armure d_arm;
    int d_x, d_y;
};
#endif // AVENTURIER_H
