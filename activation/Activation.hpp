#ifndef ACTIVE
#define ACTIVE

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Activation
{
    private:
        int point;
        string cleActivation = "AXTXVX";

    public:
        Activation();
        ~Activation();
        void verification();
        void active();
        int getPoint();
};

#endif
