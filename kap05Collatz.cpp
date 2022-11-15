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

void ingangTillKap05Collatz()
{
    cout << "Ingang till Kap05 Collatz." << endl;
    nagraTestanrop();
    cout << endl;
}
