#include <iostream>

using namespace std;

void skrivCollatzSekvens(long int n)
{
    cout<<n<<" ";
    while(true)
    {

        if(n % 2 == 0)
        {
            n = n/2;
            cout<<n<<" ";
        }
        else
        {
            n = (n*3+1);

            cout<<(n)<<" ";
        }
        if(n == 1)
        {
            break;
        }


    }
      cout<<endl;
}

long int collatzMax(long int n)
{
  int holder = 0;
    while(true)
    {
        if(n % 2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = (n*3+1);
        }

        if(n == 1)
        {
            break;
        }
        if(n > holder)
        {
            holder = n;
        }
    }
    return holder;
}

long int collatzLangd(long int n)
{
    int holder = 2;
      while(true)
      {
          if(n % 2 == 0)
          {
              n = n/2;
          }
          else
          {
              n = (n*3+1);

          }
          if(n == 1)
          {
              break;
          }
         holder++;
      }
      return holder;
}

void skrivCollatzStatistik(long int maxN)
{
        int maxnumber = 0;
        int whichmaxnumber = 0;
        int maxlength = 0;
        int whichlength = 0;
        for(int i=1; i<maxN; i++)
        {
            int holder = collatzMax(i);
            int length = collatzLangd(i);
            if(holder > maxnumber)
            {
                maxnumber = holder;
                whichmaxnumber = i;
            }
            if(length > maxlength)
            {
                maxlength = length;
                whichlength = i;
            }
        }
        cout<<"maximalt värde = "<<maxnumber<<"  (för startVarde="<<whichmaxnumber<<endl;
        cout<<"maximalt längd = "<<maxlength<<"  (för startVarde="<<whichlength<<endl;
}

void nagraTestanrop()
{
    cout << "Anropar skrivCollatzSekvens(7)" << endl;
    skrivCollatzSekvens(7);
    cout << "collatzMax(7) = " << collatzMax(7) << endl;
    cout << "collatzLangd(7) = " << collatzLangd(7) << endl;
    skrivCollatzStatistik(10000);
    cout << endl;
}
void hejTal( int x ){
cout << "Hej heltal " << x << endl;
}
void hejTal( double x ){
cout << "Hej på dig flyttal " << x << endl;
}
void hejTal( double x, double y ){
cout << "Hej på er flyttal " << x << ", " << y << endl;
}
void hejTal( int x, int y, int z){
cout << "Hej alla tre heltal " << x << ", " << y << "," << z << endl;
}
void testaHejTal(){
hejTal(2);
hejTal(2.1);
hejTal(2, 3);
hejTal(2.2, 3.1, 4.3);
hejTal(2.0, 3.0, 4.0);
double två = 2;
hejTal(två, 3.0, 4.0);
}
void ingangTillKap05Collatz()
{
    cout << "Ingang till Kap05 Collatz." << endl;
    nagraTestanrop();
    cout << endl;
}
