#include <iostream>
#include <cctype>
using namespace std;


void experimenteraMedChar()
{
    cout << "experimenteraMedChar....." << endl;
    char ch1 = 'R';
    char ch2 = 82;
    int i1 = 'R';
    int i2 = 82;
    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << i1 << endl;
    cout << i2 << endl;
}

void skrivNagraAsciiTecken()
{
    cout << "skrivNagraAsciiTecken" << endl;

    for (int asciital = 'a'-5; asciital<='z'+5; ++asciital)
    {
        char tecken = asciital;
        cout << asciital << "\t" << tecken << endl;
    }
}
void test()
{
    char ch1 = 'A';
    char ch2 = 'a';
    char alpha = isalpha(ch2);
    char alpha1 = isalpha(ch1);
    cout<<alpha<<"\n"<<alpha1<<endl;
}


void ingangTillKap8()
{
  //experimenteraMedChar();
  //skrivNagraAsciiTecken();
    test();
}
