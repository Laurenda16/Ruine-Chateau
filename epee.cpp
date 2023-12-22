#include "epee.h"

epee::epee(int pointsDeSolidite) : equipement{pointsDeSolidite}
{}

void epee::perdreSolidite()
{
    if (estValide())
    {
        d_pointsDeSolidite--;
    }
}

int epee::attaqueAvecEpee() {
    if (estValide())
    {
        perdreSolidite();
        return pointsDeSolidite();  // Retourne les points de solidité restants
    }
    return 0;
}
