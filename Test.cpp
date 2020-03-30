#include "Test.h"
#include "Rental.h"
#include "Kunde.h"
#include "Auto.h"
#include<assert.h>

void testall()
{

	Kunde c1("Client1");
	Kunde c2("Client2");
	vector<Kunde>v = { c1 };

	Auto a1("Mercedes", "A-Klass");
	Auto a2("Tesla", "ModelS");
	vector<Auto>w = { a1 };

	Rental rental(v, w);
	rental.add_client(c2);
	assert(rental.getterLastClient() == "Client2");
	rental.update_client(c2, "Updated");
	assert(rental.getterLastClient() == "Updated");

	rental.delete_client(c2);

	rental.add_auto(a2);
	assert(rental.getterLastCar() == "Tesla");
}