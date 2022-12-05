#include <cassert>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;


#define M_PI 3.14159265358979323846

void skapaFilenHejFilsystem()
{
  string filnamn = "../hejFilsystem.txt";

  ofstream utStrom;
  utStrom.open(filnamn);

  for(int i=0; i<10; i+=1)
  {
      utStrom << i << "hej!" <<endl;
  }

    utStrom.close();
}

double xKoordinat(double vinkelGrader, double radie)
{
    return radie*cos(vinkelGrader*M_PI/180);
}

double yKoordinat(double vinkelGrader, double radie)
{
    return radie*sin(vinkelGrader*M_PI/180);
}

void skapaHexagon()
{

       string filnamn ="../hexagon.svg";

       ofstream ut;
       ut.open(filnamn);


       ut<< "<svg viewBox=\"-110 -110 220 220\" "<<endl
         << "xmlns=\"http://www.w3.org/2000/svg\"" << endl
         << "version=\"1.1\">" <<endl;
       ut<< "<path d=\"";


       double radie=100;
       ut <<"M" << xKoordinat(0,radie) <<" " << yKoordinat(0,radie) <<endl;

       for(int i=1; i<=120; i++)
       {
               if(i%6)
               {
                   radie= radie -1;
               }
               double vinkelGrader = i*360.0/6;
               ut <<"L " << xKoordinat(vinkelGrader, radie) << " "
                  << yKoordinat(vinkelGrader,radie) <<endl;

       }

       ut <<"\"" <<endl;
       ut <<"fill=\"white\" stroke=\"red\" stroke-width=\"1\"/>" <<endl;
       ut <<"</svg>" <<endl;
}


void ingangTillSkrivaFil()
{
  //skapaFilenHejFilsystem();
    //skapaHexagon();
}
