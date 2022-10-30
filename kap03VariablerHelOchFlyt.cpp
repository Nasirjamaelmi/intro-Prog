#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <clocale>

using namespace std;
using namespace this_thread;
using namespace chrono;

void provaTilldelning()
{
    double x = 10;
    double y = 20;
    x = y;
    cout <<"x är " << x <<" och y är "<< y<< endl;
    y=100;
    cout << "x är "<< x << " och y är " << y <<endl;
}

void provaInlasningOchUtskrift()
{
    cout << "Ge ett decimaltal med många siffror efter decimalpunkten:";
    double tal = 0;
    cin >> tal;
    cout << "Du gav talet " << tal << endl;
    cout << "Med 2 värdesiffror: " << setprecision(2) << tal << endl;
    cout << "Med 2 decimaler: " <<fixed << setprecision(2) << tal <<endl;
    cout << "Du gav talet" << tal <<endl;

}

void beraknaBokkostnad()
{
    cout <<"Hur många kronor kostar boken ? : ";
    double bokPris = 0;
    cin >> bokPris ;
    cout <<"Hur många sidor har boken ? : ";
    double antalSidor = 0;
    cin >> antalSidor ;
    cout <<"Hur många procent av sidorna kommer du att läsa ? : ";
    double procentAttLäsa = 0;
    cin >> procentAttLäsa;
    procentAttLäsa = procentAttLäsa / 100;
    cout <<"Hur många minuter tar det att läsa och förstå en sida ? : ";
    double minuterPerSida = 0;
    cin >> minuterPerSida;
    cout <<"(Tystnad, beräkning pågår)"<<endl;
    double totaltAntalTimmar = ((antalSidor*procentAttLäsa) * minuterPerSida/60);
    double kostnadPerTimme = bokPris/totaltAntalTimmar;
    sleep_for(milliseconds(2000));
    cout <<"Du beräknas äga boken ca "<< setprecision(3)<<totaltAntalTimmar<< " timmar" << endl;
    cout <<"Boken beräknas därför kosta dig :"<<setprecision(3)<<kostnadPerTimme<<" kr/timme" <<endl;


}

void provaFlytttal()
{
    double nollKommaEtt = 0.1;
    double nollKommaTreA = 0.3;
    double nollKommaTreB = 3 *nollKommaEtt;

    cout << endl;
    cout << "Skriver ut 0.1 och 0.3 och 0.3:"<< endl;
    cout << nollKommaEtt << endl;
    cout << nollKommaTreA << endl;
    cout << nollKommaTreB << endl;

    cout << setprecision(17);
    cout << endl;
    cout <<"skriver ut 0.1 och 0.3 och 0.3 igen" <<endl;
    cout << nollKommaEtt << endl;
    cout << nollKommaTreA << endl;
    cout << nollKommaTreB << endl;

    double noll = 0;
    double tva = 2;

    cout << endl;
    cout << "Division med noll:" << endl;
    cout << noll/noll <<endl;
    cout << tva/noll <<endl;
    cout << -tva/noll << endl;

    cout << endl;
    cout << "en liten lek med oändligheten:" << endl;
    double oo = tva/noll;
    cout << tva * oo << endl;
    cout << oo + oo << endl;
    cout << oo - oo << endl;
    cout << -oo - oo << endl;

    cout << endl;
    cout << "Division med oändligheten:" <<endl;
    cout << tva/oo << endl;
    cout << -tva/00 << endl;
    cout << oo / oo <<endl;
    cout << -oo/ oo <<endl;
    cout <<endl;


}

void undersokFlyttalstyper()
{
    cout<< " En char upptar " << 8*sizeof( char ) << "bit. " <<endl;
    cout<< " En short upptar " << 8*sizeof( short ) << "bit. " <<endl;
    cout<< " En int upptar " << 8*sizeof( int) << "bit. " <<endl;
    cout<< " En long int uppptar " << 8*sizeof( long int ) << "bit. " <<endl;
    cout<< " En long long int upptar " << 8*sizeof( long long int) << "bit. " <<endl;
}

void provaHeltal()
{
    int storstaHeltalet = INT_MAX;
    int annuStorre = storstaHeltalet + 1;
    cout << endl;
    cout << "Stora heltal:" <<endl;
    cout << "StörstaHeltalet: " << storstaHeltalet << endl;
    cout << "ännuStörre:    " << annuStorre<<endl;
    int noll = 0;
    int tva = 2;
    int fem = 5;
    cout << endl;
    cout << "Några heltalsdivisioner:" << endl;
    cout << fem/tva << endl;
    cout << tva/fem << endl;
    cout << tva/fem + tva/fem + tva/fem << endl;
    cout << endl;
    cout << "Divison med noll:" << endl;
    cout << noll/noll << endl;
    cout << tva/noll << endl;

}

void skrivUtVaxel(int antalKronor)
{
    int kronorKvarAttBetala = antalKronor;
    int antal500 = kronorKvarAttBetala/500;
    kronorKvarAttBetala -= antal500*500;

    int antal200 = kronorKvarAttBetala/200;
    kronorKvarAttBetala -= antal200*200;

    int antal100 = kronorKvarAttBetala/100;
    kronorKvarAttBetala -= antal100*100;

    int antal20 = kronorKvarAttBetala/20;
     kronorKvarAttBetala -= antal20*20;

    int antal10 = kronorKvarAttBetala/10;
    kronorKvarAttBetala -= antal10*10;

    int antal5 = kronorKvarAttBetala/5;
    kronorKvarAttBetala -= antal5*5;

    int antal1 = kronorKvarAttBetala/1;

    cout << antalKronor << "  kronor är:"<<endl;
    cout << antal500 << "  x 500"<<endl;
    cout << antal200 << "  x 200"<<endl;
    cout << antal100 << "  x 100"<<endl;
    cout << antal20 << "  x 20"<<endl;
    cout << antal10 << "  x 10"<<endl;
    cout << antal5 << "  x 5"<<endl;
    cout << antal1 << "  x 1"<<endl;




}

void provaLitteraler()
{
    cout << endl << "testar beräkningar med literaler" <<endl;
    cout << 7/10*500.0 << endl;
    cout << 7/10.0*500 << endl;
    cout << 3/4 + 3/4 + 3/4<<  endl;
    cout << 3.0/4 + 3/4 <<endl;

}
void ingangTillKap03VariablerHelOchFlyt()
{
    cout <<"kap03 Variabler Hel Och Flyt" << endl;
    //provaTilldelning();
    //provaInlasningOchUtskrift();
    //beraknaBokkostnad();
    //provaFlytttal();
    //undersokFlyttalstyper();
    provaHeltal();
    skrivUtVaxel(947);
    //milf
}

