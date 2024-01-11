#include "armure.h"

armure::armure(int pointsDeSolidite) : equipement{pointsDeSolidite}
{}

void armure::perdreSolidite(int pointsDeForce)
{
    if (estValide())
    {
        d_pointsDeSolidite -= pointsDeForce / 2;
        if (d_pointsDeSolidite < 0)
        {
            d_pointsDeSolidite = 0;
        }
    }
}
