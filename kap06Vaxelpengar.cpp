#include <iostream>

using namespace std;

void skrivUtVaxelV2(int antalKronor)
{
    const int antalValorer = 8;
    int valorer[antalValorer]{ 500, 200, 100, 20, 10, 5, 2, 1 };
    int count[8];
    int kvar = antalKronor;
    while (kvar != 0)
    {
        if(kvar > 500)
        {
            count[0] +=1;
            kvar = kvar-500;
        }

    }
        cout<<count[0]<<" x "<<valorer[0]<<endl;
        cout<<count[1]<<" x "<<valorer[1]<<endl;
        cout<<count[2]<<" x "<<valorer[2]<<endl;
        cout<<count[3]<<" x "<<valorer[3]<<endl;
        cout<<count[4]<<" x "<<valorer[4]<<endl;
        cout<<count[5]<<" x "<<valorer[5]<<endl;
        cout<<count[6]<<" x "<<valorer[6]<<endl;
        cout<<count[7]<<" x "<<valorer[7]<<endl;
}



void ingangTillKap6Vaxelpengar()
{
    cout << "ingangTillKap6Vaxelpengar" << endl;
    skrivUtVaxelV2(947);
}
