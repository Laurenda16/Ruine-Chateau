#include <iostream>
#include"terrain.h"

using namespace std;



void test1()
{
}
int main()
{
    terrain t{5,7};
    t.genererTerrain();
    t.afficherTerrain();

    return 0;
}
