
#include <istream>
#include <ostream>

#include "equipement.h"

/**EQUIPEMET*/
 equipement::equipement(int pointDeSolidite):d_pointDeSolidite{pointDeSolidite}{}

 equipement::~equipement(){}
 int equipement::pointDeSolidite() const
 {
     return d_pointDeSolidite;
 }
   bool equipement::estValide()
    {
            return d_pointDeSolidite > 0;
    }

/**REDEFINTION EPEE*/

/*
>>>>>>> Lorris
void epee::perdreSolidite()
 {
        if (estValide())
    {
        d_pointDeSolidite--;
    }
}

int epee::attaqueAvecEpee() {
        if (estValide())

        {
           perdreSolidite();
            return pointDeSolidite();  // Retourne les points de solidit� restants
        }
        return 0;
    }
<<<<<<< HEAD

=======
*/





/**REDEFINITION  ARMURE*/
/*
 void armure::recevoirAttagueAvecAmure(int degats)
 {
     if (estValide())
        {
            armure.perdreSolidite(pointsDeForce);
            std::cout << "L'armure a absorb� une partie de l'attaque." << std::endl;
        } else {
            // L'armure est cass�e, l'attaque affecte directement la personne
            // TODO: G�rer les points de vie de la personne ici
            std::cout << "L'armure est cass�e. L'attaque affecte directement la personne." << std::endl;
        }
 }*/
/*
void perdreSolidite()
{
        if (estValide())
            {
    // R�duire la solidit� de l'armure en fonction des points de force de l'attaque
        pointsDeSolidite -= pointsDeForce / 2;
        if (pointDeSolidite < 0) {
        pointDeSolidite = 0;
                }
            }
        }
*/
