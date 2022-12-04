#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<string> ordlistan()
{
      string filnamn ="../ordlista.txt";
      ifstream filen(filnamn);
      vector<string> listan;
      while(!filen.fail())
      {
          string ettOrd;
          filen >> ettOrd;
          if(!filen.fail())
              listan.push_back(ettOrd);
      }
      return listan;
}

void testaOrdlistan()
{
    vector<string> listan;
    listan = ordlistan();
    int total;
    for (unsigned int i = 0; i < listan.size(); ++i)
    {
        cout<<listan[i]<<endl;
        total =i;
    }
    cout<<"(total "<<total<<" )";

}

void ingangTillLasafil()
{
    testaOrdlistan();
}
