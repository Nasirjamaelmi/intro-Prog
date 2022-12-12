#include <komplex.h>
#include <iostream>
void testaKomplex()
{
    Komplex i = komplexFranReIm(0,1);
    Komplex a = komplexFranAbsArg(1,45);


    cout <<" a= "<<strängFranKomplex(a)<<endl;
    cout <<" argGrader(a)= "<<argGrader(a)<<endl;
    cout <<" a= "<<abs(a)<<endl;

    Komplex ai=a*i;

    cout<<" a * i= "<<strängFranKomplex(ai)<<endl;
    cout <<"argGrader(a * i) = "<<argGrader(ai)<<endl;

    cout << i<<endl;
}

void ingangTillTestaKomplex()
{
    testaKomplex();
}

