#include "aventurier.h"
#include "personnage.h"
#include "equipement.h"
#include "epee.h"
#include "armure.h"
#include "monstre.h"

#include <iostream>
#include <vector>
#include <cstdlib>

aventurier::aventurier(int pointsDeVie, int pointsDeForce, int x, int y, const epee &ep, const armure &arm, bool estAventurier) : personnage{pointsDeVie, pointsDeForce, x, y, estAventurier}, d_ep{ep}, d_arm{arm}
{}

void aventurier::seDeplace(int x_new, int y_new)
{
    pos_x = x_new;
    pos_y = y_new;
}

void aventurier::attaque(personnage& monstre)
{
    int degats = pointsDeForce() + d_ep.pointsDeSolidite();// Points de force de l'aventurier + point de solidite de son epee
    // Multiplication par 0.9
    degats = static_cast<int>(degats * 0.9);
    // Application de la probabilite de 80%
    if (rand() % 100 < 80)
    {
        std::cout << "Attaque reussie ! Montant total de l'attaque : " << degats;
        // Appliquer l'attaque au monstre (implementation)
        monstre.recoitAttaque(degats);
        d_ep.perdreSolidite();

        if (monstre.pointsDeVie() == 0)
        {
            recuperePointsDeForce(monstre);
        }

    } else
    {
        std::cout << "Attaque rate !";
    }
}

void aventurier::recoitAttaque(int pointsDeForce)
{
    // Calcul des dégâts absorbés par l'armure
    double degatsAbsorbesParArmure = pointsDeForce * 3.0 / 4.0;

    // Utilisation des points de solidité de l'armure
    //double pointsDeSoliditeUtilises = std::min(degatsAbsorbesParArmure * 2, d_arm.pointsDeSolidite());

    // Réduction des points de solidité de l'armure
    d_arm.perdreSolidite(d_arm.pointsDeSolidite() - degatsAbsorbesParArmure);

    // Calcul des dégâts absorbés par l'aventurier après l'absorption par l'armure
    double degatsAbsorbesParAventurier = pointsDeForce - degatsAbsorbesParArmure;

    // Réduction des points de vie de l'aventurier
    baissePointsDeForce(degatsAbsorbesParAventurier);
}


void aventurier::recuperePointsDeForce(const personnage& monstre)
{
    int quartPointsDeForceMonstre = monstre.pointsDeForce() / 4;
    d_pointsDeForce += quartPointsDeForceMonstre;

    int troisQuartsPointsDeVieMonstre = (3 * monstre.pointsDeForce()) / 4;
    d_pointsDeVie += troisQuartsPointsDeVieMonstre;

    std::cout << "Vous avez tue le monstre et recupere des points !";
}
