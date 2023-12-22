#include "aventurier.h"

aventurier::aventurier(int pointsDeVie, int pointsDeForce, int bourse, const epee &ep, const armure &arm) :
    d_pointsDeVie{pointsDeVie}, d_pointsDeForce{pointsDeForce}, d_bourse{bourse},
    d_ep{ep}, d_arm{arm}
{}

void aventurier::setPosition(int x, int y) {
    d_x = x;
    d_y = y;
}

void aventurier::getPosition(int &x, int &y) {
    x = d_x;
    y = d_y;
}
