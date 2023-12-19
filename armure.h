#ifndef ARMURE_H
#define ARMURE_H
#include <istream>
#include <ostream>
#include "equipement.h"

/**la classe armure qui herite de la classe equipement*/


class armure: public equipement
{
public:
    armure(int pointDesolidite);
     bool estValide() override;
    virtual int pointDeSolidite() const override ;
    virtual void perdreSolidite() override;
    void recevoirAttagueAvecAmure(int degats);
    void affiche(std::ostream & ost) const ;
private:
    int d_pointDeSolidite;
};

#endif // ARMURE_H
