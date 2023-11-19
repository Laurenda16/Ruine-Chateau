#ifndef MONSTRE_H
#define MONSTRE_H

#include <cstdlib>

//#include "aventurier.h"

class monstre // : public personnage
{
    public:
        monstre(int pointsDeVie, int pointsDeForce, int pctHabilite);
        virtual void seDeplace();

        int pointsDeVie() const;
        int pointsDeForce() const;
        int pctHabilite() const;

        void attaque(aventurier& aventurier);
        void recoitAttaque(int pointsDeForce);
        void mourir();

    private:
        int d_pointsDeVie, d_pointsDeForce, d_pctHabilite;

};


#endif // MONSTRE_H
