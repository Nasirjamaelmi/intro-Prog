#include <iostream>
#include <string>
#include <cassert>
#include <cstdlib> // innehåller rand
#include <cctype>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

void skrivSlumptal(int antal)
{
    srand(42);
    cout << "skriver några slumptal mellan 0 och " << RAND_MAX << endl;
    for (int i=0; i<antal; ++i)
    cout << rand() << " ";
    cout << endl;
}

void provaSkrivSlumptal()
{
    cout << "Provar skrivSlumptal" << endl;
    skrivSlumptal(5);
    skrivSlumptal(5);
}

void provaCyklicitet()
{
    const int x= 42;
    long int antalAnropTillRand = 0;
    int antalSeddaX = 0;
    long int senasteAnropsnummret = 0;
    while (antalSeddaX < 3)
    {
        int slumptal = rand();
        antalAnropTillRand += 1;
        if (slumptal == x)
        {
            cout<<"Sag " << x <<" efter " << antalAnropTillRand <<" anrop\n";
            if(antalSeddaX > 0)
                cout <<antalAnropTillRand - senasteAnropsnummret
                    <<"anrop sedan farra gången " <<endl;
            antalSeddaX +=1;
            senasteAnropsnummret = antalAnropTillRand;
            cout << "Efter " << x << "komer nu "
                 <<rand() <<" , " <<rand() << " och " << rand() << endl <<endl;
            antalAnropTillRand +=3;
        }
    }
}

int fröatSlumptal()
{
    srand(unsigned(time(nullptr)));
    return rand();
}

void testaFröatSlumptal()
{
    for(int i=0; i<5; i+=1)
        cout <<fröatSlumptal() <<" ";
    cout <<endl;
}

void hamtaTriplett(int tripplett[3])
{
    srand( unsigned( time(nullptr) ) );
    for(int i = 0; i<3; i++)
    {
        tripplett[i] = 1 +(rand() % 6);
    }
}

void skrivTriplett(int tripplett[3])
{
    for(int i=0; i<3; i++)
        cout<<tripplett[i]<<" ";
}

int bruttovinstFranTriplett(int tripplett[3])
{
    int x = tripplett[0];
    int z = tripplett[1];
    int y = tripplett[2];

   if(x == 6 && z == 6 && y == 6)
   {
       return 100;
   }
   if((x == y) && (x == z))
   {
       return 50;
   }
   if((x == y) || (y == z) || (x == z))
   {
       return 20;
   }
   else
   {
        return 0;
   }
}

bool boolFranUppmaning(const char uppmaning[])
{
   cout << uppmaning<<": ";
   string check = "";

   while(!cin.fail())
   {
       cin >> check;

       if(check == "j" || check==  "J")
           return true;

       if(check == "n" || check==  "N")
           return false;

   }
         return false;
}

void skrivResultat( int bruttovinst, int kapital)
{
  cout <<" Du vann "<<bruttovinst<<" kronor och har nu " <<kapital<<" kronor kvar att spela för."<<endl;
}

void spelaTarningsspelet()
{
    int kapital = 100;

    cout << "Du har " << kapital << " kronor" << endl;
    while (kapital>=10)
    {
        bool villSpela = boolFranUppmaning("Vill du spela (j/n):");
        if (villSpela)
        {
            int triplett[3];
            hamtaTriplett( triplett );
            skrivTriplett( triplett );
            int bruttovinst = bruttovinstFranTriplett(triplett);
            kapital = kapital - 10 + bruttovinst;
            skrivResultat(bruttovinst, kapital);
        }
    else
        {
            cout << "Fegis!!" << endl;
            break;
        }
    }
}

void skrivAnalysAvSpel()
{
    int kapital = 100;
    int averagegame = 0;

    for(int i=0; i<1000000; i++)
    {

         int triplett[3];
         hamtaTriplett( triplett );
         int bruttovinst = bruttovinstFranTriplett(triplett);
         kapital = kapital - 10 + bruttovinst;
         averagegame += bruttovinst;
    }
      averagegame = averagegame/1000000;

        cout<<kapital<<" " << averagegame<<" ";

}

string stickStrang(int antalStickor)
{
    string resultat ="SPELBORD:";
    for(int i=0; i<antalStickor; i++)
    {
        if(i%5 == 0 && i!=0)
        {
            resultat += 32;
        }
        resultat+= "|";
    }
    return resultat;
}

int spelarensDrag(int antalStickor)
{
    sleep_for(milliseconds(1000));
    assert(antalStickor>=1);
    cout<<"Antal att plocka?:";
    int drag = 0;
    cin >> drag;
    while (drag < 3 && drag >= 0)
    {
        if (!cin.fail())
        {
            return drag;
        }

    }
    return spelarensDrag(antalStickor);
}

int datornsDrag(int antalStickor)
{
    sleep_for(milliseconds(1000));
    assert(antalStickor>=1);
    cout <<"Datorn tar ";
    srand(time(0));
    if(antalStickor == 1)
    {
        return 1;
    }
    return (1 + (rand() %2));
}

void spelaStickspelet()
{
    while (true)
    {
         bool spela = boolFranUppmaning("Vill du spela sticka?");
         if (!spela)
        {
          cout << "Fegis!" << endl;
          break;
        }
         int antalStickor = 20 + rand()%8;
         cout << stickStrang(antalStickor) << endl;
    while (antalStickor>0)
    {
        antalStickor -= spelarensDrag(antalStickor);
        cout << stickStrang(antalStickor) << endl;
        if (antalStickor==0)
    {
        cout << "Du vann på tur!" << endl;
        break;
    }
            int drag = datornsDrag(antalStickor);
            cout << "Datorn tar " << drag << endl;
            antalStickor -= drag;
            cout << stickStrang(antalStickor) << endl;

        if (antalStickor==0)
        {
            cout << "Datorn vann, looser!" << endl;
            break;
            }
        }
    }
}


void ingangTillSlump()
{
    //provaSkrivSlumptal();
    //provaCyklicitet();
    //testaFröatSlumptal();
    //spelaTarningsspelet();
    //skrivAnalysAvSpel();
    spelaStickspelet();

    //assert(stickStrang(1) == "SPELBORD:|");

}
