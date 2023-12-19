#include "aventurier.h"
#include "equipement.h"
#include "personnage.h"
#include <iostream>
#include <vector>
#include <cstdlib>


   /* aventurier::aventurier(int pointsDeVie, int pointsDeForce,const epee& ep, const armure& arm):personnage{pointsDeVie, pointsDeForce}, d_ep{ep}, d_arm{arm}{}*/
/*la methode attaque du personnage*/
/*
    void aventurier::attaque(personnage& monstre)
    {
        int forceAttaque = pointDeForce()+ pointDeSolidite;
        // Multiplication par 0.9
        forceAttaque = static_cast<int>(forceAttaque * 0.9);
        // Application de la probabilité de 80%
        if (rand() % 100 < 80) {
            std::cout << "Attaque réussie ! Montant total de l'attaque : " << forceAttaque;
            // Appliquer l'attaque au monstre (implémentation à ajouter)
            monstre.recoitAttaque(montantAttaque);
        } else {
            std::cout << "Attaque ratée !";
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

        std::cout << "Vous avez tué le monstre et récupéré des points !";

  }*/
