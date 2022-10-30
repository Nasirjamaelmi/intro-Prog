#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;


void raknaTillTre()
{
    sleep_for(milliseconds(500));
    cout<< "1" << endl;
    sleep_for(milliseconds(500));
    cout<< "2" << endl;
    sleep_for(milliseconds(500));
    cout<< "3" << endl;

}

void raknaTillFyra()
{
    raknaTillTre();
    sleep_for(milliseconds(500));
    cout<< "4" << endl;

}

void beraknaHypotenusa(double x, double y)
{
    double xKvadrat =x*x;
    double yKvadrat =y*y;
    double rKvadrat = xKvadrat + yKvadrat;
    double r = sqrt(rKvadrat);
    cout <<"x är"<< x <<"och y är"<< y <<"."<<endl
         <<"summan av kvadraterna blir"<<rKvadrat<<endl
         <<"vilket gör att hypotenusans blir"<<r<<endl;
}

double hypotenusa(double x, double y)
{
     return sqrt(x*x+y*y);

}

void ingangTillKap02FunkOchcppfiler()
{
    raknaTillTre();
    raknaTillFyra();
    beraknaHypotenusa(3,4);
    double h = hypotenusa(8,8);
    cout<<h<<endl;

}

