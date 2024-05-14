#ifndef CYL
#define CYL

#include "Cercle.hpp"

class Cylindre : public Cercle
{
    public:
        Cylindre();
        ~Cylindre();
        float getHauteur();
        void setHauteur(float dH);
        float surfaceBase();
        float surfaceLaterale();
        float surface();
        float volume();
    protected:
        float hauteur;
};

#endif