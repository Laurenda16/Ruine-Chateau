#ifndef EPEE_H
#define EPEE_H

#include "equipement.h"

/**la classe epee qui herite de la classe equipement*/

class epee : public equipement {
    public:
        epee(int pointsDeSolidite);
        ~epee() = default;

        //bool estValide() override;
        //int pointsDeSolidite() const;

        void perdreSolidite() override;
        int attaqueAvecEpee();

        //void affiche(std::ostream & ost) const;

    /*private:
        int d_pointsDeSolidite;*/
};

#endif // EPEE_H
