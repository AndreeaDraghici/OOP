#include "CUrs.h"
#include "CAnimal.h"
#include"CAnimalCarnivor.h"
#include"CAnimalIerbivor.h"

void CUrs::read()
{
	cout << "Dati perioada de hibernare a ursului: ";
	cin >> perioada_de_hibernare;
	CAnimal::read();
}

void CUrs::print()
{
	cout <<nume<< " este un animal ierbivor si carnivor" << endl;
	cout << "Perioada de hibernare a ursului este: " << perioada_de_hibernare << " luni" << endl;
	CAnimal::print();
}