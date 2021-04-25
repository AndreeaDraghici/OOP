#include<iostream>
#include"CComplex.h"
#include<math.h>

#define _CRT_SECURE_NO_WARNINGS()
using namespace std;

int main()
{
	CComplex z1(10, 4), z2(5, 2),z;
	CComplex tab[50];
	int numar;

	cout << "Rezultatul operatiei de adunare este: " << endl;
	z = z1 + z2;
	z.afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de scadere este: " << endl;
	z = z1 - z2;
	z.afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de inmultire este: " << endl;
	z = z1 * z2;
	z.afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de impartire este: " << endl;
	z = z1 / z2;
	z.afiseaza();
	cout << endl;

	cout << endl;
	cout << "Modulul numerelor este: " << endl;
	(~z1).afiseaza();
	cout << endl;
	(~z2).afiseaza();
	cout << endl;

	cout << endl;
	cout << "Operatia de ridicare a numerelor complexe la o putere intreaga este: " << endl;
	(z1 ^ 2).afiseaza();
	cout << endl;
	(z2 ^ 2).afiseaza();
	cout << endl;

	cout << endl;
	cout << "Valoarea: ";
	cin >> numar;

	CComplex numitor(2, 1);
	CComplex numarator(1, 0);
	CComplex sum;

	for (int i = 1; i <= numar; i++)
	{
		if (i % 2 != 0)
		{
			tab[i] = tab[i] ^ 3;
			numarator = numarator + tab[i];
		}
		else if (i % 2 == 0)
		{
			tab[i] = tab[i] ^ 4;
			numitor = numitor + tab[i];
		}
	}
	sum = numarator / numitor;
	cout << "Expresia este egala cu: ";
	sum.afiseaza();

	return 0;
}