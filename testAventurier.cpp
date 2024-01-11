#include "doctest.h"

#include "aventurier.h"
#include "monstre.h"

/**!Retirer le commentaire de la ligne 7085 du fichier doctest.h et mettre le main du fichier main.cpp en commentaire pour que les tests s'executent!*/

TEST_CASE("La classe aventurier est correcte")
{
    epee ep {50};
    armure arm {50};
    aventurier a{100,20,0,0,ep,arm,true};

    SUBCASE("Un aventurier est correctement construit")
    {
        REQUIRE_EQ(a.pointsDeVie(), 100);
        REQUIRE_EQ(a.pointsDeForce(), 20);
        REQUIRE_EQ(a.x(), 0);
        REQUIRE_EQ(a.y(), 0);
    }

    SUBCASE("Un aventurier attaque correctement")
    {
        //A faire
    }

    SUBCASE ("Un aventurier reçoit correctement une attaque")
    {
        //A faire
    }

}
