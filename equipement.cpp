
#include <istream>
#include <ostream>

#include "equipement.h"

 equipement::equipement(int pointDeSolidite):d_pointDeSolidite{pointDeSolidite}{}

 equipement::~equipement(){}
 int equipement::pointDeSolidite() const
 {
     return d_pointDeSolidite;
 }

