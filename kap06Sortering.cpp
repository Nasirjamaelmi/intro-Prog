#include <iostream>

using namespace std;

void fyllMedSlumptal( int arr[], int storlek, int minsta, int storsta);
bool arSorterad(const int arr[], int storlek);

void sorteraMedSelectionsort(int arr[], int antal)
{
    int indexTillMinsta[1];
    for(int k=0; k < antal; k++)
    {
        for(int i=antal; 0 < i; i--)
        {
            if (arr[k] < arr[i])
            {
                indexTillMinsta[0] = arr[i];
                arr[k] = indexTillMinsta[0];
            }
        }
    }
}

void sorteraMedBubbelsort(int arr[], int antal)
{
    int indexholder[1];
    for(int k=0; k < antal-1; k++)
    {
        for(int i=k+1; i < antal -1; i++)
        {
            if (arr[k] > arr[i])
            {
                indexholder[0] = arr[k];
                arr[k] = arr[i];
                arr[i] = arr[k];
            }
        }
    }
}

void provaSortera(bool anvandSelectionSort)
{
    const int storlek = 20;
    int arr[storlek];
    fyllMedSlumptal( arr, storlek, 0, 100);
    if (arSorterad(arr, storlek))
    cout << "BUG Det verkar som om fyllMedSlumptal inte fungerar" << endl;
    if (anvandSelectionSort)
    sorteraMedSelectionsort(arr, storlek);
    else sorteraMedBubbelsort(arr, storlek);
    if (arSorterad(arr, storlek))
    cout << "Det verkar som om select-sorteringen fungerade" << endl;
    else cout << "BUG i select sorteringsalgoritmen" << endl;
}

void fyllMedUnikaSlumptal(int arr[], int antal, int minsta, int storsta)
{
  int added = 0;
   while (added != antal)
   {
       int num = minsta + ( rand() % storsta);
       int control = 0;
       for(int i =0;i < antal;i++)
       {
           if(arr[i] == num)
           {
              break;
           }
           control+=1;
       }
          if(control == antal)
       {
           arr[added] = num;
           added+=1;
       }
   }

}


void ingangTillSortera()
{
    provaSortera(true);
    provaSortera(false);
    int antal = 10;
    int arr[10];
    int minsta = 1;
    int storsta = 10;
    fyllMedUnikaSlumptal(arr,antal,minsta,storsta);
    for(int i =0; i < antal; i++)
    {
        cout<<arr[i]<<endl;
    }

}
