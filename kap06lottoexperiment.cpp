#include <vector>
#include <iostream>
#include <chrono>


using namespace std;
using namespace chrono;

bool innehaller(const vector<int> v, int tal)
{
    for(int i= 0; i < v.size(); i++)
    {
        if (v[i] == tal)
        {
            return true;
        }

    }
    return false;
}

vector<int> lottoradFranAnvandare()
{
    vector<int> vek{};
    int check = 0;
    while(check >= 0 && check <= 35)
    {
        cin >> check;
        vek.push_back(check);
        if(vek.size() == 7)
            break;
    }
    return vek;
}

vector<int> slumplottorad()
{
    int random = 0;
    vector<int> vek{};
    for (int i = 0; i < 7; ++i)
    {

        random = rand() % 36;
        vek.push_back(random);

    }
    return vek;
}

int antalMatch( const vector<int> v1, const vector<int> v2)
{
   int sum = 0;
   sum = v1.size() + v2.size();
   return sum;
}

void korTusenExperiment( const vector<int> anvandarensRad)
{
     int antal=0;
     vector<int> vek{};
     for (int i =0;  i < 1000; i++)
     {
         vek = slumplottorad();
         for(int i=0; i <7; i++)
         {
             if(anvandarensRad[i] == vek[i])
             {
                 antal++;
             }
         }
     }

        cout<<"Du fick rätt "<<antal<<" av 1000"<<endl;

}

void lottoexperimentera( )
{
    vector<int> anvandarrad = lottoradFranAnvandare();
    for (int i=0; i < 20 ; i+=1)
    {
         korTusenExperiment( anvandarrad );
    }

}

void ingangTillKap06Lottoexperiment()
{
    lottoexperimentera();
}







