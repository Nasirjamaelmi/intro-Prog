#include <iostream>
#include <cassert>

using namespace std;

bool arLikaP(const char *str1, const char *str2)
{
   int i = 0;
   while(*(str1+i)!=0 && *(str2+i) != 0)
   {
       if(*(str1+i) != *(str2+i))
       {
           return false;
       }
       i++;
   }
   return *(str1+i) == *(str2+i);
}
void konverteraTillVersalerP(char *str)
{
    int i=0;
    while(*(str+i) !=0)
    {
        *(str+i) = toupper(*(str+i));
        i++;
    }
}
void konverteraTillRubrikP(char *str)
{
    if(*str != 0)
    {
     *(str) = toupper(*(str));

        for(int i=1; *(str+i)!= 0; i++)
        {
            if(*(str+i-1) == 32)
            {
              *(str+i) = toupper(*(str+i));
            }
            else
            {
                *(str+i) = tolower(*(str+i));
            }
        }
    }
}
void automattestaStrangfunktionerP()
{
    cout << "automattestar strangfunktionerna-P" << endl;
    assert( arLikaP("abcd", "abcd") );
    assert( !arLikaP("abcd", "abcX") );
    assert( !arLikaP("abcd", "Xbcd") );
    assert( !arLikaP("abcd e", "abcd") );
    assert( !arLikaP("abcd", "abcd e") );
    char strA[] = "abc ABC 123 .,- xyz";
    char strB[] = "ABC ABC 123 .,- XYZ";
    konverteraTillVersalerP( strA );
    assert( arLikaP(strA, strB) );
    char str1[] = "this is a test";
    char str2[] = "THIS IS A TEST";
    char rubrik[] = "This Is A Test";
    char tom[] = "";
    konverteraTillRubrikP( str1 );
    konverteraTillRubrikP( str2 );
    konverteraTillRubrikP( tom );
    assert( arLikaP(str1, rubrik) );
    assert( arLikaP(str2, rubrik) );
    assert( arLikaP(tom, "") );
    cout << "testen av strangfunktionerna-P lyckades!" << endl;
}


void ingangTillItereraMedPekare()
{
    automattestaStrangfunktionerP();
}
