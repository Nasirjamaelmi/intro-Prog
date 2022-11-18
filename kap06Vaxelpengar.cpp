#include <iostream>

using namespace std;

void skrivUtVaxelV2(int antalkronor)
{
      const int antalValorer = 8;
      int valorer[antalValorer]{500,200,100,20,10,5,2,1};
      int kronor = antalkronor;

      for(int i=0;i<antalValorer;i++)
      {
        int antal = kronor/valorer[i];
        cout << antal << " x " << valorer[i] << " kr "<<endl;
        kronor -=antal*valorer[i];
      }
}



void ingangTillKap6Vaxelpengar()
{
    cout << "ingangTillKap6Vaxelpengar" << endl;
    skrivUtVaxelV2(947);
}
