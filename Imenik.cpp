#include "Imenik.h"

Imenik::Imenik(const Imenik &im) {
    Node *tail;
    head = tail = nullptr;
    for (Node *curr = im.head; curr; curr = curr->next) {
        tail = (!head ? head : tail->next) = new Node(curr->osoba);
    }
}

void Imenik::add(const Osoba &osoba) {
    Node *curr = head, *elem = new Node(osoba), *prev = nullptr;
    while (curr && bigger(elem->osoba.getJMBG(), curr->osoba.getJMBG()))
        prev = curr, curr = curr->next;
    (!prev ? head : prev->next) = new Node(osoba, curr);
}

void Imenik::write() const {
    for (Node *curr = head; curr; curr = curr->next)
        curr->osoba.write(), cout << endl;
}

Imenik::~Imenik() {
    while (head) {
        Node *old = head;
        head = head->next;
        delete old;
    }
}