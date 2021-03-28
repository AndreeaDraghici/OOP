#include "CAnimal.h"
#include <iostream>

using namespace std;

void CAnimal::read()
{
	cout << "Dati numele: ";
	cin>> nume;
	cout << "Dati greutatea: ";
	cin>>greutate;
	cout << "Dati tipul de hrana: ";
	cin>>hrana;
	cout << "Dati cantitatea de hrana: ";
	cin>>cantitate_hrana;
	cout << endl;
}

void CAnimal::print()
{
	cout << "Numele este: " << nume<<endl;
	cout << "Greutatea este: " <<greutate<<endl;
	cout << "Hrana este: " << hrana<<endl;
	cout << "Cantitatea de hrana este: " << cantitate_hrana << endl;
	cout << endl;
}