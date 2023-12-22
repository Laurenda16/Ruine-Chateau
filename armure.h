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

        //bool estValide() override;
        //int pointsDeSolidite() const;

        void perdreSolidite() override;
        int absorberPointsDeForce(int pointsDeForce);

        //void affiche(std::ostream & ost) const;

    /*private:
        int d_pointsDeSolidite;*/
};

#endif // ARMURE_H
