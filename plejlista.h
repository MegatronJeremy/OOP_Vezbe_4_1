#ifndef OOP_VEZBE_4_1_PLEJLISTA_H
#define OOP_VEZBE_4_1_PLEJLISTA_H

#include "pesma.h"

class Plejlista {
private:
    int min = 0, sek = 0;

    struct Node {
        Pesma *pes;
        Node *next;

        Node(Pesma *p, Node *n = nullptr): pes(p), next(n) {};
    };
    Node *head = nullptr;

public:
    Plejlista() = default;      // Vracamo podrazumevani (jer smo uveli ove ostale)
    Plejlista(const Plejlista &);
    Plejlista(Plejlista &&);
    ~Plejlista();
    void dodaj(Pesma *p);
    void uredi();
    void pisi() const;
};


#endif //OOP_VEZBE_4_1_PLEJLISTA_H
