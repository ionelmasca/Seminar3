#include "Kunde.h"

int t = 1;

Kunde::Kunde()
{

}

Kunde::Kunde(string b)
{
	id = t++;
	name = b;
}


int Kunde::getterId()
{
	return id;
}

string Kunde::getterName()
{
	return name;
}

void Kunde::setterrId(int a)
{
	id = a;
}

void Kunde::setterName(string a)
{
	name = a;
}

