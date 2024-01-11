#include "monstreAveugle.h"

monstreAveugle::monstreAveugle(int pointsDeVie, int pointsDeForce, int x, int y, int pctHabilite, bool estAventurier) : monstre{pointsDeVie, pointsDeForce, x, y, pctHabilite, estAventurier}
{}

void monstreAveugle::seDeplace(int x_new, int y_new)
{
    pos_x = x_new;
    pos_y = y_new;
}
