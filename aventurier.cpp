#include "aventurier.h"

#include <iostream>
#include <vector>
#include <cstdlib>

aventurier::aventurier(int pointsDeVie, int pointsDeForce, int x, int y, const epee &ep, const armure &arm) : personnage{pointsDeVie, pointsDeForce, x, y}, d_ep{ep}, d_arm{arm}
{
}

void aventurier::seDeplace(int x_new, int y_new)
{
    pos_x = x_new;
    pos_y = y_new;
}

void aventurier::attaque(personnage &monstre)
{
}

void aventurier::recoitAttaque(int pointsDeForce)
{
}

/*la methode attaque du personnage*/
/*
    void aventurier::attaque(personnage& monstre)
    {
        int forceAttaque = pointDeForce()+ pointDeSolidite;
        // Multiplication par 0.9
        forceAttaque = static_cast<int>(forceAttaque * 0.9);
        // Application de la probabilit� de 80%
        if (rand() % 100 < 80) {
            std::cout << "Attaque r�ussie ! Montant total de l'attaque : " << forceAttaque;
            // Appliquer l'attaque au monstre (impl�mentation � ajouter)
            monstre.recoitAttaque(montantAttaque);
        } else {
            std::cout << "Attaque rat�e !";
        }
        //verifier s'il est vivant ou non

        if(monstre.pointDesVies() <=0)
        {
        recuperPointdeForce(monstres);
        }



    }

    }*/
/*
void aventurier::recuperPointDeForce(const personnage& monstre)
{
int quartPointsDeForceMonstre = monstre.pointsDeForces() / 4;
    d_pointsDeForces += quartPointsDeForceMonstre;

    int troisQuartsPointsDeVieMonstre = (3 * monstre.pointsDeForces()) / 4;
    d_pointsDeVies += troisQuartsPointsDeVieMonstre;

    std::cout << "Vous avez tu� le monstre et r�cup�r� des points !";

}*/
