#pragma once
#include "Umiejetnosc.h"
#include <iostream>

using namespace std;

class ZbiorUmiejetnosci {
protected:
	Umiejetnosc * u;
	const int maxLiczbaUmiejetnosci;

public:
	ZbiorUmiejetnosci();
	~ZbiorUmiejetnosci();

	void dodajUmiejetnosc(Umiejetnosc, int); // int 0-7
	void wypiszUmiejetnosci();
};