#ifndef RECT
#define RECT

class Rectangle
{
    public:
        Rectangle();
        ~Rectangle();
        float perimetre();
        float surface();
        void setLongueur(float dL);
        void setLargeur(float dl);
        float getLongueur();
        float getLargeur();
    protected:
        float longueur;
        float largeur;
};

#endif