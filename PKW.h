#pragma once
#include "Auto.h"

class PKW:public Auto
{
private:
	string sonderausstattungen;
public:
	PKW();
	PKW(string, string, string);
	string gettterSonderausstattungen();
};

