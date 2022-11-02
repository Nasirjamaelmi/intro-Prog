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



void ingangTillKap04OchBooleskaVariabler()
{
     cout << "kap04 if-satser och booleska variabler"<< endl;
     //provaBoolUttryck();

}
