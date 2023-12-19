#include "monstre.h"

monstre::monstre(int pointsDeVie, int pointsDeForce, int x, int y, int pctHabilite) : personnage{pointsDeVie, pointsDeForce, x, y}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace (int x_new, int y_new)
{
    pos_x=x_new;
    pos_y=y_new;
}

void monstre::attaque(personnage& p)
{
    // Calculer les dégâts avec une probabilité basée sur le pourcentage d'habilité
    if (rand() % 100 < d_pctHabilite) {
        int degats = pointsDeForce() * 0.9;
        p.recoitAttaque(degats);
    }
}

void monstre::recoitAttaque(int pointsDeForce)
{
    baissePointsDeForce(pointsDeForce);
}

