#ifndef AVENTURIER_H
#define AVENTURIER_H

#include "personnage.h"
#include "equipement.h"
#include "epee.h"
#include "armure.h"

class personnage;
class equipement;

class aventurier : public personnage
{
public:
    //aventurier(int pointsDeVie, int pointsDeForce,const epee& ep, const armure& arm); //fait
    void seDeplace(int x_new, int y_new) override; //deplacmenet
    void attaque(personnage& monstres) override;
    void recoitAttaque(int degats) override;

    void recuperPointDeForce(const personnage& monstre);
    /*void ramasse();*/
    bool estmort() ;

private:
    epee d_ep;
    armure d_arm;
   // int d_boursePiece;*/
};
#endif // AVENTURIER_H
