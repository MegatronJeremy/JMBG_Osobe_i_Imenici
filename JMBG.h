#ifndef JMBG_OSOBE_I_IMENICI_JMBG_H
#define JMBG_OSOBE_I_IMENICI_JMBG_H

#include <cstring>
#include <iostream>

using namespace std;

class JMBG {
private:
    char jmbg[14];      // ne treba konstruktori drugi, destruktor jer ovo nije u din. memoriji
public:
    JMBG(const char j[]) { strcpy(jmbg, j); };
    const char *getJMBG() const { return jmbg; };
    friend bool bigger(const JMBG &j1, const JMBG &j2) { return strcmp(j1.jmbg, j2.jmbg) > 0; }
    void write() const { cout << jmbg; };
};


#endif //JMBG_OSOBE_I_IMENICI_JMBG_H
