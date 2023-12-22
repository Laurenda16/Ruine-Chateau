#include "equipement.h"

/**EQUIPEMET*/
equipement::equipement(int pointDeSolidite):
    d_pointDeSolidite{pointDeSolidite}
{}

int equipement::pointDeSolidite() const
{
     return d_pointDeSolidite;
}

bool equipement::estValide()
{
     return d_pointDeSolidite > 0;
}
