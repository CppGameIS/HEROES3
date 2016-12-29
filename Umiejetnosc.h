#pragma once
#include <iostream>

using namespace std;

enum PoziomUmiejetnosci {
	PODSTAWOWY, ZAAWANSOWANY, MISTRZOWSKI
};


class Umiejetnosc {
protected:
	int id;
	string nazwa;
	string opis;
	PoziomUmiejetnosci poziom;

public:
	virtual ~Umiejetnosc();

	virtual void setNazwa(string);
	virtual void setOpis(string);
	virtual void setPoziom(PoziomUmiejetnosci);
	virtual void setId(int);

	virtual string getNazwa();
	virtual string getOpis();
	virtual PoziomUmiejetnosci getPoziom();
	virtual int getId();

	virtual void wypisz();
};

class Atak : public Umiejetnosc {
public:
	Atak();
};

class Finanse : public Umiejetnosc {
public:
	Finanse();
};

class Platnerstwo : public Umiejetnosc {
public:
	Platnerstwo();
};