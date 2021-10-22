#ifndef JMBG_OSOBE_I_IMENICI_OSOBA_H
#define JMBG_OSOBE_I_IMENICI_OSOBA_H

#include "JMBG.h"

class Osoba {
private:
    string name;
    JMBG jmbg;
public:
    Osoba(string i, JMBG j) : jmbg(j), name(i) {};     // mora eksplicitno deklarisati jmbg jer nema default konstruktor
    string getName() const { return name; }
    JMBG getJMBG() const { return jmbg; }
    void write() const { cout << name << " " << "(", jmbg.write(), cout << ")";}
};

#endif //JMBG_OSOBE_I_IMENICI_OSOBA_H
