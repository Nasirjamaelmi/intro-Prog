#include <iostream>
#include <thread>
#include <iomanip>


using namespace std;
using namespace this_thread;


bool t1(){cout << "t1 " ; return true ;}
bool t2(){cout << "t2 " ; return true ;}
bool f1(){cout << "f1 " ; return false ;}
bool f2(){cout << "f2 " ; return false ;}

void provaBoolUttryck()
{
   bool b1 = t1() && (t2() || f1());
   cout << "resultat :" << b1 << endl;
   bool b2 = t1() || t2() || f1();
   cout << "resultat :" << b2 << endl;
   bool b3 = f1() || (t2() && (f1() || f2()));
   cout << "resultat :" << b3 << endl;

}

bool ungefarLika(double a, double b)
{
    double epsilon = 0.001;
    double diff = a-b;
    return (diff < epsilon) && (diff > (-epsilon));

}

void testaUngefarLika()
{
    cout << "testar ungefarLika" << endl;
    const double epsilon = 0.0005;
    const double delta = 0.002;
    const double x = 123.5;
    bool ok1 = ungefarLika( x, x + epsilon);
    bool ok2 = ungefarLika( x, x - epsilon);
    bool ok3 = !ungefarLika( x, x + delta);
    bool ok4 = !ungefarLika( x, x - delta);
    if (ok1 && ok2 && ok3 && ok4)
    cout << "ungefarLika klarade testen" << endl;
    else cout << "ungefarLika har minst en BUG!!!!!" << endl;
    cout << endl;
}

void provaUngefarLika(){
    cout << "Provar ungefarLika." << endl;
    double a = 0.3;
    double b = 0.1 + 0.1 + 0.1;
    if ( ungefarLika(a,b) )
    {
        cout << "a och b har ungefär samma värden." << endl;
        if (a == b)
        cout << "De har faktiskt exakt samma värden!" << endl;
        else
        cout << "Men bara ungefär." << endl;
    }
    else cout << "a och b är inte särskilt lika" << endl;
    cout << endl;
}

void provarOavsiktligBitvisLogik()
{
    cout << "provar oavsiktlig bitvis logik." << endl;
    int antalApplen = 4;
    int antalMeloner = 1;
    if (antalApplen && antalMeloner)
    cout << "Jag ser att du har köpt olika slags frukter! 1" << endl;
    if (antalApplen & antalMeloner) // BUG
    cout << "Jag ser att du har köpt olika slags frukter! 2" << endl;
    antalApplen = 5;
    if (antalApplen & antalMeloner) // BUG
    cout << "Jag ser att du har köpt olika slags frukter! 3" << endl;
    cout << endl;
    // funkar eftersom antalApplen måste ha en ett på sitt första bittal och antalmeloner är redan 1.
    // funkar endast på ojämna tal.

}

void provaOavsiktligTilldelning(){
    cout << "provar oavsiktlig tilldelning." << endl;
    const double summa = 3 + 4 + 5 + 3;
    const int antal = 4;
    if (antal == 0)
    cout << "medelvärdet kan ej beräknas" << endl;
    else {
    double medelvarde = summa/antal;
    cout << "medelvärdet är " << medelvarde << endl;
    }
    cout << endl;
    }
void k()
{
    double x = 9;
    double gissning =1;

    for(int i=0; i<10; i++)
    {
        double kvot = x/gissning;
        gissning = (gissning+kvot)/2;
        cout << gissning << endl;
    }
    cout << gissning    <<endl;
}


void ingangTillKap04OchBooleskaVariabler()
{
     cout << "kap04 if-satser och booleska variabler"<< endl;
     //provaBoolUttryck();
     //ungefarLika(6,5);
     //testaUngefarLika();
     //provaUngefarLika();
     //provarOavsiktligBitvisLogik();
     //provaOavsiktligTilldelning();
     k();
}
