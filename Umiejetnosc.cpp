#include "Umiejetnosc.h"
#include <iostream>
#include <string>
#include <Windows.h>

HANDLE hConsoleU = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

Umiejetnosc::~Umiejetnosc() {

}

void Umiejetnosc::setNazwa(string s) {
	nazwa = s;
}

void Umiejetnosc::setOpis(string s) {
	opis = s;
}

void Umiejetnosc::setPoziom(PoziomUmiejetnosci p) {
	poziom = p;
}

void Umiejetnosc::setId(int i) {
	id = i;
}

string Umiejetnosc::getNazwa() {
	return nazwa;
}

string Umiejetnosc::getOpis() {
	return opis;
}

PoziomUmiejetnosci Umiejetnosc::getPoziom() {
	return poziom;
}

int Umiejetnosc::getId() {
	return id;
}

void Umiejetnosc::wypisz() {
	cout << getNazwa();
	cout << " - ";
	cout << getOpis();
	cout << endl;
	if (poziom == PODSTAWOWY) {
		SetConsoleTextAttribute(hConsoleU, 7);
		cout << "Poziom podstawowy" << endl;
		SetConsoleTextAttribute(hConsoleU, 7);
	}
	else if (poziom == ZAAWANSOWANY) {
		SetConsoleTextAttribute(hConsoleU, 6);
		cout << "Poziom zaawansowany" << endl;
		SetConsoleTextAttribute(hConsoleU, 7);
	}
	else if (poziom == MISTRZOWSKI) {
		SetConsoleTextAttribute(hConsoleU, 14);
		cout << "Poziom mistrzowski" << endl;
		SetConsoleTextAttribute(hConsoleU, 7);
	}
}

Atak::Atak() {
	setNazwa("Atak");
	setOpis("Zwieksza ilosc obrazen zadawanych przez oddzialy bohatera");
	setPoziom(PODSTAWOWY);
	setId(0);
}

Finanse::Finanse() {
	setNazwa("Finanse");
	setOpis("Bohater dostarcza krolestwu dziennie");
	setPoziom(PODSTAWOWY);
	setId(1);
}

Platnerstwo::Platnerstwo() {
	setNazwa("Platnerstwo");
	setOpis("Zmniejsza uszkodzenia zadawane oddzialom bohatera");
	setPoziom(PODSTAWOWY);
	setId(2);
}