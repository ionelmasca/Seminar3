#pragma once
#include "Kunde.h"
#include "Auto.h"
#include <vector>

class Rental
{
private:
	vector<Kunde>v;
	vector<Auto>l;
public:
	Rental();
	Rental(vector<Kunde>, vector<Auto>);
	void add_client(Kunde);
	void delete_client(Kunde);
    void update_client(Kunde, string);
	void add_auto(Auto);
	void delete_auto(Auto);
	void display_clients();
	void display_cars();
	string getterLastClient();
	string getterLastCar();
};

