#include "CLeu.h"
#include"CAnimalCarnivor.h"

void CLeu::read()
{
	cout << "Dati temperatura minima: ";
	cin >> temperatura_minima;
	cout << "Dati tara de provenienta: ";
	cin >> tara_de_provenienta;
	CAnimalCarnivor::read();
}

void CLeu::print()
{
	cout << "Temperatura minima suportata de leu  " << temperatura_minima << endl;
	cout << "Tara de provenienta este: " << tara_de_provenienta<<endl;
	CAnimalCarnivor::print();
}