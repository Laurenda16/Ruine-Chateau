#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/*std::cout;
std::cin;*/

class personnage {

public:

    personnage(int pointsDeVie,int pointsDeForce);
    virtual ~personnage() = default;

    virtual int pointsDeVie() const;

    virtual int pointsDeForce() const;

    int baissePointsDeForce(int points);

    //methode pour le eplacement des personnages
    virtual void seDeplace (personnage& p) const = 0;

    //methode [pour attaquer une personne
    virtual void attaque(personnage& p) = 0;
    virtual void recoitAttaque(int pointsDeForce) = 0;
   bool  estmort();

private:
    int d_pointsDeVie;
    int d_pointsDeForce;

};




#endif // PERSONNAGE_H
