#pragma once
#include <iostream>
using namespace std;

class Auto
{
protected:
	int id;
	string marke;
	string modell;
public:
	Auto();
	Auto(string, string);
	int getterId();
	string getterMarke();
	string getterModell();
	void setterId(int);
	void setterMarke(string);
	void setterModell(string);
};

