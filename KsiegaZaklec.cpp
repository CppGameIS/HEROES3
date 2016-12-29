#include "KsiegaZaklec.h"
#include <iostream>
using namespace std;

int KsiegaZaklec::liczbaZaklec = 0;

void KsiegaZaklec::LISTA::dodaj(Spell s) {
	NODE *tmp = new NODE;

	if ((head == NULL) && (tail == NULL)) {
		tmp->czar = s;
		tmp->next = tmp->prev = NULL;
		head = tail = tmp;
		liczbaZaklec++;
	}
	else {
		if (head == tail) {
			tmp->czar = s;
			head->next = tmp;
			tmp->prev = head;
			tmp->next = NULL;
			tail = tmp;
			liczbaZaklec++;
		}
		else {
			tmp->czar = s;
			tail->next = tmp;
			tmp->prev = tail;
			tmp->next = NULL;
			tail = tmp;
			liczbaZaklec++;
		}
	}
}

void KsiegaZaklec::LISTA::wypisz() {
	NODE *tmp = new NODE;

	if ((head == NULL) && (tail == NULL)) {
		cout << "Ksiega zaklec jest pusta!\n";
	}
	else {
		tmp = head;
		while (tmp->next != NULL) {
			tmp->czar.wyswietlZaklecie();
			tmp = tmp->next;
		}
		tmp->czar.wyswietlZaklecie();
	}
}

KsiegaZaklec::KsiegaZaklec() {
	listaZaklec = new LISTA;
	listaZaklec->head = listaZaklec->tail = NULL;
}

KsiegaZaklec::~KsiegaZaklec() {
	delete listaZaklec;
}

void KsiegaZaklec::dodajZaklecie(Spell s) {
	listaZaklec->dodaj(s);
}

void KsiegaZaklec::otworzKsiegeZaklec() {
	cout << "KSIEGA ZAKLEC: " << endl << endl;
	listaZaklec->wypisz();
}