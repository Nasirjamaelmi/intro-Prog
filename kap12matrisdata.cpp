#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;


struct Vaxel
{
    int antal500;
    int antal200;
    int antal100;
    int antal20;
    int antal10;
    int antal5;
    int antal1;
};

void skrivUtMatrisdata(double **ppElement, int antalRader, int antalKolumner)
{

   cout<<antalRader<<"  X "<<antalKolumner<<" matris:"<<endl;
   for(int r=0; r<antalRader; ++r)
   {
       cout<<endl;
       for(int k=0; k<antalKolumner; ++k)
       {
           cout<<setw(5)<<ppElement[r][k];
       }
   }
   cout<<endl;
}

void nollstallMatrisdata(double **ppElement, int antalRader, int antalKolumner)
{
    for (int r=0; r<antalRader; ++r)
    for (int k=0; k<antalKolumner; ++k)
    {
        ppElement[r][k] = 0;
    }
}

double **allokeradMatris(int antalRader, int antalKolumner)
{
    double **ppElement = new double*[antalRader];
    for (int rad=0; rad<antalRader; ++rad)
    {
        ppElement[rad] = new double[antalKolumner];
    }
    nollstallMatrisdata(ppElement, antalRader, antalKolumner);
    return ppElement;
}

void frigorMatrisdata(double **ppElement, int antalRader)
{

      for(int i=0; i<antalRader; i++)
      {
          delete [] ppElement[i];
      }
       delete [] ppElement;
}

double **allokeradEnhetsmatris(int n)
{
    double **temp = allokeradMatris(n,n);
    for(int x=0; x<n; x++)
    {
         temp[x][x] =1;
    }

        return temp;
}

void provkorMatrisdatafunktioner()
{
    cout << "Provkör matrisdatafunktioner" << endl;
    double **ppData = allokeradMatris(4, 5);
    skrivUtMatrisdata(ppData, 4,5);
    double **ppEnhetsdata = allokeradEnhetsmatris(3);
    skrivUtMatrisdata(ppEnhetsdata, 3,3);
    frigorMatrisdata(ppData, 4);
    frigorMatrisdata(ppEnhetsdata, 3);
    cout << "matrisdatafunktionerna provkörda" << endl;
}

void bytVarden(int &a, int &b)
{
    int holder = a;
    a=b;
    b=holder;
}

void bytVarden(double &a, double &b)
{
    double holder = a;
    a=b;
    b=holder;
}

void automattestaBytVardena()
{
    int a = 1;
    int b = 2;
    bytVarden(a, b);
    assert( a==2 && b==1 );
    double x = 1.5;
    double y = 2.5;
    bytVarden(x, y);
    assert( x==2.5 && y==1.5 );
    cout<<"funka";
}


// Returnerar ett objekt ifylld med angivna värden
Vaxel vaxelFranAntal(int a500, int a200, int a100,
int a20, int a10, int a5, int a1)
{
    Vaxel vaxel;
    vaxel.antal500 = a500;
    vaxel.antal200 = a200;
    vaxel.antal100 = a100;
    vaxel.antal20 = a20;
    vaxel.antal10 =a10;
    vaxel.antal5 = a5;
    vaxel.antal1 = a1;

    return vaxel;
}

// Returnerar ett objekt ifylld med motsvarande belopp
Vaxel vaxelFranBelopp(int belopp)
{

    Vaxel nytt{0,0,0,0,0,0,0};
    while(belopp !=0)
    {
       if(belopp >= 500)
       {
           nytt.antal500 = belopp/500;
           belopp = belopp - nytt.antal500*500;
       }
       if(belopp >= 200)
       {
           nytt.antal200 = belopp/200;
           belopp = belopp - nytt.antal200*200;
       }
       if(belopp >= 100)
       {
           nytt.antal100 = belopp/100;
           belopp = belopp - nytt.antal100*100;
       }
       if(belopp >= 20)
       {
           nytt.antal20 = belopp/20;
           belopp = belopp - nytt.antal20*20;
       }
       if(belopp >= 10)
       {
           nytt.antal10 = belopp/10;
           belopp = belopp - nytt.antal10*10;
       }
       if(belopp >= 5)
       {
           nytt.antal5 = belopp/5;
           belopp = belopp - nytt.antal5*5;
       }
       if(belopp >= 1)
       {
           nytt.antal1 = belopp/1;
           belopp = belopp - nytt.antal1;
       }


    }
 return nytt;

}
// Returnerar det belopp som motsvarar objektet vaxel
int beloppFranVaxel(Vaxel vaxel)
{
   int sum = 0;

   while(vaxel.antal500>0)
   {
       int temp = vaxel.antal500;
       sum += temp * 500;

   }

   while (vaxel.antal200>0)
       {
           int temp=vaxel.antal200;
           sum += temp * 200;

       }

    while(vaxel.antal100>0)
   {
      int temp=vaxel.antal100;
       sum += temp * 100;

   }

    while(vaxel.antal20>0)
       {
           int temp=vaxel.antal20;
           sum += temp * 20;

       }

    while(vaxel.antal10>0)
   {
       int temp=vaxel.antal10;
       sum += temp * 10;

   }

    while(vaxel.antal5>0)
   {
       int temp=vaxel.antal5;
       sum += temp * 5;

   }

    while(vaxel.antal1>0)
   {
       int temp=vaxel.antal1;
       sum += temp;

   }


   return sum;

}
// Skriver ut växeln på skärmen
void skrivUtVaxel(Vaxel vaxel)
{
    cout<<"Antal 500:"<<vaxel.antal500<<endl;
    cout<<"Antal 200:"<<vaxel.antal200<<endl;
    cout<<"Antal 100:"<<vaxel.antal100<<endl;
    cout<<"Antal 20:"<<vaxel.antal200<<endl;
    cout<<"Antal 10:"<<vaxel.antal10<<endl;
    cout<<"Antal 5:"<<vaxel.antal5<<endl;
    cout<<"Antal 1:"<<vaxel.antal1<<endl;
}
bool arLika(const Vaxel &v1, const Vaxel &v2)
{
    return (beloppFranVaxel(v1) == beloppFranVaxel(v2));

}
// Automattestar de funktioner som har med Växel att göra
void automattestaVaxel()
{
    Vaxel vaxell = vaxelFranBelopp(10001);
    skrivUtVaxel(vaxell);
    assert(arLika(vaxelFranBelopp(947), vaxelFranAntal(1,2,0,2,0,1,2)) );
    assert(beloppFranVaxel(vaxell) == 836);

}


void ingangTillMatrisdata()
{
    //provkorMatrisdatafunktioner();
    //automattestaBytVardena();
    automattestaVaxel();

}
