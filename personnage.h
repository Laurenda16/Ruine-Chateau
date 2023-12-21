#ifndef PERSONNAGE_H
#define PERSONNAGE_H


/*std::cout;
std::cin;*/

#include<iostream>

using std::cout;
using std::cin;


class personnage {

public:

/**
    personnage(int pointsDeVie,int pointsDeForce);
    virtual ~personnage() = default;

    virtual int pointsDeVie() const;//retour le point de vie

    virtual int pointsDeForce() const; //retour le point de force

    int baissePointsDeForce(int points); //apres attaque le point de force

    //methode pour le eplacement des personnages
    virtual void seDeplace (personnage& p) const = 0;

    //methode [pour attaquer un personnage]

    virtual void attaque(personnage& p) const = 0;
    //methode pour recevoirs degats
    virtual void recoitAttaque(int degats) const = 0;
   bool  estmort();

private:
    int d_pointsDeVie;
    int d_pointsDeForce;

*/
    personnage(int pointsDeVie,int pointsDeForce, int x, int y);
    virtual ~personnage() = default;
    virtual int pointsDeVie() const;
    virtual int pointsDeForce() const;
    virtual int x() const;
    virtual int y() const;
    int baissePointsDeForce(int pointsDeForce);
    virtual void seDeplace (int x_new, int y_new);
    virtual void attaque(personnage& p)  = 0;
    virtual void recoitAttaque(int pointsDeForce)  = 0;
    virtual void mourir();
     bool  estmort();

protected:
    int pos_x;
    int pos_y;
    int d_pointsDeVie;
    int d_pointsDeForce;



};




#endif // PERSONNAGE_H
