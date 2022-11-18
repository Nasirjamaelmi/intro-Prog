#include <iostream>

using namespace std;

int vardeSomPar(const int yatzyhand[])
{
   int varde = 0;
   int count = 0;
    for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
    {
        for(int i = 0; i < 5; i++)
        {
            if(yatzyhand[i] == tarningsutfall)
            {
               varde = tarningsutfall;
               count++;
               if(count > 1)
               {
                   return varde * 2;
               }
            }
        }
        count = 0;
    }
    return 0;
}

int vardeSomTvapar(const int yatzyhand[])
{
    int varde = 0;
    int count = 0;
    int par = 0;
    int holder = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                varde = tarningsutfall;
                count++;
                if(count > 1)
                {
                    par = varde * 2;
                }

             }

         }
             count=0;
             if(holder == 0)
             {
                holder = par;
             }

     }
    return holder + par;

}

int vardeSomTriss(const int yatzyhand[])
{
    return 0;
}
int vardeSomLitenstege(const int yatzyhand[])
{
    return 0;
}
bool arOk(bool testresultat)
{
    if (!testresultat)
    cout << "BUG BUG Programmet innehåller en BUG " << endl;
    else cout << "ok" << endl;
    return testresultat;
}

void testaYatzyvarden()
{
    cout << "testar Yatzyvärden" << endl;
    int hand1[5]{3, 6, 4, 2, 4};
    int hand2[5]{3, 2, 4, 2, 3};
    int hand3[5]{3, 4, 4, 2, 4};
    int hand4[5]{3, 5, 4, 2, 1};
    bool ok = arOk( vardeSomPar(hand1) == 8 )
    && arOk( vardeSomPar(hand2) == 6 )
    && arOk( vardeSomPar(hand3) == 8 )
    && arOk( vardeSomPar(hand4) == 0 )
    && arOk( vardeSomTvapar(hand1) == 0 )
    && arOk( vardeSomTvapar(hand2) == 10 )
    && arOk( vardeSomTvapar(hand3) == 0 )
    && arOk( vardeSomTvapar(hand4) == 0 )
    && arOk( vardeSomTriss(hand1) == 0 )
    && arOk( vardeSomTriss(hand2) == 0 )
    && arOk( vardeSomTriss(hand3) == 12 )
    && arOk( vardeSomTriss(hand4) == 0 )
    && arOk( vardeSomLitenstege(hand1) == 0 )
    && arOk( vardeSomLitenstege(hand2) == 0 )
    && arOk( vardeSomLitenstege(hand3) == 0 )
    && arOk( vardeSomLitenstege(hand4) == 15 );
    if (ok)
    cout << "testen lyckades" << endl;
    else cout << "testen MISSLYCKADES" << endl;
}
void ingangTillYatzi()
{
    //testaYatzyvarden();
    int hand1[5]{5, 6, 4, 6, 5};
    cout<<vardeSomTvapar(hand1)<<endl;
}
