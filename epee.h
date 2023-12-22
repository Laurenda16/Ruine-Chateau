#ifndef EPEE_H
#define EPEE_H
#include <istream>
#include <ostream>
#include "equipement.h"

/**la classe epee qui herite de la classe equipement*/

class epee: public equipement{
public:
    epee(int pointDesolidite);
    bool estValide() override;
    int pointDeSolidite() const override ;
    virtual void perdreSolidite() override;
    int attaqueAvecEpee();
    void affiche(std::ostream & ost) const;
private:
    int d_pointDeSolidite;
};

#endif // EPEE_H
