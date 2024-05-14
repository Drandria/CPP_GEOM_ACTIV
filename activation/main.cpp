#include <iostream>
#include "Activation.hpp"

using namespace std;

int main()
{
    string etat;
    ifstream fs("etat.txt");
    fs >> etat;

    if (fs.fail())
    {
        cout << "etat.txt introuvable" << endl;
    }
	else if(etat == "active")
	{
		fs.close();
		cout << "Hello world" << endl;
    }
    else
	{
		fs.close();
		Activation test = Activation();

		test.verification();
		
	    if (test.getPoint() > 0)
	    {
		    cout << "Hello world" << endl;
		    cout << "Il vous reste " << test.getPoint() - 1 << " essai gratuit" << endl;
	    }
	    else
	    {
			cout << "Essai gratuit terminé" << endl;
	    }
   }
    return 0;
}