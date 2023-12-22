#ifndef ARMURE_H
#define ARMURE_H

#include <iostream>
#include "equipement.h"

/**la classe armure qui herite de la classe equipement*/

class armure: public equipement
{
    public:
        armure(int pointsDeSolidite);
        ~armure() = default;

        void perdreSolidite(int pointsDeForce);
};

#endif // ARMURE_H
