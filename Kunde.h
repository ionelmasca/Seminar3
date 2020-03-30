#pragma once
#include <iostream>
using namespace std; 

class Kunde
{
private:
	int id;
	string name;
public:
	Kunde();
	Kunde(string);
	int getterId();
	string getterName();
	void setterrId(int);
	void setterName(string);
};

