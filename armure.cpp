#include "armure.h"

armure::armure(int pointsDeSolidite) : equipement{pointsDeSolidite}
{}

void armure::perdreSolidite(int pointsDeForce)
{
    if (estValide())
    {
        // Réduire la solidité de l'armure en fonction des points de force de l'attaque
        d_pointsDeSolidite -= pointsDeForce / 2;
        if (d_pointsDeSolidite < 0)
        {
            d_pointsDeSolidite = 0;
        }
    }
}
