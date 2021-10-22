#include "izvodjac.h"

string Izvodjac::strZanr[] = {"pop", "rep", "rok"};

void Izvodjac::pisi() const {
    cout << naziv << "(" << strZanr[zanr] << ")";
}