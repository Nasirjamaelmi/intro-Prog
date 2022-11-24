#include <iostream>
#include <cassert>

using namespace std;


double MOMSFAKTOR = 1.25;

void testarMinaKunskaper()
{
    assert( 2.5 + 3 == 5.5);
    assert( 5/2 ==  2);
    assert( 1.0/2 * 10 == 5 );
    assert( 1/2 * 10 == 0 );
    assert( (3 | 16) == 19);
    assert( (3 | 15) == 1);
    assert( (3 & 16) == 0 );
    assert( (3 & 15) == 1 );
    assert( 3 << 2 == 12 );
}
bool ungefarLika(double, double);


void automattestaUngefarLika()
{
    assert( ungefarLika( 2, 2.000005 ) );
    assert( ungefarLika( 2-0.000005, 2 ) );
    assert( !ungefarLika(2, 3));
    assert( !ungefarLika(3,2));
}


void ingangTillsju()
{
   // testarMinaKunskaper();
   //automattestaUngefarLika();



}
