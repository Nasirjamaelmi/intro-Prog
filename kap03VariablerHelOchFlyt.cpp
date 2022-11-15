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
    cout <<"Du beräknas äga boken ca " << setprecision(3) << totaltAntalTimmar << " timmar" << endl;
    cout <<"Boken beräknas därför kosta dig :"  <<setprecision(3) <<kostnadPerTimme<< " kr/timme" <<endl;


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
    cout << -58/10 <<endl;

}

void provaHexUtskrift()
{
    cout << "Prova hex-utskrift" <<endl;
    int x = 256+10;

    cout << "1)" <<x <<endl;
    cout << "2)" <<hex << x <<endl;
    cout << "3)" <<x <<endl;
    cout << "4)" <<setw(8) <<x<<endl;
    cout << "5)" <<setw(8) << setfill('0') << x << endl;
    cout << "6)" <<"x=" << x << ", x=" << x << endl << endl;
    cout << dec << setfill(' ');

}

void provaRest()
{
    cout << "Provar restberäkningar." << endl;
    cout << 13 % 10 << endl; //3
    cout << 57 % 10 << endl; //7
    cout << 39 % 20 << endl; //19
    cout << -57 % 10 << endl;//-7
    cout << endl;
}

void provaHexLitteraler()
{
    cout <<"Provar hexlitteraler." <<endl;
    unsigned int x = 0xa7;
    cout <<"x = " << x << endl;

    // Hur stor plats tar en int?
    int antalByte = sizeof(unsigned int);
    int antalHex = 2*antalByte;
    int antalBit = 8*antalByte;
    cout << "En (unsinged int upptar " << antalByte
    << "bytes (dvs " << antalHex << "hex-siffror, eller "
    << antalBit << "bit)" << endl;

}

void provaBitvisLogik()
{
    cout <<"Prova bitvis logik" << endl;

    unsigned int x = 0x123456;

    unsigned int mask = 0xF0;

    int antalSiffror = 2*sizeof(int);
    cout << hex << setfill(' ');

    cout << "1)" << setw(antalSiffror) << x <<endl;
    cout << "2)" << setw(antalSiffror) << mask <<endl;
    cout << "3)" << setw(antalSiffror) << ~mask <<endl;
    cout << "4)" << setw(antalSiffror) << (x | mask) <<endl;
    cout << "5)" << setw(antalSiffror) << (x & ~mask) <<endl;
    cout << "6)" << setw(antalSiffror) << (x ^ mask) <<endl;

    cout << endl;
    cout << dec << setfill(' ');

}

void testaSkiftOperator()
{
    cout << (7 << 2) << endl;
    cout << (73 << 22) << endl;
    cout << (1 << 1) << endl;
    cout << (4 << 4) << endl;
    cout<< "Flyttar 4 till 8 sen 16 sen 32 och sist 64"<<endl;
}

unsigned int xMedEttstalldBit(unsigned int x, int bitnummer)
    {
      unsigned int bit1 = 1 << bitnummer;
      unsigned int resultat = x | bit1;
      return resultat;
}

unsigned int xMedNollstalldBit(unsigned int x, int bitnummer)
{
    unsigned int bit0 = 1 << bitnummer;
    unsigned int resultat = x & ~bit0;

    return resultat;
}

void testaBitFunktionerna(){
cout << "testar bitfunktionerna." << endl;
cout << "Bör bli 1: " << xMedEttstalldBit(0, 0) << endl;
cout << "Bör bli 2: " << xMedEttstalldBit(0, 0) << endl;
cout << "Bör bli 4: " << xMedEttstalldBit(0, 2) << endl;
cout << "Bör bli 1024: " << xMedEttstalldBit(0, 10) << endl;
cout << "Bör bli 1025: " << xMedEttstalldBit(1024, 0) << endl;
cout << "Bör bli 1025: " << xMedEttstalldBit(1025, 0) << endl;
cout << "Bör bli 1: " << xMedNollstalldBit(1025, 10) << endl;
cout << "Bör bli 1: " << xMedNollstalldBit(1, 10) << endl;
cout << endl;
}

unsigned int farginfoFranRGBO(unsigned int r, unsigned int g, unsigned int b, unsigned int opacity)
{
    return r;
}
unsigned int blaFranFarginfo(unsigned int farginfo)
{
    unsigned int högerskiftad = farginfo >> 8;
    unsigned int blå = högerskiftad & 0xff;
    return blå;
}
unsigned int gronFranFarginfo(unsigned int farginfo)
{
    unsigned int högerskiftad = farginfo >> 16;
    unsigned int grön = högerskiftad & 0xff;
    return grön;
}
unsigned int rodFranFarginfo(unsigned int farginfo)
{
    unsigned int högerskiftad = farginfo >> 24;
    unsigned int röd = högerskiftad & 0xff;
    return röd;
}
unsigned int opacityFranFarginfo(unsigned int farginfo)
{
    unsigned int högerskiftad = farginfo << 8;
    unsigned int opacity = högerskiftad & 0xff;
    return opacity;
}
void testaFargFunktionerna(){
cout << "testar färgfunktionerna." << endl;
unsigned int farg = farginfoFranRGBO(10,20,30,40);
cout << farg <<endl;
/*cout << rodFranFarginfo( farg ) << endl;
cout << gronFranFarginfo( farg ) << endl;
cout << blaFranFarginfo( farg ) << endl;
cout << opacityFranFarginfo( farg ) << endl;
*/cout << endl;
}


void ingangTillKap03VariablerHelOchFlyt()
{

    cout <<"kap03 Variabler Hel Och Flyt" << endl;
    //provaTilldelning();
    //provaInlasningOchUtskrift();
    //beraknaBokkostnad();
    //provaFlytttal();
    //undersokFlyttalstyper();
    //provaHeltal();
    //skrivUtVaxel(947);
    //provaLitteraler();
    //provaHexUtskrift();
    //provaRest();
    //provaHexLitteraler();
    //provaBitvisLogik();
    //testaSkiftOperator();
    testaBitFunktionerna();
    //testaFargFunktionerna();

}

