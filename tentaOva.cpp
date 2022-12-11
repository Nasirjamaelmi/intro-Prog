#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//
//
int antalUnikaTecken( char* str )
{
    int unika = 0;
    for(int i=0; i<=127; i++)
    {
        for(int p=0; *(str+p)!=0; p++)
        {
            if(*(str+p) == i)
            {
                unika++;
                i++;
            }
        }
    }
    return unika;
}
//
//
// Ändra INTE i main
void tentaova(){
    char cstr[1000];
    cin >> cstr;
    cout << antalUnikaTecken( cstr );

}
double summa( double arr[], int antal )
{
    double sum = 0;
    for(int i=0; i<antal; i++)
    {
      sum = sum + arr[i];
    }
    return sum;
}
//
// Ändra INTE här nedanför!
//
void ova1(){
    int antal = 0;
    double storArr[2];

    while (cin >> storArr[antal])
    {
        antal +=1;
    }
    double theSum = summa( storArr, antal );
    cout << setprecision(2) << fixed << theSum << endl;

}
