#pragma once
#include <iostream>
#include "Auto.h"

class LKW: public Auto
{
private:
	int gesamtgewicht;
	string bezeichnung;
public:
	LKW();
	LKW(string, string, int, string);
	void load();        
	void unload();
	int getterGesamtgewicht();
	string getterBezeichnung();
	void setterGesamtgewicht(int);
	void setterBezeichnung(string);
};

