#include "monstre.h"

#include <iostream>
#include <vector>
#include <cstdlib>
/*
monstre::monstre(int pointsDeVie, int pointsDeForce, int pctHabilite) : personnage{pointsDeVie, pointsDeForce}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace(personnage& p) const
{
    //A faire
=======

#include <iostream>
#include <vector>
#include <cstdlib>

monstre::monstre(int pointsDeVie, int pointsDeForce, int x, int y, int pctHabilite) : personnage{pointsDeVie, pointsDeForce, x, y}, d_pctHabilite{pctHabilite}
{}

void monstre::seDeplace(int x_new, int y_new)
{
    pos_x=x_new;
    pos_y=y_new;
}

int monstre::pctHabilite() const
{
    return d_pctHabilite;
>>>>>>> Lorris
}

void monstre::attaque(personnage& aventurier)
{
    // Calculer les d�g�ts avec une probabilit� bas�e sur le pourcentage d'habilit�
<<<<<<< HEAD
    int degats = static_cast<int>(pointsDeForces() * 0.9);
    // Application de la probabilit� d'habilet� du monstre
        if (rand() % 100 < (pourcentageHabilite * 100)) {
=======
    int degats = static_cast<int>(pointsDeForce() * 0.9);
    // Application de la probabilit� d'habilet� du monstre
        if (rand() % 100 < (d_pctHabilite * 100)) {
>>>>>>> Lorris
            std::cout << "Attaque r�ussie ! Montant total de l'attaque : " << degats ;
            // Appliquer l'attaque � l'aventurier (impl�mentation � ajouter)
            aventurier.recoitAttaque(degats);
        } else
         {
            std::cout << "Attaque rat�e !";
        }

}

void monstre::recoitAttaque(int pointsDeForce)
{
    baissePointsDeForce(pointsDeForce);
<<<<<<< HEAD
}
*/

   /* d_pointsDeVie -= pointsDeForce;
}
*/
