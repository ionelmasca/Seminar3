#include "PKW.h"

PKW::PKW()
{

}

PKW::PKW( string b, string c, string d):Auto(b, c)
{
	sonderausstattungen = d;
}

string PKW::gettterSonderausstattungen()
{
	return sonderausstattungen;
}