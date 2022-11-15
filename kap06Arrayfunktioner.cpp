#include <iostream>
#include <stdlib.h>
using namespace std;

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

}

int minst(const int arr[], int antal){
// TODO
     return 0;
}

int storst(const int arr[], int antal){
// TODO
     return 0;
}

int indexTillMinsta(const int arr[], int antal){
// TODO
     return 0;
}

int indexTillStorsta(const int arr[], int antal)
{
    return 0;
}

bool arSorterad(const int arr[], int antal){
// TODO
    return true;
}

bool innehaller(const int arr[], int antal, int x){
// TODO
    return true;
}

void provaArrayFunktionerna()
{
    cout << "provaArrayFunktionerna" << endl;
    const int storlek = 10;
    int arr[storlek];
    fyllMedVarde(arr, storlek, 5);
    skrivUtArr(arr, storlek);
   /* arr[0] -= 1;
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
    cout << "minst=" << m << " störst=" << s << endl;
    if (m != -3 || s != 3)
    cout << "BUG m eller s !!!!!!!!!!!" << endl;
    if (indexTillMinsta(arr, storlek) != 1)
    cout << "BUG i indexTillMinsta !!!!!!!!!!!" << endl;
    if (indexTillStorsta(arr, storlek) != (storlek-1))
    cout << "BUG i indexTillStörsta !!!!!!!!!!!" << endl;
    if (!innehaller(arr,storlek, 3))
    cout << "BUG!!!!!!!!!!!" << endl;
*/
}
void ingangTillKap6ArrayFunktioner()
{
    provaArrayFunktionerna();
}
