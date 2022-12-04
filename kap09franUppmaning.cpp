#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <iomanip>


using namespace std;
using namespace chrono;
using namespace this_thread;




double flyttalFranUppmaning(const string uppmaning)
{

     while(true)
     {
         cout<<uppmaning;
         double input = 0;
         cin >> input;
         if(!cin.fail())
         {
             return input;
         }
         else
         {
             cout<<"ogiltigt tal, försök igen!"<<endl;
             cin.clear();
             cin.ignore(1000,'\n');
         }


    }




}

void provaFlyttalFranUppmaning()
{
    const double bokPris = flyttalFranUppmaning("Hur många kronor kostar boken?");
    const double antalSidor = flyttalFranUppmaning("Hur många sidor har boken?");
    const double procentAttLasa = flyttalFranUppmaning(
    "Hur många procent av sidorna kommer du att läsa? ");
    cout << "Du har angett att boken kostar " << bokPris <<" kronor"
    << ", och att den har " << antalSidor <<" sidor"
    << ", och att du tänker läsa " << procentAttLasa << "%" << endl;
}

void ingangTillKap09Uppmaningar()
{
    provaFlyttalFranUppmaning();

}






