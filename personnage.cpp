#include "personnage.h"

personnage::personnage(int pointsDeVie,int pointsDeForce) : d_pointsDeVie{pointsDeVie}, d_pointsDeForce{pointsDeForce}
{}

int personnage::pointsDeVie() const
{
  return d_pointsDeVie;
}

int personnage::pointsDeForce() const
{
    return d_pointsDeForce;
}
