#ifndef EPEE_H
#define EPEE_H

#include "equipement.h"

/**la classe epee qui herite de la classe equipement*/

class epee : public equipement {
    public:
        epee(int pointsDeSolidite);
        ~epee() = default;

        void perdreSolidite();
        int attaqueAvecEpee();
};

#endif // EPEE_H
