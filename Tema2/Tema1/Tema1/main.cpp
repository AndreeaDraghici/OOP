#include "AgentieLoto.h"
#include<iostream>
#include<time.h>

using namespace std;

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int nr_bilete;
	srand((unsigned)time(0));

	cout << "Introduceti nr de bilete: ";
	cin >> nr_bilete;
	cout << endl;

	AgentieLoto b;
	AgentieLoto* bilete = new AgentieLoto[nr_bilete];

	b.simulareLoto();

	for (int i = 0; i < nr_bilete; i++)
	{
		cout << endl;
		cout << "Afisati datele biletului " << i + 1 <<endl;
		cout << endl;
		bilete[i].afisareBilet();
		bilete[i].verificareBilet();
	}
	delete[nr_bilete]bilete;
	return 0;
}