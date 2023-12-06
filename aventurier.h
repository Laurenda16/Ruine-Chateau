#ifndef AVENTURIER_H
#define AVENTURIER_H

#include"personnage.h"
#include"equipement.h"

class personnage;
class equipement;

class aventurier : public personnage {
public:
    aventurier(int pointsDeVie, int pointsDeForce, /*const bourse& b,*/ const epe& ep, const armure& arm);
    void seDeplace (personnage& p) const override;
    void attaque(personnage& p) override;
    void recoitAttaque(int pointsDeForce) override;
    void mourir() override;
    void tueMonstre() const;
private:
    epe d_ep;
    armure d_arm;
};
#endif // AVENTURIER_H
