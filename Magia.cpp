#include <iostream>
using namespace std;
#include "Magia.h"
#include <Windows.h>
#include <string>

HANDLE hConsoleM = GetStdHandle(STD_OUTPUT_HANDLE);

Spell::~Spell() {
}

int Spell::getPoziomZaklecia() {
	return poziomZaklecia;
}
int Spell::getKosztMany() {
	return kosztMany;
}
rodzajMagii Spell::getRodzajMagii() {
	return rodzaj;
}
string Spell::getNazwa() {
	return nazwa;
}
string Spell::getOpis() {
	return opis;
}


void Spell::setPoziomZaklecia(int p) {
	this->poziomZaklecia = p;
}
void Spell::setRodzajMagii(rodzajMagii r) {
	this->rodzaj = r;
}
void Spell::setNazwa(string s) {
	this->nazwa = s;
}
void Spell::setOpis(string s) {
	this->opis = s;
}
void Spell::setKosztMany(int k) {
	this->kosztMany = k;
}

void Spell::wyswietlZaklecie() {
	cout << getNazwa();
	cout << " - ";
	cout << getOpis();
	cout << endl;
	cout << "Koszt many: " << getKosztMany() << ", poz. " << getPoziomZaklecia() << endl;
	if (rodzaj == POWIETRZE) {
		SetConsoleTextAttribute(hConsoleM, 8);
		cout << "Air magic spell" << endl;
		SetConsoleTextAttribute(hConsoleM, 7);
	}
	else if (rodzaj == WODA) {
		SetConsoleTextAttribute(hConsoleM, 3);
		cout << "Water magic spell" << endl;
		SetConsoleTextAttribute(hConsoleM, 7);
	}
	else if (rodzaj == ZIEMIA) {
		SetConsoleTextAttribute(hConsoleM, 6);
		cout << "Earth magic spell" << endl;
		SetConsoleTextAttribute(hConsoleM, 7);
	}
	else if (rodzaj == OGIEN) {
		SetConsoleTextAttribute(hConsoleM, 4);
		cout << "Fire magic spell" << endl;
		SetConsoleTextAttribute(hConsoleM, 7);
	}
	cout << endl << endl;
}
//===================================== POWIETRZE ==================================
Protection_from_Air::Protection_from_Air() {
	this->setNazwa("Protection from air");
	this->setOpis("Ally army get protecion from air magic");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(POWIETRZE);
}

Magic_Arrow::Magic_Arrow() {
	this->setNazwa("Magic arrow");
	this->setOpis("Increases magic damage to enemy army");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(POWIETRZE);
}

//===================================== WODA ==================================
Protection_from_Water::Protection_from_Water() {
	this->setNazwa("Protection from water");
	this->setOpis("Ally army get protecion from water magic");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(WODA);
}

Cure::Cure() {
	this->setNazwa("Cure");
	this->setOpis("Restores health points");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(WODA);
}
//===================================== OGIEN ==================================
Protection_from_Fire::Protection_from_Fire() {
	this->setNazwa("Protection from fire");
	this->setOpis("Ally army get protecion from fire magic");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(OGIEN);
}

Bloodlust::Bloodlust() {
	this->setNazwa("Bloodlust");
	this->setOpis("Increases attack an ally army");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(OGIEN);
}
//===================================== ZIEMIA ==================================
Protection_from_Earth::Protection_from_Earth() {
	this->setNazwa("Protection from earth");
	this->setOpis("Ally army get protecion from earth magic");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(ZIEMIA);
}

Shield::Shield() {
	this->setNazwa("Shield");
	this->setOpis("Increases defense an ally army");
	this->setKosztMany(5);
	this->setPoziomZaklecia(1);
	this->setRodzajMagii(ZIEMIA);
}