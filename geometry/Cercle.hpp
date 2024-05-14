#ifndef CER
#define CER

class Cercle
{
    public:
        Cercle();
        ~Cercle();
        float getRayon();
        void setRayon(float dr);
        float surface();
        float diametre();
        float circonference();
    protected:
        float rayon;
};

#endif