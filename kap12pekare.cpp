#include <iostream>
#include <cassert>
#include <iomanip>

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

int Langd(const char *str)
{
    const char *pCh = str;
    while(pCh != 0)
    {
        ++pCh;

    }

    return pCh - str;
}

void skrivStrangar(const char ** strangar, int antal)
{

    for(int i=0; i<antal; i++)
    {
        cout<<strangar[i];
    }

}

void provaSkrivStrangar()
{
    const int antal = 7;

    const char *dagnamn[antal] = { "måndag", "tisdag", "onsdag", "torsdag",
    "fredag", "lördag", "söndag" };

    skrivStrangar(dagnamn, antal);
}

void skrivUtArr(const int *pBegin, const int *pEnd)
{
    for(const int *p = pBegin; p!=pEnd; p++)
    {
        cout<<*p<<" ";
    }


}

void fyllMedVarde(int *pBegin, int *pEnd, int varde)
{
    for (int *p =pBegin; p!=pEnd; p++)
    {
          *p=varde;

    }
}

void fyllMedSlumptal(int *pBegin, int *pEnd, int minst, int störst)
{

    for (int *p= pBegin; p!=pEnd; p++)
    {
        *p= (rand() % (störst + 1 - minst)) + minst;
    }
}

int minst(const int *pBegin, const int *pEnd)
{
    assert( pEnd - pBegin > 0);

    const int *findSmall = pBegin;
    for(const int *p=pBegin; p!=pEnd; p++)
    {

       if(*p < *findSmall)
       {
           findSmall = p;
       }


    }
    return *findSmall;
}

int storst(const int *pBegin, const int *pEnd)
{
    assert( pEnd - pBegin > 0);
    const int *findBig = pBegin;
    for(const int *p=pBegin; p!=pEnd; p++)
    {
       if(*p > *findBig)
       {
           findBig = p;
       }

    }
    return *findBig;
}

bool arSorterad(const int *pBegin, const int *pEnd)
{
    for (const int *p=pBegin; p!=pEnd; p++)
    {
         if(*p > *(p+1))
         {
             return false;
         }
    }
    return true;
}

bool innehaller(const int *pBegin, const int *pEnd, int x)
{
    for (const int *p=pBegin; p!=pEnd; p++)
    {
        if(*p == x)
         return true;
    }
    return false;
}

void testaArrayfunktionernaP()
{
    cout << "testar arrayfunktionerna -P " << endl;
    const int storlek = 10;
    int arr[storlek];
    fyllMedVarde(&arr[0], &arr[storlek], 5);
    skrivUtArr(&arr[0], &arr[storlek]);
    arr[0] -= 1;
    arr[storlek-1] += 1;
    assert( arSorterad(&arr[0], &arr[storlek]) );
    arr[0] = 6;
    assert( !arSorterad(&arr[0], &arr[storlek]) );
    fyllMedSlumptal(&arr[0], &arr[storlek], -2, 2);
    skrivUtArr(&arr[0], &arr[storlek]);
    arr[1] = -3; // Detta blir det minsta värdet
    arr[storlek-1] = 3; // Detta blir det största värdet
    int m = minst(&arr[0], &arr[storlek]);
    int s = storst(&arr[0], &arr[storlek]);
    assert( m == -3 && s == 3 );
    assert( innehaller(&arr[0], &arr[storlek], 3));
    cout << "testar av arrayfunktionerna -P lyckades" << endl;
}

char* cstrangkopia(const char *cstrang)
{
 //   cout<<cstrang;
    int i =  0;
    while(cstrang[i]!= 0)
        i++;
    cout << i << endl;
    char *str = new char[i+1];
    char *p2 = str;
    for(const char *x=cstrang; x<=cstrang+i; x++)
    {
       *p2 = *x;
        p2++;
    }

    return str;

}

char* cstrangFranUppmaning(const char* uppmaning)
{
    cout<<uppmaning;
    char str[100];
    cin >> setw(100) >> str;
    return cstrangkopia(str);
}

void provaCstrangFranUppmaning()
{
    const char* farnamn = cstrangFranUppmaning("Ditt förnamn");
    const char* efternamn = cstrangFranUppmaning("Ditt efternamn: ");

    cout<< "Hej" << farnamn <<" "<<efternamn <<"!"<<endl;
    delete [] farnamn;
    delete [] efternamn;
}

void ingangTillPekare()
{
    //ovaPaPekarnotation();
    //automattestaBytVarden();
    //provaSkrivStrangar();
    //testaArrayfunktionernaP();
    provaCstrangFranUppmaning();

}
