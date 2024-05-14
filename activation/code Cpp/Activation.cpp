#include "Activation.hpp"

void Activation::verification()
{
    ifstream fs("cle.txt");
    if (fs.fail())
    {
        cout << "fichier d'activation introuvable" << endl;
    }
    else
    {
        string cle;
        fs >> cle;
        fs.close();

        if (cle == cleActivation)
        {
            cout << "Activation OK" << endl;
            active();
        }
        else
        {
            string essai;
            ifstream essaiNbr("etat.txt");
            essaiNbr >> essai;
            essaiNbr.close();

            int valeur = stoi(essai);

            ofstream essaiNb("etat.txt");
            valeur -= 1;
            essaiNb << valeur;
            essaiNb.close();
        }
    }
}

void Activation::active()
{
    ofstream fs("etat.txt");
    fs << "active";
    fs.close();
}

Activation::Activation()
{
    string i;
    ifstream fs("etat.txt");
    if (fs.fail())
    {
        cout << "etat.txt introuvable" << endl,
            point = 0;
    }
    else
    {
        fs >> i;
        point = stoi(i);
        fs.close();
    }
}

Activation::~Activation()
{
}

int Activation::getPoint()
{
    return point;
}