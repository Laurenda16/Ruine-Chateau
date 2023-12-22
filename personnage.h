#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include<iostream>

using std::cout;
using std::cin;

class personnage {

    public:
        personnage(int pointsDeVie,int pointsDeForce, int x, int y);
        virtual ~personnage() = default;

        virtual int pointsDeVie() const;
        virtual int pointsDeForce() const;
        virtual int x() const;
        virtual int y() const;
        int baissePointsDeForce(int pointsDeForce);
        virtual void seDeplace (int x_new, int y_new);
        virtual void attaque(personnage& p) = 0;
        virtual void recoitAttaque(int pointsDeForce) = 0;
        virtual void mourir();

    protected:
        int pos_x;
        int pos_y;
        int d_pointsDeVie;
        int d_pointsDeForce;

};




#endif // PERSONNAGE_H
