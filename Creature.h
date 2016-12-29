#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
using namespace std;

class Creature {
protected:
	string name;
	int	attack;	//atak
	int	defense;	//obrona	
	int damage[2];	//obra¿enia
	int strength;	//wytrzymaloœæ
	int speed;	//szybkoœæ
	int increase[3];	//przyrost
	int expense;	//koszt
	string opis;
public:
	virtual void show() = 0;
	virtual int deal_dmg() = 0;
};
//**************************************************************ZAMEK*****************************************\\
//////////////PIKINIER////////////
class Pikeman : public Creature {

public:
	Pikeman();
	void show();
	int deal_dmg();
};

class Halberdier : public Creature {

public:
	Halberdier();
	void show();
	int deal_dmg();
};

///////////£UCZNIK////////////
class Archer : public Creature {

public:
	Archer();
	void show(); 
	int deal_dmg();
};

class Crossbowman : public Creature {

public:
	Crossbowman();
	void show();
	int deal_dmg();
};

////////////GRYF/////////////
class Gryffin : public Creature {

public:
	Gryffin();
	void show();
	int deal_dmg();
	//void counterattack();
};

class Royal_gryffin : public Creature {

public:
	Royal_gryffin();
	void show();
	int deal_dmg();
	//void counterattack();
};

///////////////ZBROJNY/////////
class Swordfish : public Creature {

public:
	Swordfish();
	void show();
	int deal_dmg();
};

class Crusader : public Creature {

public:
	Crusader();
	void show();
	int deal_dmg();
};

////////////MNICH///////////
class Monk : public Creature {

public:
	Monk();
	void show();
	int deal_dmg();
};

class Priest : public Creature {

public:
	Priest();
	void show();
	int deal_dmg();
};

///////////KAWALERZYSTA////////////
class Cavalryman : public Creature {

public:
	Cavalryman();
	void show();
	int deal_dmg();
};

class Champion : public Creature {

public:
	Champion();
	void show();
	int deal_dmg();
};

///////////ANIO£////////////
class Angel : public Creature {

public:
	Angel();
	void show();
	int deal_dmg();
};

class Archangel : public Creature {

public:
	Archangel();
	void show();
	int deal_dmg();
	//void wskrzesz();
};


//**************************************************************INFERNO*****************************************\\