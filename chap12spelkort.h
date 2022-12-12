#ifndef CHAP12SPELKORT_H
#define CHAP12SPELKORT_H
#include <string>
#include <ostream>
enum class Kortfärg
{
    hjärter,
    spader,
    ruter,
    klöver

};

struct Spelkort
{
    int valör;
    Kortfärg färg;

};

Spelkort spelkort(Kortfärg, int värde);

std::string strängFrånKortfärg(Kortfärg färg);
std::string strängFrånKortvalör(int kortvalör);
std::string strängFrånSpelkort(Spelkort kort);
#endif // CHAP12SPELKORT_H
