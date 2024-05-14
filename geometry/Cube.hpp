#ifndef CUB
#define CUB

#include "Carre.hpp"

class Cube : public Carre
{
    public:
        Cube();
        ~Cube();
        float surfaceBase();
        float surface();
        float volume();
};

#endif