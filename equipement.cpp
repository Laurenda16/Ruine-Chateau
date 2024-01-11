#include <istream>
#include <ostream>

#include "equipement.h"

equipement::equipement(int pointsDeSolidite) : d_pointsDeSolidite{pointsDeSolidite}{}

int equipement::pointsDeSolidite() const
{
    return d_pointsDeSolidite;
}

bool equipement::estValide()
{
    return d_pointsDeSolidite > 0;
}


