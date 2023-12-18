
#include <istream>
#include <ostream>

#include "epee.h"

/**REDEFINTION EPEE*/

void epee::perdreSolidite()
 {
        if (estValide())
    {
        d_pointDeSolidite--;
    }
}

int epee::attaqueAvecEpee() {
        if (estValide())

        {
           perdreSolidite();
            return pointDeSolidite();  // Retourne les points de solidité restants
        }
        return 0;
    }
