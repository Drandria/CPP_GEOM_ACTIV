#include "Cylindre.hpp"

Cylindre::Cylindre()
{
}

Cylindre::~Cylindre()
{
}

float Cylindre::getHauteur()
{
    return (hauteur);
}

void Cylindre::setHauteur(float dH)
{
    hauteur = dH;
}

float Cylindre::surfaceBase()
{
    return (Cercle::surface());
}

float Cylindre::surfaceLaterale()
{
    return (diametre() * hauteur);
}

float Cylindre::surface()
{
    return (surfaceBase() + surfaceLaterale());
}

float Cylindre::volume()
{
    return (surfaceBase() * hauteur);
}