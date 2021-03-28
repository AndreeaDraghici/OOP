#include "CVulpe.h"

void CVulpe::read()
{
	cout << "Dati temperatura maxima: ";
	cin >> temperatura_maxima;
	cout << "Dati tipul(polara): ";
	cin >> tipul;
	CAnimalCarnivor::read();
}

void CVulpe::print()
{
	cout << "Temperatura maxima suportata de vulpe: " << temperatura_maxima<< endl;
	cout << "Tipul este: " << tipul << endl;
	CAnimalCarnivor::print();
}