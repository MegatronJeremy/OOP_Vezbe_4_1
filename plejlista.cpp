#include "plejlista.h"

Plejlista::Plejlista(const Plejlista &p) {
    min = p.min;
    sek = p.sek;
    Node *elem, *tail;
    for (Node *curr = p.head; curr; curr = curr->next) {
        elem = new Node(curr->pes);
        (!head ? head : tail->next) = elem;
        tail = elem;
    }
}

Plejlista::Plejlista(Plejlista &&p) {
    min = p.min;
    sek = p.sek;
    head = p.head;
    p.head = nullptr;
}

Plejlista::~Plejlista() {
    while (head) {
        Node *old = head;
        head = head->next;
        delete old;     // ne oslobadja memoriju pesme (receno tako u zadatku)
    }
}

void Plejlista::dodaj(Pesma *p) {
    head = new Node(p, head);
    min += p->dohvMin() + (sek + p->dohvSek()) / 60;
    sek = (sek + p->dohvSek()) % 60;
}

void Plejlista::uredi() {
    for (Node *t1 = head; t1 && t1->next; t1 = t1->next) {
        for (Node *t2 = t1->next; t2; t2 = t2->next) {
            if (duza(*t1->pes, *t2->pes)) swap(t1->pes, t2->pes);
        }
    }
}

void Plejlista::pisi() const {
    cout << "Lista - trajanje: " << min << ":" << sek << endl << endl;
    for (Node *curr = head; curr; curr = curr->next) {
        curr->pes->pisi();
    }
}