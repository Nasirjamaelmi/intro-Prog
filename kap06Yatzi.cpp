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
   int holder = 0;
   int varde = 0;
   int count = 0;
   int checkforanotherpar = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                varde = tarningsutfall * 2;
                count++;
                if(count == 2)
                {
                    holder = holder + varde;
                    checkforanotherpar++;
                }
                if (count > 2)
                {
                    holder = 0;
                }
             }
         }

         count = 0;
     }
     if(checkforanotherpar == 1)
      return 0;
     return holder;

}

int vardeSomTriss(const int yatzyhand[])
{
    int check = 0;
    int varde = 0;
    int count = 0;
    int par = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                varde = tarningsutfall;
                count++;
                if(count > 2)
                {
                   par = varde * 3;
                   check++;
                }
             }
         }
         count = 0;
     }
     if(check == 1)
        return par;
     return 0;
}

int vardeSomLitenstege(const int yatzyhand[])
{
    int varde = 0;
    int count = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                 count++;
                 if(count > 1)
                 {
                    return 0;
                 }
                 varde += tarningsutfall;
             }
         }
         count = 0;
     }
     return varde;
}

int vardeSomStorstege(const int yatzyhand[])
{
    int varde = 0;
    int count = 0;
    int holder = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                 varde = tarningsutfall;
                 count++;
                 if (yatzyhand[i] == 1 || count > 1)
                 {
                     return 0;
                 }
                  holder += varde;
             }

         }
         count = 0;

     }
     return holder;
}

int vardeSomKok(const int yatzyhand[])
{
    int check = 0;
    int count = 0;
    int par = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                count++;
                if(count == 2)
                {
                   check++;
                   par += tarningsutfall * 2;

                }
                if(count == 3)
                {
                   check++;
                   par += tarningsutfall;

                }

             }
         }
         count = 0;
     }
     if (check == 3)
     {
          return par;
     }
   return 0;
}

int vardeSomFyrtal(const int yatzyhand[])
{

    int check = 0;
    int varde = 0;
    int count = 0;
    int par = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                varde = tarningsutfall;
                count++;
                if(count > 3)
                {
                   par = varde * 4;
                   check++;
                }
             }
         }
         count = 0;
     }
     if(check == 1)
        return par;
     return 0;

}

int vardeSomYatzy(const int yatzyhand[])
{

    int check = 0;
    int varde = 0;
    int count = 0;
    int par = 0;
     for (int tarningsutfall=6; 0 < tarningsutfall; tarningsutfall--)
     {
         for(int i = 0; i < 5; i++)
         {
             if(yatzyhand[i] == tarningsutfall)
             {
                varde = tarningsutfall;
                count++;
                if(count > 4)
                {
                   par = 50;
                   check++;
                }
             }
         }
         count = 0;
     }
     if(check == 1)
        return par;
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
    int hand5[5]{3, 5, 4, 2, 6};
    int hand6[5]{3 ,3 ,3 ,2, 2};
    int hand7[5]{2 ,2 ,3 ,3, 3};

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
    && arOk( vardeSomLitenstege(hand4) == 15)
    && arOk( vardeSomStorstege(hand1)  == 0 )
    && arOk( vardeSomStorstege(hand2)  == 0 )
    && arOk( vardeSomStorstege(hand3)  == 0 )
    && arOk( vardeSomStorstege(hand4)  == 0 )
    && arOk( vardeSomStorstege(hand5)  == 20 );
    if (ok)
    cout << "testen lyckades" << endl;
    else cout << "testen MISSLYCKADES" << endl;
}




void ingangTillYatzi()
{
    testaYatzyvarden();



}
