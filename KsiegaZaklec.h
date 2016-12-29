#pragma once
#include "Magia.h"
#include <iostream>
using namespace std;

class KsiegaZaklec {
	struct NODE {
		NODE *next;
		NODE *prev;

		Spell czar;
	};
	struct LISTA {
		NODE *head;
		NODE *tail;

		void dodaj(Spell);
		void wypisz();
	};

	LISTA *listaZaklec;
	static int liczbaZaklec;
public:
	KsiegaZaklec();
	~KsiegaZaklec();
	
	void dodajZaklecie(Spell);
	void otworzKsiegeZaklec();
};