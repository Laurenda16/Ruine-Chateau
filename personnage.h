#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/*std::cout;
std::cin;*/

class personnage {

public:

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

};




#endif // PERSONNAGE_H
