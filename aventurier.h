#ifndef AVENTURIER_H
#define AVENTURIER_H

#include "personnage.h"
#include "equipement.h"

class personnage;
class equipement;

class aventurier : public personnage
{
public:
    aventurier(int pointsDeVie, int pointsDeForce,const epee& ep, const armure& arm); //fait
    void seDeplace (personnage& p) const override; //deplacmenet
    void attaque(personnage& monstres) const override;
    void recoitAttaque(int degats) const override;

    void recuperPointDeForce(const personnage& monstre);
    /*void ramasse();*/
    bool estmort() ;

private:
   epee d_ep;
    armure d_arm;
   // int d_boursePiece;*/
};
#endif // AVENTURIER_H
