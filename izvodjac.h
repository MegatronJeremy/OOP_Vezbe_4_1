#ifndef OOP_VEZBE_4_1_IZVODJAC_H
#define OOP_VEZBE_4_1_IZVODJAC_H

enum Zanr {POP, REP, ROK};

#include <string>
#include <iostream>
using namespace std;

class Izvodjac {
private:
    string naziv;
    Zanr zanr;
    static string strZanr[];
public:
    Izvodjac(string naz, Zanr z): naziv(naz), zanr(z) {};
    Zanr dohvZanr() const { return zanr; }
    void pisi() const;
};

#endif //OOP_VEZBE_4_1_IZVODJAC_H
