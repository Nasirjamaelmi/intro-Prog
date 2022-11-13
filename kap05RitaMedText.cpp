#include <iostream>
#include <iomanip>

using namespace std;

void skrivMultiplikationsmatris()
{
    cout << "Multiplikationstabell" << endl;
    for(int rad=1; rad <=10; rad++)
    {
        for (int kolumn = 1; kolumn <= 10; kolumn++)
        {

            cout<<setw(5)<<rad*kolumn;

        }
         cout <<endl;

    }





}

void fyllRektangel(int hojd, int bredd)
{
    for (int i = 0; i < hojd; ++i)
    {
         cout<<"#";

         for (int x = 0; x < bredd; ++x)
         {
             cout<<"#";

         }
          cout <<endl;

    }

}

void ritaRektangel(int hojd, int bredd)
{
    for (int h=0 ; h<=hojd ; h++){
           for (int b=0 ; b<=bredd ; b++){
               if((b==0||b==bredd) || (h==0 || h == hojd))
                   cout << "# ";
               else
                   cout << "  ";
           }
           cout << endl;
     }
}

void fyllTriangel(int hojd)
{

    cout<<"Fylld triangel." <<endl;
    for (int i = 0; i <= hojd; ++i)
    {
        for(int x=0; x <= i; x++)
        {
            cout<<"#";
        }
        cout<<endl;

    }


}

void fyllcirkel(int radie)
{

    cout<< "fylld cirkel" << endl;

    int radie2= radie * radie;
    for (int i = -radie; i <= radie; ++i)
    {
        for(int x = -radie; x <= radie; x++ )
        {
            if((i*i+x*x) < radie2)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }

        }
        cout <<endl;
    }

}
void ingangTillKap05RitaMedText()
{
    cout <<"ingång till rita med text" << endl;
    cout << endl;
    skrivMultiplikationsmatris();
    fyllRektangel(4,20);
    cout<< endl;
    ritaRektangel(4,20);
    fyllTriangel(5);
    cout<<endl;
    fyllcirkel(5);
    cout<<endl;

}
