#include <iostream>
#include <cassert>

using namespace std;

bool arLika(const char str1[], const char str2[])
{
    int i=0;
    while(str1[i]!=0 && str2[i!=0])
    {
       if(str1[i] != str2[i])
           return false;
       i++;
    }
    return str1[i] == str2[i];
}

void automattestaArLika()
{
        cout << "automattestar arLika" << endl;
        assert( arLika("abcd", "abcd") );
        assert( !arLika("abcd", "abcX") );
        assert( !arLika("abcd", "Xbcd") );
        assert( !arLika("abcd e", "abcd") );
        assert( !arLika("abcd", "abcd e") );
        cout << "testen av arLika lyckades!" << endl;
}

void provarArLika(const char str1[], const char str2[])
{
    bool lika = arLika(str1, str2);
    if (lika)
    cout << str1 << " och " << str2 << " är lika" << endl;
    else cout << str1 << " och " << str2 << " är OLIKA" << endl;
}

void provaFleraArLika()
{
    provarArLika("hej hopp", "hej hopp");
    provarArLika("hej hopp", "hej hoppitopptop");
    provarArLika("hej hoppitopptop", "hej hopp");
}


void konverteraTillVersaler(char str[])
{
    int i = 0;
    while (str[i]!=0)
    {
       str[i] = toupper(str[i]);

        i++;
    }
}

void automattestaKonverteraTillVersaler()
{
    cout << "automattestar konverteraTillVersaler" << endl;
    char str1[] = "abc ABC 123 .,- xyz";
    char str2[] = "ABC ABC 123 .,- XYZ";
    konverteraTillVersaler( str1 );
    assert( arLika(str1, str2) );
    cout << "testen av konverteraTillVersaler lyckades!" << endl;

}

void konverteraTillRubrik(char str[])
{
    str[0] = toupper(str[0]);
    for(int i =1; str[i] !=0; i++)
    {
        if (str[i-1] == 32)
        {
            str[i] = toupper(str[i]);
        }

        else
        {
            str[i]= tolower(str[i]);
        }


    }
}

bool arVokal(char ch)
{
    ch = tolower(ch);
    char str[]{'a','o','u','e','i','y'};

    for(int i=0; str[i]!=0; i++)
    {
        if(ch == str[i])
        {
            return true;
        }
    }

    return false;
}

bool arKonsonant(char ch)
{
    ch = tolower(ch);
    char str[]{'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','x','z'};

    for(int i=0; str[i]!=0; i++)
    {
        if(ch == str[i])
        {
            return true;
        }
    }

    return false;
}

void automattestaArVokalOchArKonsonant(){
    cout << "automattestar arVokal och arKonsonant" << endl;
    char vokaler[] = "aeiouyAEIOUY";
    char konsonanter[] = "bcdfghjklmnpqrstvxzBCDFGHJKLMNPQRSTVXZ";
    char andraTecken[] = ".,?!; ";
    for (int i=0; vokaler[i] != 0; ++i)
    assert( arVokal(vokaler[i]) );
    for (int i=0; konsonanter[i] != 0; ++i)
    assert( arKonsonant(konsonanter[i]) );
    for (int i=0; andraTecken[i] != 0; ++i)
    assert( !arVokal(andraTecken[i]) && !arKonsonant(andraTecken[i]) );
    cout << "testerna av arVokal/arKonsonant lyckades!" << endl;
}
void automattestaKonverteraTillRubrik()
{
    cout << "automattestar konverteraTillRubrik" << endl;
    char str1[] = "this is a test";
    char str2[] = "THIS IS A TEST";
    char rubrik[] = "This Is A Test";
    konverteraTillRubrik( str1 );
    konverteraTillRubrik( str2 );
    assert( arLika(str1, rubrik) );
    assert( arLika(str2, rubrik) );
    cout << "testen av konverteraTillRubrik lyckades!" << endl;
}

void ingangTillKap08CStrangar()
{
   //automattestaArLika();
   //automattestaKonverteraTillVersaler();
   // automattestaKonverteraTillRubrik();
    automattestaArVokalOchArKonsonant();

}
