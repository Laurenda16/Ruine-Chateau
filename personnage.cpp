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

int personnage::baissePointsDeForce(int pointsDeForce)
{
    d_pointsDeForce-= pointsDeForce;
    if (d_pointsDeForce <= 0)
    {
        mourir();
    }
}

void personnage::mourir()
{
    //A faire
}
