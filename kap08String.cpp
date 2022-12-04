#include <string>
#include <cassert>
#include <iostream>

using namespace std;
bool arVokal(char ch);
bool arKonsonant(char ch);

void demoAvString()
{
    string str1 = "hej";
    string str2 = "hej";
    if (str1==str2)
    cout << "Hurra, man kan jämföra strängar utan att anropa ärLika!" << endl;
    else cout << "Rackans, det går fortfarande inte att jämföra strängar!" << endl;
    if (str1=="hej")
    cout << "Det gick att jämföra med en litteral!" << endl;
    else cout << "Det gick dock inte att jämföra med en litteral." << endl;
    cout << "Strängen " << str1 << " har " << str1.size() << " tecken." << endl;
    str2 += " då!";
    cout << str2 << endl;
}

string versalstrang(const string str)
{
   string resultat = "";

   for(unsigned int i=0; i<str.size(); i++)
   {
       resultat += toupper(str[i]);
   }

   return resultat;


}

void automattestaVersalstrang()
{
    cout << "testar versalStrang" << endl;
    assert( versalstrang("abc ABC 123 .,- xyz") == "ABC ABC 123 .,- XYZ" );
    cout << "test av versalStrang lyckades!" << endl;
}

string rubrikstrang(const string str)
{
       string resulat = "";
       for(unsigned int i=0; i<str.size(); i++)
       {
           if(str[i] == str[0])
           {
               resulat += toupper(str[i]);
           }
           else if(str[i-1] == 32)
           {
               resulat += toupper(str[i]);
           }
           else
           {
               resulat+= tolower(str[i]);
           }
       }
       return resulat;
}

string trimmad(const string str)
{
    string resulat = "";
    int firstspace = 0;
    int lastspace = str.size();
    while (str[firstspace] == 32)
    {
        firstspace++;
    }
    while (str[lastspace-1] == 32)
    {
        lastspace--;
    }

    for(int i = firstspace; i < lastspace; i++)
    {
        resulat += str[i];
    }

    return resulat;
}

void automattestaTrimmad()
{
    cout << "testar trimmad" << endl;
    assert( trimmad(" Ha en bra dag! ") == "Ha en bra dag!" );
    assert( trimmad(" A B C ") == "A B C" );
    assert( trimmad(" ") == "" );
    assert( trimmad("") == "" );
    assert( trimmad("abc") == "abc" );
    cout << "testen av trimmad lyckades!" << endl;
}

void automattestaRubrikstrang()
{
    cout << "testar rubrikstrang" << endl;
    assert( rubrikstrang("ha en BRA DAG!") == "Ha En Bra Dag!" );
    assert( rubrikstrang("") == "" );
    cout << "test av rubrikstrang lyckades!" << endl;
}

string iSprik(const string str)
{
    string resultat = "";
    for(unsigned int i=0; i < str.size(); i++)
    {
        if(arVokal(str[i]))
        {
           if(isupper(str[i]))
               resultat += "I";
            else
               resultat += "i";
        }
        else
            resultat += str[i];

    }
    return resultat;
}

void automattestaISprik()
{
    cout << "testar i-sprik" << endl;
    assert( iSprik("abcdefghijklmnopqrstuvxyz,.!? ") == "ibcdifghijklmnipqrstivxiz,.!? " );
    assert( iSprik("ABCDEFGHIJKLMNOPQRSTUVXYZ") == "IBCDIFGHIJKLMNIPQRSTIVXIZ" );
    cout << "test av i-sprik lyckades!" << endl;
}

string rovarsprak(const string str )
{
    string resultat = "";
    for(unsigned int i=0; i < str.size(); i++)
    {
        if(arKonsonant(str[i]))
        {
           resultat += str[i];
           resultat += "o";
           resultat += str[i];

        }
        else
            resultat += str[i];

    }
    return resultat;
}

void automattestaRovarsprak()
{
    cout << "testar rovarsprok" << endl;
    assert( rovarsprak("abcdefghijklmnopqrstuvxyz,.!?")
    == "abobcocdodefofgoghohijojkoklolmomnonopopqoqrorsostotuvovxoxyzoz,.!?");
    cout << "test av rovarsprok lyckades!" << endl;
}

bool arRovarsprak(const string str )
{
   for(unsigned int i=0; i< str.size(); i++)
   {
       if(arKonsonant(str[i]))
       {
           if((str[i+1] != 'o') && (str[i] != str[i+2]))
           {
               return false;
           }
           i+= 2;
       }
   }
   return true;
}

void automattestaArRovarsprak()
{
    cout << "autotest är rövarspråk" << endl;
    assert( arRovarsprak("popror") );
    assert( arRovarsprak("poprorogogroramommomerorinongog aror kokulol") );
    assert( !arRovarsprak("poproror") );
    cout << "test av är rövarspråk lyckades" << endl;
}

string klartextFranRovarsprak(const string str)
{
    assert(arRovarsprak(str)); // precondition
    string resultat = "";
    for(unsigned int i=0; i < str.size(); i++)
    {
        if(arKonsonant(str[i]))
        {
            i+=2;
        }

        resultat += str[i];
    }
    return resultat;
}

void automattestaKlartextFranRovarsprak()
{
    cout << "autotest klartextFranRovarsprak" << endl;
    assert( klartextFranRovarsprak( "poprorogogroramommomerorinongog aror kokulol")
    == "programmering ar kul" );
    cout << "test av klartextFranRovarsprak lyckades" << endl;
}




void ingangTillKap08String()
{
    cout << "ingangTillKap08String." << endl;
    //demoAvString();
    //automattestaVersalstrang();
    //automattestaRubrikstrang();
    //automattestaTrimmad();
    //automattestaISprik();
    //automattestaRovarsprak();
    //automattestaArRovarsprak();
    //automattestaKlartextFranRovarsprak();

}
