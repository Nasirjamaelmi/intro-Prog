#include <iostream>
#include <string>

using namespace std;


void testCinString()
{
    cout<<"testaCinString" <<endl <<endl;
    while(true)
    {
        cout<<"Skriv en textsträng:";
        string strang = "";
        cin >> strang;
        if(strang == "exit")
            break;
        cout <<"Du skrev: "<<strang << endl;
    }

}

void testaCinInt()
{
    cout<<"testaCinInt"<<endl <<endl;
    while (true)
    {
        cout<<"Skriv ett heltal:";
        int heltal = 0;
        cin >> heltal;
        cout << "Du skrev: " <<heltal<<endl;
    }
}

void testaCinIntMedFelHantering()
{
    cout<<"testaCinInt"<<endl <<endl;
    while (true)
    {
        cout<<"Skriv ett heltal:";
        int heltal = 0;
        cin >> heltal;
        if(!cin.fail())
        {
             cout << "De skrev: " <<heltal<<endl;
        }
        else
        {
            cout<<"(misslyckade läsning)"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');

        }

    }
}

void ingangTillKap09ExperimentMedCin()
{
    cout << "ingangTillKap09ExperimentMedCin." << endl;
    //testCinString();
    //testaCinInt();
   // testaCinIntMedFelHantering();

}

