#ifndef CAR
#define CAR

class Carre
{
    public:
        Carre();
        ~Carre();
        float perimetre();
        float surface();
        void setCote(float dC);
        float getCote();
    protected:
        float cote;
};

#endif