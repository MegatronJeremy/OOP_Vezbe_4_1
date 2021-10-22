#include "pesma.h"

void Pesma::pisi() const {
    cout << "P(" << naziv << " - " << min << ":" << sek << ")" << endl;
    cout << "Izvodjaci:" << endl;
    for (int i = 0; i < br; i++) {
        izv[i]->pisi(), cout << endl;
    }
    cout << endl;
}
