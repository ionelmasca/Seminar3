#include "Rental.h"
using namespace std;

Rental::Rental()
{

}

Rental::Rental(vector<Kunde>a, vector<Auto>b)
{
	int i = 0;
	while (i < a.size())
	{
		v.push_back(a[i]);
		i++;
	}

	i = 0;
	while (i < b.size())
	{
		l.push_back(b[i]);
		i++;
	}
}

void Rental::add_client(Kunde a)
{
	v.push_back(a);
}

void Rental::delete_client(Kunde a)
{
	int i = 0;
	while (i < v.size())
	{
		if (v[i].getterId() == a.getterId())
		{
			v.erase(v.begin() + i);
			return;
		}
		i++;
	}
}

void Rental::display_clients()
{
	int i = 0;
	while (i < l.size())
	{
		cout << v[i].getterId() << " " << v[i].getterName() << endl;
		i++;
	}
}

void Rental::update_client(Kunde a, string newname)
{
	int i = 0;
	while (i < v.size())
	{
		if (v[i].getterId() == a.getterId())
		{
			v[i].setterName(newname);
		}
		i++;
	}
