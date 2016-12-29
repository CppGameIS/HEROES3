#include "Creature.h"

Pikeman::Pikeman()
{
	name = "Pikeman";
	attack = 4;
	defense = 5;
	damage[0] = 1;
	damage[1] = 3;
	strength = 10;
	speed = 4;
	increase[0] = 14;
	increase[1] = 28;
	increase[2] = 42;
	expense = 60;
	opis = "Abilities: \n";
}

void Pikeman::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0]<<"-"<<damage[1]<<endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout <<  opis << endl;
}

int Pikeman::deal_dmg()
{	
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Halberdier::Halberdier()
{
	name = "Halberdier";
	attack = 6;
	defense = 5;
	damage[0] = 2;
	damage[1] = 3;
	strength = 10;
	speed = 5;
	increase[0] = 14;
	increase[1] = 28;
	increase[2] = 42;
	expense = 75;
	opis = "Abilities: \n";
}

void Halberdier::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Halberdier::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}


Archer::Archer()
{
	name = "Archer";
	attack = 6;
	defense = 3;
	damage[0] = 2;
	damage[1] = 3;
	strength = 10;
	speed = 4;
	increase[0] = 9;
	increase[1] = 18;
	increase[2] = 27;
	expense = 100;
	opis = "Abilities: \n";
}

void Archer::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Archer::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Crossbowman::Crossbowman()
{
	name = "Crossbowman";
	attack = 6;
	defense = 3;
	damage[0] = 2;
	damage[1] = 3;
	strength = 10;
	speed = 6;
	increase[0] = 9;
	increase[1] = 18;
	increase[2] = 27;
	expense = 150;
	opis = "Abilities: \nStrzela dwukrotnie";
}

void Crossbowman::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Crossbowman::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Gryffin::Gryffin()
{
	name = "Gryffin";
	attack = 8;
	defense = 8;
	damage[0] = 3;
	damage[1] = 6;
	strength = 25;
	speed = 6;
	increase[0] = 7;
	increase[1] = 14;
	increase[2] = 21;
	expense = 200;
	opis = "Abilities: \nZawsze kontratakuje";
}

void Gryffin::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Gryffin::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Royal_gryffin::Royal_gryffin()
{
	name = "Royal gryffin";
	attack = 9;
	defense = 9;
	damage[0] = 3;
	damage[1] = 6;
	strength = 25;
	speed = 9;
	increase[0] = 7;
	increase[1] = 14;
	increase[2] = 21;
	expense = 240;
	opis = "Abilities: \nZawsze kontratakuje";
}

void Royal_gryffin::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Royal_gryffin::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}


Swordfish::Swordfish()
{
	name = "Swordfish";
	attack = 10;
	defense = 12;
	damage[0] = 6;
	damage[1] = 9;
	strength = 35;
	speed = 5;
	increase[0] = 4;
	increase[1] = 8;
	increase[2] = 12;
	expense = 300;
	opis = "Abilities: \n";
}

void Swordfish::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Swordfish::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Crusader::Crusader()
{
	name = "Crusader";
	attack = 12;
	defense = 12;
	damage[0] = 7;
	damage[1] = 10;
	strength = 35;
	speed = 6;
	increase[0] = 4;
	increase[1] = 8;
	increase[2] = 12;
	expense = 400;
	opis = "Abilities: \nAtakuje dwukrotnie";
}

void Crusader::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Crusader::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Monk::Monk()
{
	name = "Monk";
	attack = 12;
	defense = 7;
	damage[0] = 10;
	damage[1] = 12;
	strength = 30;
	speed = 5;
	increase[0] = 3;
	increase[1] = 6;
	increase[2] = 9;
	expense = 400;
	opis = "Abilities: \n";
}

void Monk::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Monk::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Priest::Priest()
{
	name = "Priest";
	attack = 12;
	defense = 7;
	damage[0] = 10;
	damage[1] = 12;
	strength = 30;
	speed = 7;
	increase[0] = 3;
	increase[1] = 6;
	increase[2] = 9;
	expense = 450;
	opis = "Abilities: \nBrak ograniczen w walce wrêcz";
}

void Priest::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Priest::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Cavalryman::Cavalryman()
{
	name = "Cavalryman";
	attack = 15;
	defense = 15;
	damage[0] = 15;
	damage[1] = 25;
	strength = 100;
	speed = 7;
	increase[0] = 2;
	increase[1] = 4;
	increase[2] = 6;
	expense = 1000;
	opis = "Abilities: \nPremia podczas walki";
}

void Cavalryman::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Cavalryman::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Champion::Champion()
{
	name = "Champion";
	attack = 16;
	defense = 16;
	damage[0] = 20;
	damage[1] = 25;
	strength = 100;
	speed = 9;
	increase[0] = 2;
	increase[1] = 4;
	increase[2] = 6;
	expense = 1200;
	opis = "Abilities: \nPremia podczas walki";
}

void Champion::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Champion::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Angel::Angel()
{
	name = "Angel";
	attack = 20;
	defense = 20;
	damage[0] = 50;
	damage[1] = 50;
	strength = 200;
	speed = 12;
	increase[0] = 1;
	increase[1] = 2;
	increase[2] = 3;
	expense = 3000;
	opis = "Abilities: \nNienawidzi diab³ów";
}

void Angel::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Angel::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}

Archangel::Archangel()
{
	name = "Archangel";
	attack = 30;
	defense = 30;
	damage[0] = 50;
	damage[1] = 50;
	strength = 250;
	speed = 18;
	increase[0] = 1;
	increase[1] = 2;
	increase[2] = 3;
	expense = 5000;
	opis = "Abilities: \nNienawidzi diab³ów \nwskrzesza";
}

void Archangel::show()
{
	cout << "********" << name << "********" << endl;
	cout << "attac:		" << attack << endl;
	cout << "defense:	" << defense << endl;
	cout << "damage:		" << damage[0] << "-" << damage[1] << endl;
	cout << "strength:	" << strength << endl;
	cout << "speed:		" << speed << endl;
	cout << "increase:	" << increase[0] << "/" << increase[1] << "/" << increase[2] << endl;
	cout << "expense:	" << expense << endl;
	cout << opis << endl;
}

int Archangel::deal_dmg()
{
	int dmg = attack + (rand() % (damage[1] - damage[0] + 1) + damage[1]);
	return dmg;
}
