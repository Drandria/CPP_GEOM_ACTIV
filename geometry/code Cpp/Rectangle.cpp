#include "Rectangle.hpp"

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

float Rectangle::perimetre()
{
    return ((longueur + largeur) * 2);
}

float Rectangle::surface()
{
    return (longueur * largeur);
}

void Rectangle::setLongueur(float dL)
{
    longueur = dL;
}

void Rectangle::setLargeur(float dl)
{
    largeur = dl;
}

float Rectangle::getLongueur()
{
    return (longueur);
}

float Rectangle::getLargeur()
{
    return (largeur);
}