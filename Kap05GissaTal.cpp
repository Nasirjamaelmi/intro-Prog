#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>


using namespace std;
using namespace chrono;
using namespace this_thread;


int nyttTal(int n)
{
    srand(time(0));
    return rand() % n;
}
int anvandarensGissning()
{
    int tal = 0;
    cout<< "din gisssning:";
    cin >> tal;
    return tal;
}

void utforEnspelomgang()
{
    cout << "Utför en spelomgång" << endl;
    const int n = 100;
    const int datornsTal = nyttTal(n);
    int antalUtfardaGissningar = 0;
    cout << "Datorn tänker på ett tal mellan noll och " <<n <<".Gissa vilket!"<<endl;
    int gissning = anvandarensGissning();
    while (gissning!= datornsTal)
    {
         if(gissning > datornsTal)
         {

             cout<<"För stort!" <<endl;

         }
         else if(gissning < datornsTal)
         {

             cout<<"För litet!" <<endl;

         }
         antalUtfardaGissningar++;
         gissning = anvandarensGissning();



    }

        sleep_for(milliseconds(1000));
        cout<<"Vilken tur!"<<endl;
        cout<<"Du fick rätt på"<<antalUtfardaGissningar<<":e försöket!"<<endl;



}

void ingangtillkap5Gissatal()
{
    utforEnspelomgang();
}
