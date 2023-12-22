#include "equipement.h"
#include "armure.h"

/**REDEFINITION  ARMURE*/

armure::armure(int pointsDeSolidite) : equipement{pointsDeSolidite}
{}


void armure::perdreSolidite(int pointsDeSolidite)
{
    if (estValide())
    {
        // Reduire la solidite de l'armure en fonction des points de force de l'attaque
      //  pointsDeSolidite() -= pointsDeForce / 2;
        if (d_pointsDeSolidite < 0)
        {
            d_pointsDeSolidite = 0;
        }
    }
}

int armure::absorberPointsDeForce(int pointsDeForce)
{
    // 3/4 des points de force sont absorb�s par l'armure
    int pointsAbsorbes = (3 * pointsDeForce) / 4;

    if (estValide())
    {
        perdreSolidite( pointsAbsorbes);
        std::cout << "L'armure a absorb� une partie de l'attaque." << std::endl;
    } else {
        // L'armure est cass�e, l'attaque affecte directement la personne
        // TODO: Gerer les points de vie de la personne ici
        std::cout << "L'armure est cass�e. L'attaque affecte directement la personne." << std::endl;
    }
    return pointsAbsorbes;
}
