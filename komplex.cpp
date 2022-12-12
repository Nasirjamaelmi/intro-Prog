#include <komplex.h>
#include <cmath>
#include <sstream>
#include <cassert>

using namespace std;
double Convert(double degree)
{
    double pi = 3.14159265359;
    return (degree * (pi / 180));
}
Komplex komplexFranReIm(double re, double im)
{
    Komplex c;
    c.re = re;
    c.im = im;
    return c;
}

Komplex komplexFranAbsArg(double absoulutbelopp, double vinkelIGrader)
{
    Komplex c;
    c.re = absoulutbelopp * cos(Convert(absoulutbelopp));
    c.im = absoulutbelopp * sin(Convert(vinkelIGrader));
    return c;
}

double abs(Komplex c)
{
    return sqrt(c.im*c.im + c.re*c.re);
}

double argGrader(Komplex c)
{
    return atan2(c.im,c.re)*180.0/M_PI;
}

double img(Komplex c)
{
    return c.im;
}

double real(Komplex c)
{
    return c.re;
}

Komplex Konjugat(Komplex c)
{
    return komplexFranReIm(c.re,-c.im);
}

Komplex summa(Komplex a, Komplex b)
{
    Komplex c;

    c.im = a.im + b.im;
    c.re = a.re + b.re;
    return c;
}

Komplex diffrens(Komplex a, Komplex b)
{
    Komplex c;

    c.im = a.im - b.im;
    c.re = a.re - b.re;
    return c;
}
Komplex product(Komplex a, Komplex b)
{
    Komplex c;

    c.im = a.im * b.im;
    c.re = a.re * b.re;
    return c;
}
Komplex kvot(Komplex a,Komplex b)
{

    Komplex k = Konjugat(b);
    Komplex täljare = product(a,k);
    Komplex nämnare = product(b,k);
    return komplexFranReIm(täljare.re/nämnare.re,täljare.im/nämnare.im);
}
string strängFranKomplex(Komplex c)
{
   stringstream os;
   os << "("<<c.re;
   if(c.im >= 0)
   os << '+';
   os << c.im<<"i)";
   return os.str();
}
Komplex operator+(Komplex a, Komplex b)
{
    return summa(a,b);
}
Komplex operator-(Komplex a, Komplex b)
{
    return diffrens(a,b);
}
Komplex operator*(Komplex a, Komplex b)
{
    return product(a,b);
}
Komplex operator/(Komplex a, Komplex b)
{
    return kvot(a,b);
}
ostream& operator<<(ostream& o, Komplex k)
{
    o <<strängFranKomplex(k);
    return o;
}







