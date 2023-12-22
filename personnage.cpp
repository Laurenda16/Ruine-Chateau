#include "personnage.h"

personnage::personnage(int pointsDeVie,int pointsDeForce, int x, int y) : d_pointsDeVie{pointsDeVie}, d_pointsDeForce{pointsDeForce}, pos_x{x}, pos_y{y}
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

void personnage::seDeplace (int x_new, int y_new)
{
    pos_x=x_new;
    pos_y=y_new;
}

void personnage::mourir()
{
    cout<<" Vous êtes mort ! Peut mieux faire dans la prochaine vie, courage"<<std::endl;
}

int personnage::baissePointsDeForce(int pointsDeForce)
{
    d_pointsDeForce-= pointsDeForce;
    if (d_pointsDeForce <= 0)
    {
        mourir();
    }
}

// Définition pour obtenir une chaîne de caractères du type de personnage
std::string getTypeString(TypePersonnage type) {
    switch (type) {
        case TypePersonnage::aventurier:
            return "Aventurier";
        case TypePersonnage::monstre:
            return "Monstre";
        case TypePersonnage::monstreAveugle:
            return "Monstre Aveugle";
        case TypePersonnage::monstreVoyant:
            return "Monstre Voyant";

        default:
            return "Personnage";
    }
}

