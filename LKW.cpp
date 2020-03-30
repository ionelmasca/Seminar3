#include "LKW.h"

LKW::LKW()
{

}

LKW::LKW(string b, string c, int d, string e):Auto(b, c)
{
	gesamtgewicht = d;
	bezeichnung = e;
}

void LKW::load()
{
	gesamtgewicht = gesamtgewicht + 10;
}

void LKW::unload()
{
	gesamtgewicht = gesamtgewicht - 10;
}

int LKW::getterGesamtgewicht()
{
	return gesamtgewicht;
}

string LKW::getterBezeichnung()
{
	return bezeichnung;
}

void LKW::setterGesamtgewicht(int a)
{
	gesamtgewicht = a;
}

void LKW::setterBezeichnung(string a)
{
	bezeichnung = a;
}