#include <iostream>
#include <cassert>

using namespace std;

void ovaPaPekarnotation()
{
    cout << "Övar på pekarnotation" << endl;
    double x = 1.0;
    double *pX = &x;
    double *ppX  = pX;
    double *pppX = ppX;

    *pppX = 2;

    cout << "x är nu " << x << endl;
    assert( x == 2.0);
    cout << "Övningen lyckades." << endl;
}

void bytVarden(int *pA, int *pB)
{
    int a = *pA;
    *pA = *pB;
    *pB = a;
}
void bytVarden(double *pA, double *pB)
{
    double a = *pA;
    *pA = *pB;
    *pB = a;
}
void automattestaBytVarden()
{
    cout << "Testar bytVarden" << endl;
    int a = 1;
    int b = 2;
    bytVarden(&a, &b);
    assert( a==2 && b==1 );
    double x = 1.5;
    double y = 2.5;
    bytVarden(&x, &y);
    assert( x==2.5 && y==1.5 );
    cout << "Testet av bytVarden lyckades!" << endl;
}

int x (const char *str)
{
    const char *pCh = str;
    while(*pCh != 0)
    {
        ++pCh;

    }

    return pCh - str;
}
void ingangTillPekare()
{
    ovaPaPekarnotation();
    //automattestaBytVarden();



}
