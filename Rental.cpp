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
