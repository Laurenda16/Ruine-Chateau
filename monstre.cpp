#include "monstre.h"

monstre::monstre(int pointsDeVie, int pointsDeForce, int pctHabilite) : personnage{pointsDeVie, pointsDeForce}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace(personnage& p) const
{
    //A faire
}

void monstre::attaque(personnage& p)
{
    // Calculer les d�g�ts avec une probabilit� bas�e sur le pourcentage d'habilit�
    if (rand() % 100 < d_pctHabilite) {
        int degats = pointsDeForce() * 0.9;
        p.recoitAttaque(degats);
    }
}

void monstre::recoitAttaque(int pointsDeForce)
{
    baissePointsDeForce(pointsDeForce);
}
