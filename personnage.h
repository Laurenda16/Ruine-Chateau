#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include<iostream>

using std::cout;
using std::cin;

class personnage {

public:

    personnage(int pointsDeVie,int pointsDeForce);
    virtual ~personnage() = default;
    virtual int pointsDeVie() const;
    virtual int pointsDeForce() const;
    int baissePointsDeForce(int pointsDeForce);
    virtual void seDeplace (personnage& p) const = 0;
    virtual void attaque(personnage& p)  = 0;
    virtual void recoitAttaque(int pointsDeForce)  = 0;
    virtual void mourir();

private:
    int d_pointsDeVie;
    int d_pointsDeForce;

};




#endif // PERSONNAGE_H
