#include "monstre.h"

monstre::monstre(int pointsDeVie, int pointsDeForce, int pctHabilite) : personnage{pointsDeVie, pointsDeForce}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace()
{
    //A faire
}

void monstre::attaque(aventurier& aventurier)
{
    // Calculer les dégâts avec une probabilité basée sur le pourcentage d'habilité
    if (rand() % 100 < d_pctHabilite) {
        int degats = pointsDeForce() * 0.9;
        aventurier.recoitAttaque(degats);
    }
}

void monstre::recoitAttaque(int f)
{
    pointsDeForce() -= f;
    if (pointsDeForce() <= 0)
    {
        mourir();
    }
}

void monstre::mourir()
{
    //A faire
}
