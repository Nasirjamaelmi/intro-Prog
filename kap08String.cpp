#include <string>
#include <cassert>
#include <iostream>

using namespace std;

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




void ingangTillKap08String()
{
    cout << "ingangTillKap08String." << endl;
    demoAvString();
}
