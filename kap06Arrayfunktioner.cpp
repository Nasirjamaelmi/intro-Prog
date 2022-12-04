#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void forsokAndraVarden(int a, int arr[], int antalVarden)
{
    a = 42;

    for (int i=0; i<antalVarden; ++i)
        arr[i] = 42;
}

void anropaForsokAndraVarden()
{
    int a = 0;
    int arr[2]{0,0};
    forsokAndraVarden(a, arr, 2);
    cout << "a=" << a << ", arr[]=" << arr[0] << "," << arr[1] << endl;
}

void skrivUtArr(const int arr[], int antal)
{
    cout<<"(";
    for (int i=0; i<antal; i++)
    {
        cout<<arr[i]<<",";

    }
    cout<<")"<<endl;
}

void fyllMedVarde(int arr[], int antal, int varde)
{

   for (int i =0; i<antal; i++)
   {
       arr[i] = varde;

   }

}

void fyllMedSlumptal(int arr[], int antal, int minsta, int storsta)
{
   for (int i= 0; i<antal; i++)
   {
       arr[i]= (rand() % (storsta + 1 - minsta)) + minsta;
   }
}

int minst(const int arr[], int antal)
{
     int minstatalet = arr[0];
     for(int i=0; i < antal; i++)
     {
        if(arr[i] < minstatalet)
        {
            minstatalet = arr[i];
        }
     }
     return minstatalet;
}

int storst(const int arr[], int antal)
{
    int storstatalet = 0;
    for(int i=0; i <antal; i++)
    {
        if(arr[i] > storstatalet)
        {
            storstatalet = arr[i];
        }
    }
    return storstatalet;
}

int indexTillMinsta(const int arr[], int antal)
{
    int minstatalet = arr[0];
    int plats = 0;
    for(int i=0; i <antal; i++)
    {
       if(arr[i] < minstatalet)
       {
           minstatalet = arr[i];
           plats = i;
       }
    }
    return plats;
}

int indexTillStorsta(const int arr[], int antal)
{
    int storstatalet = arr[0];
    int plats = 0;
    for(int i=0; i <antal; i++)
    {
        if(arr[i] > storstatalet)
        {
            storstatalet = arr[i];
            plats = i;

        }
    }
    return plats;
}

bool arSorterad(const int arr[], int antal)
{
   for (int i=0; i <antal-1; i++)
   {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
   }
   return true;
}

bool innehaller(const int arr[], int antal, int x)
{

    for (int i=0; i <= antal-1; i++)
    {
         if(arr[i] == x)
         {
             return true;
         }
    }
    return false;
}

void provaArrayFunktionerna()
{
    cout << "provaArrayFunktionerna" << endl;
    const int storlek = 10;
    int arr[storlek];
    fyllMedVarde(arr, storlek, 5);
    skrivUtArr(arr, storlek);
    arr[0] -= 1;
    arr[storlek-1] += 1;
    if (arSorterad(arr, storlek))
    cout << "Arrayen är sorterad" << endl;
    else cout << "BUG BUG arSorterad tycks inte fungera" << endl;
    arr[0] = 6;
    if (arSorterad(arr, storlek))
    cout << "BUG arSorterad tror att arrayen är sorterad" << endl;
    fyllMedSlumptal( arr, storlek, -2, 2);
    skrivUtArr(arr, storlek);
    arr[1] = -3; // Detta blir det minsta värdet
    arr[storlek-1] = 3; // Detta blir det största värdet
    int m = minst(arr, storlek);
    int s = storst(arr, storlek);
    skrivUtArr(arr,storlek);
    cout << "minst=" << m << " störst=" << s << endl;
    if (m != -3 || s != 3)
    cout << "BUG m eller s !!!!!!!!!!!" << endl;
    if (indexTillMinsta(arr, storlek) != 1)
    cout << "BUG i indexTillMinsta !!!!!!!!!!!" << endl;
    if (indexTillStorsta(arr, storlek) != (storlek-1))
    cout << "BUG i indexTillStörsta !!!!!!!!!!!" << endl;
    if (!innehaller(arr,storlek, 3))
    cout << "BUG!!!!!!!!!!!" << endl;

}

void fyllMedPrimtal(int arr[], int antal)
{
    arr[0] = 2;
    for (int ix=1; ix<antal ; ++ix)
    {
        int forgoendePrimtal = arr[ix-1];
        for(int kandidat = forgoendePrimtal +1; true ; ++kandidat)
        {

            for(int i=0; i <ix; ++i)
            {
                bool hittatEnDelare = false;
                if((kandidat % arr[i]) == 0)
                {
                    hittatEnDelare = true;
                    break;
                }
                if (hittatEnDelare == false)
                    arr[ix] = kandidat;
            }

        }

    }
}

void provaFyllMedPrimtal()
{
    const int antalTal = 50;
    int talen[antalTal];
    fyllMedPrimtal( talen, antalTal );
    skrivUtArr(talen, antalTal);
    cout << endl;
}

void forsokAndraVektornsVarden(int a, vector<int> vek)
{
    a = 42;
    for (int i=0; i<vek.size(); ++i)
        vek[i] = 42;
}

void anropaForsokAndraVektornsVarden()
{
    int a = 0;
    vector<int> vek{0,0};
    forsokAndraVektornsVarden(a, vek);
    cout << "a=" << a << ", vek[]=" << vek[0] << "," << vek[1] << endl;
}

void ingangTillKap6ArrayFunktioner()
{
    //provaArrayFunktionerna();
   //provaFyllMedPrimtal();
    anropaForsokAndraVarden();

}
