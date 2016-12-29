#include <iostream>
#include "ZbiorUmiejetnosci.h"

using namespace std;

ZbiorUmiejetnosci::ZbiorUmiejetnosci() : maxLiczbaUmiejetnosci(7) {
	u = new Umiejetnosc[maxLiczbaUmiejetnosci];
}

ZbiorUmiejetnosci::~ZbiorUmiejetnosci() {
	delete u;
}

void ZbiorUmiejetnosci::wypiszUmiejetnosci() {
	for (int i = 0; i < maxLiczbaUmiejetnosci; i++) {
		u[i].wypisz();
		cout << endl;
	}
}

void ZbiorUmiejetnosci::dodajUmiejetnosc(Umiejetnosc um, int i) {
	u[i] = um;
}