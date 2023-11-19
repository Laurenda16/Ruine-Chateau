#ifndef PERSONNAGE_H
#define PERSONNAGE_H

std::cout;
std::cin;

class personnage {

public:

    personnage(int pointsDeVie,int pointsDeForce);
    virtual ~personnage() = default;
    virtual int pointsDeVie() const;
    virtual int pointsDeForce() const;
    virtual void seDeplace (personnage& p) = 0;
    virtual void attaque(personnage& p) = 0;
    virtual void recoitAttaque(int pointsDeForce) = 0;
    virtual void mourir() = 0;

private:
    int d_pointsDeVie;
    int d_pointsDeForce;

};




#endif // PERSONNAGE_H
