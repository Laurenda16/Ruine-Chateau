#ifndef EQUIPEMENTS_H
#define EQUIPEMENTS_H

#include <istream>
#include <ostream>

class equipement
{
    public:
        equipement(int pointsDeSolidite);
        virtual ~equipement() = default;

        virtual bool estValide();
        int pointsDeSolidite() const;

    protected:
        int d_pointsDeSolidite;
};

#endif //EQUIPEMENT_H
