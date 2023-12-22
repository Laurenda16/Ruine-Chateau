#include "monstre.h"

#include <iostream>
#include <vector>
#include <cstdlib>

monstre::monstre(int pointsDeVie, int pointsDeForce, int x, int y, double pctHabilite) : personnage{pointsDeVie, pointsDeForce, x, y}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace(int x_new, int y_new)
{
    pos_x=x_new;
    pos_y=y_new;
}

double monstre::pctHabilite() const
{
    return d_pctHabilite;
}

void monstre::attaque(personnage& aventurier)
{
    // Calculer les degats avec une probabilite basee sur le pourcentage d'habilite
    int degats = static_cast<int>(pointsDeForce() * 0.9);
    // Application de la probabilite d'habilete du monstre
        if (rand() % 100 < (d_pctHabilite * 100)) {
            std::cout << "Attaque reussie ! Montant total de l'attaque : " << degats ;
            // Appliquer l'attaque a l'aventurier (implementation)
            aventurier.recoitAttaque(degats);
        } else
        {
            std::cout << "Attaque rate !";
        }

}

void monstre::recoitAttaque(int pointsDeForce)
{
    baissePointsDeForce(pointsDeForce);
    d_pointsDeVie -= pointsDeForce;
}
