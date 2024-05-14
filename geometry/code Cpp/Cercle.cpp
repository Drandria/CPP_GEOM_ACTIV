#include "Cercle.hpp"

Cercle::Cercle()
{
}

Cercle::~Cercle()
{
}

float Cercle::getRayon()
{
    return (rayon);
}

void Cercle::setRayon(float dr)
{
    rayon = dr;
}

float Cercle::surface()
{
    return (rayon * rayon * 3.14);
}

float Cercle::diametre()
{
    return (rayon * 2);
}

float Cercle::circonference()
{
    return (diametre() * 3.14);
}