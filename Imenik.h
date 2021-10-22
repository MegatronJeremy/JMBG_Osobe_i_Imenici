#ifndef JMBG_OSOBE_I_IMENICI_IMENIK_H
#define JMBG_OSOBE_I_IMENICI_IMENIK_H

#include "Osoba.h"

class Imenik {
private:
    struct Node {
        Osoba osoba;
        Node *next;
        Node(const Osoba &os, Node *p = nullptr) : osoba(os) { next = p; }
    };
    Node *head;
public:
    Imenik() { head = nullptr; }
    Imenik(const Imenik &im);
    Imenik(Imenik &&im) { head = im.head; im.head = nullptr; }

    ~Imenik();
    void add(const Osoba &osoba);
    void write() const;
};

#endif //JMBG_OSOBE_I_IMENICI_IMENIK_H
