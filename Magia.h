#pragma once
#include <istream>
using namespace std;

enum rodzajMagii {
	POWIETRZE, ZIEMIA, OGIEN, WODA
};

class Spell {
protected:
	unsigned int ID;
	int poziomZaklecia;								// zaklecia dzielimy na poziomy 1-5
	int kosztMany;									// koszt many za zaklecie
	rodzajMagii rodzaj;								// rodzaj magii
	string nazwa;									// nazwa zaklecia
	string opis;									// opis zaklecia
public:
	virtual ~Spell();

	virtual int getPoziomZaklecia();
	virtual int getKosztMany();
	virtual rodzajMagii getRodzajMagii();
	virtual string getNazwa();
	virtual string getOpis();

	virtual void setPoziomZaklecia(int);
	virtual void setKosztMany(int);
	virtual void setRodzajMagii(rodzajMagii);
	virtual void setNazwa(string);
	virtual void setOpis(string);

	virtual void wyswietlZaklecie();
};

// -------------------------------------------------- POWIETRZE -----------------------------------------------------------------------

class Protection_from_Air : public Spell {
public:
	Protection_from_Air();
};

class Magic_Arrow : public Spell {
public:
	Magic_Arrow();
};

// -------------------------------------------------- WODA -----------------------------------------------------------------------

class Protection_from_Water : public Spell {
public:
	Protection_from_Water();
};

class Cure : public Spell {
public:
	Cure();
};

// -------------------------------------------------- OGIEN -----------------------------------------------------------------------

class Protection_from_Fire : public Spell {
public:
	Protection_from_Fire();
};

class Bloodlust : public Spell {
public:
	Bloodlust();
};

// -------------------------------------------------- ZIEMIA -----------------------------------------------------------------------

class Protection_from_Earth : public Spell {
public:
	Protection_from_Earth();
};

class Shield : public Spell {
public:
	Shield();
};