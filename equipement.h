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



/**la classe epe qui herite de la classe equipement*/

class epee:public equipement{
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
#endif //EQUIPEMENT_H
