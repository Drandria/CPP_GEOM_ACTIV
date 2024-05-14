#include "Carre.hpp"

Carre::Carre()
{
}

Carre::~Carre()
{
}

float Carre::perimetre()
{
    return (cote * 4);
}

float Carre::surface()
{
    return (cote * cote);
}

void Carre::setCote(float dC)
{
    cote = dC;
}

float Carre::getCote()
{
    return (cote);
}