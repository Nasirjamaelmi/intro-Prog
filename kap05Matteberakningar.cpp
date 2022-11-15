#include <iostream>
#include <cmath>

using namespace std;

int aritmetiskSummaFranAnalys(int n)
{
    return n*(n+1)/2;
}

int aritmetiskSummaFranLoop(int n)
{
   int holder = 0;
   for(int i=0; i<=n; i++)
   {
     holder=holder+i;
   }
   return holder;
}



void testaEnSumma(int n)
{
    double resultat = aritmetiskSummaFranLoop(n);
    double diff = resultat - aritmetiskSummaFranAnalys(n);
    cout << "aritmetiskSummaFranLoop(" << n << ") = " << resultat
    << ", diff = " << diff << endl;
}

void testaFleraSummor()
{
    for (int n=0; n<100 ; n+=20)
    {
        testaEnSumma(n);
    }
}
double integralX2FranAnalys(double a, double b)
{
    return (b*b*b - a*a*a)/3;
}
// Returnerar ett approximativt värde på hur stor yta som ligger under
// funktionen y=x*x mellan a och b på x-axeln.
double integralX2FranLoop(double a, double b)
{
   const double dx = 0.01;
   double area = 0;
   for( double x = a; x<(b-dx); x+=dx)
   {
       area += dx*x*x;

   }
   return area;
}

void skrivUtFibonacci(int n)
{
    int x2 = 1;
    int x1 = 1;
    if(n>= 1)
    {
        cout<<"1:1";
    }
    if(n>= 2)
    {
        cout<< ", 2:1";
        x1=1;
        x2=1;
    }
    for (int i=3; i<=n; i++)
    {
         int x = x1 + x2;
         cout<<", "<<i<<":"<<x;

         x2=  x1;
         x1 = x;
    }
}

void testaEnIntegral(double a, double b)
{
    double resultatLoop = integralX2FranLoop(a,b);
    double resultatAnalys = integralX2FranAnalys(a,b);
    double diff = resultatLoop - resultatAnalys;
    cout << "integralX2FranLoop("<<a<<","<<b<<") = "
    << resultatLoop << ", diff = " << diff << endl;
}
void testaFleraIntegraler()
{
    testaEnIntegral(-1,1);
    testaEnIntegral(0,1);
    testaEnIntegral(1,2);
    testaEnIntegral(2,10);
    cout << endl;
}

double kvadratroten(double x)
{
   double gissning = 1;
   for (int i = 0; i < 10; ++i)
   {
       double kvot = x/gissning;
       gissning = (kvot + gissning)/2;

   }
   return gissning;
}
double estimatAvCirkelareaFranRadie(int radie)
{
    double area = 0;

    int radie2= radie * radie;
    for (int i = -radie; i <= radie; ++i)
    {
        for(int x = -radie; x <= radie; x++ )
        {
            if((i*i+x*x) < radie2)
            {
                area++;
            }
        }
    }
    return area;
}
double estimatAvPiFranRadie(int radie)
{

    double area = 0;
    double pi = 0;
    int radie2= radie * radie;
    for (int i = -radie; i <= radie; ++i)
    {
        for(int x = -radie; x <= radie; x++ )
        {
            if((i*i+x*x) < radie2)
            {
                area++;
            }
        }
        pi = area / radie2;
    }
    return pi;
}
void gorFleraEstimatAvPi()
{
    for (int radie = 1 ; radie < 10000; radie = radie*2)
    {
        double pi = estimatAvPiFranRadie(radie);
        cout << " radie = " << radie << ", pi estimeras till " << pi << endl;
    }
}


void testaKvadratroten(double x)
{
    double resultat = kvadratroten(x);
    double diff = resultat - sqrt(x);
    cout << "kvadratroten(" << x << ") beräknad till " << resultat << " diff " << diff << endl;
}
void testaFleraKvadratrotter()
{
    testaKvadratroten(2);
    testaKvadratroten(10);
    testaKvadratroten(100);
    cout << endl;
}
double minExponent(double x)
{
    double sum =0;
    double term = 0;
    for(double i=1; i<=20; i++)
    {
        term = x/i;
        sum = sum + term;
    }
    return sum;
}
void testaMinExponent( double x )
{
    double resultat = minExponent(x);
    double diff = resultat - exp( x );
    cout << "eUpphöjtTill(" << x << ") beräknad till " << resultat << " diff " << diff;
    if (-0.01 < diff && diff < 0.01)
    cout << " (ok)" << endl;
    else cout << " !!!!!!!!!!!!!!!!!1" << endl;
}

void testaFleraExponenter()
{
    for (double x=0.1; x<20; x*=2)
    testaMinExponent(x);

}
double minSinus(double x)
{
  return 0;
}
void plottaMinSinus()
{  /*
    for (int vinkelIGrader=0; vinkelIGrader<4*360; vinkelIGrader+=15)
    {
        double vinkelIGradianer = M_PI*vinkelIGrader/180.0;
        double s = minSinus(vinkelIGradianer);
        int antalSpace = s*10 + 50;
        for (int i=0;i<antalSpace; ++i)
        cout << " ";
        cout << "*" << endl;

    }*/
}

void ingangTillKap05Matteberakningar()
{
    cout << "Ingång till Kap05 Matteberakningar." << endl;
    // testaFleraSummor();
    // testaFleraIntegraler();
    // skrivUtFibonacci(20);
    // testaFleraKvadratrotter();
     //gorFleraEstimatAvPi();
    testaFleraExponenter();
    // plottaMinSinus();
    cout << endl;
}


