#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cassert>
#include <sstream>

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

bool matcharFragenyckel(string ord, string nyckel)
{

        if (nyckel.size() != ord.size())
             return false;
        for(unsigned int i=0; i<nyckel.size(); i+=1)
        {
            char nyckelTecken = nyckel[i];

                if (nyckelTecken == '?')
                    continue;

                if ((nyckelTecken) != (ord[i]))
                    return false;
         }
            return true;
}

void skrivMatchningar(const vector<string>& allaOrd, string nyckel)
{
    for (unsigned int i=0; i<allaOrd.size(); ++i)
    {
        if (matcharFragenyckel(allaOrd[i], nyckel))
        cout << allaOrd[i] << endl;
    }
}

void ordMatch()
{
    vector<string> allaOrd = ordlistan();
    cout << "Välkommen till ordmatch!" << endl;
    while (true)
    {
        cout << "NYCKEL:";
        string nyckel;
        getline( cin , nyckel );
        if (nyckel == "")
        continue;
        if (nyckel == "avbryt")
           break;


        skrivMatchningar( allaOrd, nyckel);
    }

    cout << "(ordmatchningen avbröts)" << endl;
}



void automattestaMatcharFragenyckel()
{
    cout << "testar matcharFragenyckel ..." << endl;
    assert( matcharFragenyckel("xaby", "?ab?") );
    assert( !matcharFragenyckel("xaby", "?abz") );
    assert( !matcharFragenyckel("xaby", "?abyx") );
    assert( !matcharFragenyckel("xabyx", "?aby") );
    cout << "automattestaMatcharFragenyckel lyckades" << endl;
}

unsigned int konstigMatch(string str1, string str2)
{
    for(unsigned int i = 0; i<str1.size() && i<str2.size(); i+=1)
    {
        if (str2[i] == 'X')
            continue;
        if(tolower(str1[i]) != tolower(str2[i]))
            return i;
    }
    return 99;
}

void provaKonstigmatch()
{
    cout<<"prova Konstig Match"<<endl;
    unsigned int x0 = konstigMatch("abc","abq");
    unsigned int x1 = konstigMatch("ABC","aXc");
    unsigned int x2 = konstigMatch("abcdef","aaaaa");
    unsigned int x3 = konstigMatch("abc","ABc");
    unsigned int x4 = konstigMatch("abcde","fghij");

    cout << x0 <<endl;
    cout << x1 <<endl;
    cout << x2 <<endl;
    cout << x3 <<endl;
    cout << x4 <<endl;

    assert(x0 == 2);
    assert(x1 == 99);
    assert(x2 == 1);
    assert(x3 == 99);
    assert(x4 == 0);

}

void provaTrinarOperator()
{
    cout<<(0? 1:2)<<endl;
    cout<<(3? 4:5)<<endl;
    int a = 7;
    int b = 8;
    cout<<(a>b ? a:b)<<endl;
}

void testaFail()
{
    string exempelsträng = "12 + 13 = 25";

    istringstream ström(exempelsträng);

    int tal1 = 42;
    int tal2 = 42;
    string sträng = "hej";
    char tecken = 'x';

    ström >> tal1 >> tecken >> tal2 >> sträng;
   // ström >> "hej";

    cout << tal1 <<endl;
    cout << tecken <<endl;
    cout << tal2 <<endl;
    cout << sträng <<endl;



}


void ingangTillLasafil()
{
    //testaOrdlistan();
    //automattestaMatcharFragenyckel();
    //ordMatch();
    //provaTrinarOperator();
   // provaKonstigmatch();
    testaFail();

}
