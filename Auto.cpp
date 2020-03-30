#include "Auto.h"

int u = 1;

Auto::Auto()
{

}

Auto::Auto(string b, string c)
{
	id = u++;
	marke = b;
	modell = c;
}

int Auto::getterId()
{
	return id;
}

string Auto::getterMarke()
{
	return marke;
}

string Auto::getterModell()
{
	return modell;
}

void Auto::setterId(int a)
{
	id = a;
}

void Auto::setterMarke(string a)
{
	marke = a;
}

void Auto::setterModell(string a)
{
	modell = a;
}