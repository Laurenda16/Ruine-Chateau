#include "doctest.h"

#include "equipement.h"
#include "epee.h"
#include "armure.h"

TEST_CASE("La classe �quipement est correcte")
{

    SUBCASE("Un �quipement est correctement construit")
    {
        equipement eq {20};
        REQUIRE_EQ(eq.pointsDeSolidite(), 20);
    }

    SUBCASE("La v�rification de l'�quipement est correcte")
    {
        equipement eq {10};
        REQUIRE_GT(eq.estValide(), 0);
    }
}

TEST_CASE("La classe ep�e est correcte")
{
    SUBCASE("Une ep�e perd correctement ses points de solidit�")
    {
        epee ep {15};
        ep.perdreSolidite();
        REQUIRE_EQ(ep.pointsDeSolidite(), 14);
    }
}
