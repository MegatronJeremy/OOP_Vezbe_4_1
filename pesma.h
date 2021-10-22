#ifndef OOP_VEZBE_4_1_PESMA_H
#define OOP_VEZBE_4_1_PESMA_H

#include "izvodjac.h"

#include <string>
using namespace std;

class Pesma {
private:
    string naziv;
    int min, sek;

    int kap;
    Izvodjac **izv;
    int br = 0;
public:
    Pesma(int m, int s, string naz, int k): min(m), sek(s), naziv(naz), kap(k) {
        izv = new Izvodjac *[kap];
    };
    Pesma(const Pesma &p) = delete; // Zabrana i kopiranja i premestanja
    int dohvMin() const {return min;}
    int dohvSek() const {return sek;}
    friend bool duza(const Pesma &p1, const Pesma &p2) {
        return p1.min * 60 + p1.sek > p2.min * 60 + p2.sek;
    }
    void dodaj(Izvodjac *i) { // Moramo preko pokazivaca zbog zabrane kopiranja (prenos po vrednosti - kopirajuci konstruktor)
        if (br < kap) izv[br++] = i;
    }
    void pisi() const;
/*          Ne treba??
    ~Pesma() {
        delete[] izv;
    }
*/
};


#endif //OOP_VEZBE_4_1_PESMA_H
