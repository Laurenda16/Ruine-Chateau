#include "personnage.h"

personnage::personnage(int pointsDeVie,int pointsDeForce, int x, int y, bool estAventurier) : d_pointsDeVie{pointsDeVie}, d_pointsDeForce{pointsDeForce}, pos_x{x}, pos_y{y}, estAventurier{estAventurier}
{}

int personnage::pointsDeVie() const
{
  return d_pointsDeVie;
}

int personnage::pointsDeForce() const
{
    return d_pointsDeForce;
}

int personnage::x() const
{
    return pos_x;
}

int personnage::y() const
{
    return pos_y;
}

//Méthode pour vérifier le type
bool personnage::getEstAventurier() const
{
    return estAventurier;
}

void personnage::seDeplace (int x_new, int y_new)
{
    pos_x=x_new;
    pos_y=y_new;
}

void personnage::mourir()
{
    cout << " Vous etes mort!" << std::endl;
}

int personnage::baissePointsDeForce(int pointsDeForce)
{
    d_pointsDeForce-= pointsDeForce;
    if (d_pointsDeForce <= 0)
    {
        mourir();
    }
}


