#include "doctest.h"

#include "equipement.h"
#include "epee.h"
#include "armure.h"

TEST_CASE("La classe équipement est correcte")
{

    SUBCASE("Un équipement est correctement construit")
    {
        equipement eq {20};
        REQUIRE_EQ(eq.pointsDeSolidite(), 20);
    }

    SUBCASE("La vérification de l'équipement est correcte")
    {
        equipement eq {10};
        REQUIRE_GT(eq.estValide(), 0);
    }
}

TEST_CASE("La classe epée est correcte")
{
    SUBCASE("Une epée perd correctement ses points de solidité")
    {
        epee ep {15};
        ep.perdreSolidite();
        REQUIRE_EQ(ep.pointsDeSolidite(), 14);
    }
}
