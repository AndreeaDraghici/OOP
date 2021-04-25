#include "CIepure.h"
#include "CAnimalIerbivor.h"
#include "CAnimal.h"
void CIepure::read()
{
	cout << "Dati suprafata minima pe care iepurele poate sa traiasca: ";
	cin >> suprafata;
	CAnimal::read();
}

void CIepure::print()
{
	cout << "Suprafata minima pe care poate trai este: " << suprafata<< endl;
	CAnimalIerbivor::print();
}