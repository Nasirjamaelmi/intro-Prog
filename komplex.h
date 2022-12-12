#ifndef KOMPLEX_H
#define KOMPLEX_H

#include <string>
#include <ostream>
using namespace std;

struct Komplex
{
    double re;
    double im;
};
double Convert(double degree);

Komplex komplexFranReIm(double re, double im);
Komplex komplexFranAbsArg(double absoulutbelopp, double vinkelIGrader);

double real(Komplex c);
double img(Komplex c);
double abs(Komplex c);
double argGrader(Komplex c);

Komplex konjugat( Komplex c);
Komplex summa(Komplex a, Komplex b);
Komplex diffrens(Komplex a, Komplex b);
Komplex product(Komplex a, Komplex b);
Komplex kvot(Komplex a,Komplex b);

string strängFranKomplex(Komplex c);

Komplex operator+(Komplex a, Komplex b);
Komplex operator-(Komplex a, Komplex b);
Komplex operator*(Komplex a, Komplex b);
Komplex operator/(Komplex a, Komplex b);

ostream& operator<<(ostream &o, Komplex k);

#endif // KOMPLEX_H
