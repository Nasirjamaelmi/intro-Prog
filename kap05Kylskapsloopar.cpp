#include <iostream>
#include <thread>

using namespace std;
using namespace this_thread;

void kylskapMedWhileTrue(){
    cout << "kylskap med while true" << endl;
while (true)
{

    int temp= 0;
    cin >> temp;
    if (temp < -273)
        break;
    if (temp < 2 &&  temp > -273)
    {
        cout << "för kallt!" << endl;
    }
    if (temp > 8)
    {
        cout << "för varmt!" <<endl;
    }
    if (temp >= 2 && temp <= 8)
    {
        cout << "Lagom" <<endl;
    }
}
cout << "lämnar kylskåpsloop." << endl;
}



void ingangtillkap5Kylskapsloppar()
{
   kylskapMedWhileTrue();
}
