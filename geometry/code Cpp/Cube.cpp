#include "Cube.hpp"

Cube::Cube()
{
}

Cube::~Cube()
{
}

float Cube::surfaceBase()
{
    return(Carre::surface());
}

float Cube::surface()
{
    return(surfaceBase() * 6);
}

float Cube::volume()
{
    return(surface() * cote);
}