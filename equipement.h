#ifndef EQUIPEMENTS_H
#define EQUIPEMENTS_H
#include <istream>
#include <ostream>


class equipement {
public:
 equipement(int pointDeSolidite);
 ~equipement();
virtual int pointDeSolidite() const ;

//virtual void perdreSolidite(int point);

private:
    int d_pointDeSolidite;
    };

class epee:public equipement{
public:
    epee(int pointDesolidite);
   int pointDeSolidite() const override ;

//void perdreSolidite(int point) override;

void affiche(std::ostream & ost) const;
};

class armure: public equipement
{
public:
    armure(int pointDesolidite);
        virtual int pointDeSolidite() const override ;

//void perdreSolidite(int point) override;
    void affiche(std::ostream & ost) const ;

};
#endif //EQUIPEMENT_H
