#include "plejlista.h"

int main() {
    Izvodjac iz1("Petar", Zanr::REP);
    Izvodjac iz2("Zika", Zanr::POP);
    Izvodjac iz3("Lazar", Zanr::ROK);

    Pesma p1(2, 45, "Enter Sandman", 1);
    Pesma p2(3, 5, "Powerslave", 2);

    p1.dodaj(&iz1);
    p2.dodaj(&iz2); p2.dodaj(&iz3);

    Plejlista pl;
    pl.dodaj(&p1);
    pl.dodaj(&p2);

    pl.pisi();
}
