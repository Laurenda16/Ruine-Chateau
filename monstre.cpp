#include "monstre.h"

monstre::monstre(int pointsDeVie, int pointsDeForce, int pctHabilite) : d_pointsDeVie{pointsDeVie}, d_pointsDeForce{pointsDeForce}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace()
{
    //A faire
}

int monstre::pointsDeVie() const
{
    return d_pointsDeVie;
}

int monstre::pointsDeForce() const
{
    return d_pointsDeForce;
}

int monstre::pctHabilite() const
{
    return d_pctHabilite;
}

void monstre::attaque(aventurier& aventurier)
{
    // Calculer les dégâts avec une probabilité basée sur le pourcentage d'habilité
    if (rand() % 100 < d_pctHabilite) {
        int degats = d_pointsDeForce * 0.9;
        aventurier.recoitAttaque(degats);
    }
}

void monstre::recoitAttaque(int pointsDeForce)
{
    d_pointsDeVie -= pointsDeForce;
    if (d_pointsDeVie <= 0)
    {
        mourir();
    }
}

void monstre::mourir()
{
    //A faire
}
