#include <iostream>
#include <Vector>
#include "Auto.h"
#include "LKW.h"
#include "PKW.h"
#include "Kunde.h"
#include "Rental.h"
#include "Tests.h"

int main()
{
	Auto a("Mercedes", "A-Klass");
	Auto b("Tesla", "ModelS");
	Auto c("Ferrari", "Laferrari");
	Auto d("BMW", "X5");

	LKW q("Tata", "ModelN", 120, "gross");
	PKW p("Tata", "ModelSpecial", "big");

	//cout << q.getterId() << " " << q.getterMarke() << " " << q.getterModell() << " " << q.getterGesamtgewicht() << " " << q.getterBezeichnung() << endl;
	//cout << p.getterId() << " " << p.getterMarke() << " " << p.getterModell() << " " << p.gettterSonderausstattungen() << endl;
	//cout << endl;

	Kunde x("Ionel");
	Kunde y("Farky");
	Kunde z("Mircea");
	Kunde w("Alex");

	vector<Auto>s = {a, b, c};
	vector<Kunde>t = {x, y, z};

	Rental magazin(t, s);

	magazin.add_client(w);

	magazin.add_auto(d);
	
	magazin.delete_auto(a);
	magazin.delete_client(x);

	magazin.update_client(y, "NewClient");

	magazin.display_cars();
	cout << endl;
	magazin.display_clients();

	void testall();

	//cout << a.getterId() << " " << a.getterMarke() << " " << a.getterModell() << endl;
	//cout << b.getterId() << " " << b.getterMarke() << " " << b.getterModell() << " " << b.getterGesamtgewicht() << " " << b.getterBezeichnung() << endl;
	//cout << c.getterId() << " " << c.getterMarke() << " " << c.getterModell() << " " << c.gettterSonderausstattungen() << endl;
	//Auto* v[4] = { new Auto(1, "Masina1", "A-Klass"), new LKW(2, "Tata", "Model2", 120, "gross"), new PKW(3, "Tata", "ModelSpecial", "big")}; 
	return 0;
}