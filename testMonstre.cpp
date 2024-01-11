#include "doctest.h"

#include "monstre.h"
#include "monstreVoyant.h"
#include "monstreAveugle.h"

TEST_CASE("La classe monstre est correcte")
{

    SUBCASE("La classe monstreVoyant est correcte")
    {

        SUBCASE("Un monstre voyant est correctement construit")
        {
            monstreVoyant m {100,50,0,0,75,false};
            REQUIRE_EQ(m.pointsDeVie(), 100);
            REQUIRE_EQ(m.pointsDeForce(), 50);
            REQUIRE_EQ(m.x(), 0);
            REQUIRE_EQ(m.y(), 0);
            REQUIRE_EQ(m.pctHabilite(), 75);
        }

        SUBCASE("Un monstreVoyant se déplace correctement")
        {
            //A faire
        }

    }

    SUBCASE("La classe monstreAveugle est correcte")
    {

        SUBCASE("Un monstre aveugle est correctement construit")
        {
            monstreAveugle m {100,75,0,0,25,false};
            REQUIRE_EQ(m.pointsDeVie(), 100);
            REQUIRE_EQ(m.pointsDeForce(), 75);
            REQUIRE_EQ(m.x(), 0);
            REQUIRE_EQ(m.y(), 0);
            REQUIRE_EQ(m.pctHabilite(), 25);
        }

        SUBCASE("Un monstre aveugle se déplace correctement")
        {
            //A faire
        }

    }

    SUBCASE("Un monstre attaque correctement")
    {
        //A faire
    }

    SUBCASE("Un monstre reçoit une attaque correctement")
    {
        //A faire
    }

}
