#include "CCaprioara.h"

void CCaprioara::read()
{
	cout << "Dati nr de pui: ";
	cin >> nr_pui;
	CAnimalIerbivor::read();
}

void CCaprioara::print()
{
	cout << "Numarul de pui este: "<<nr_pui<<endl;
	CAnimalIerbivor::print();
}
