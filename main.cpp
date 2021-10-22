#include <iostream>
#include "Imenik.h"

using namespace std;

int main() {
    Imenik im;
    im.add(Osoba("Marko", JMBG("1205986110022")));
    im.add(Osoba("Vladana", JMBG("5405996710821")));
    im.add(Osoba("Jelisaveta", JMBG("3245983494332")));
    im.add(Osoba("Miljan", JMBG("6205986110022")));
    im.add(Osoba("Milan", JMBG("1204986110032")));
    im.add(Osoba("Vuk", JMBG("7205986142022")));
    im.add(Osoba("Zoran", JMBG("9204936210022")));
    im.write();
    return 0;
}
