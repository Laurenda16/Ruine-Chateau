#ifndef EQUIPEMENTS_H
#define EQUIPEMENTS_H
#include <istream>
#include <ostream>


class equipement {
public:
 equipement(int pointDeSolidite);
 ~equipement();
virtual int pointDeSolidite() const ;

virtual bool estValide();//tester s'il est valide

virtual void perdreSolidite() = 0 ;

private:
    int d_pointDeSolidite;
    };

#endif //EQUIPEMENT_H
