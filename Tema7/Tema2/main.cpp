#include<iostream>
#include"CSir.h"
#include"CMatrice.h"
using namespace std;

int main()
{
	CSir<int>sir1;
	CSir<char>sir2;
	CMatrice<int>matrice;

	
	sir1.citire();
	sir2.citire();

	cout << "Sirurile sunt: " << endl;
	sir1.afisare();
	cout << endl;
	sir2.afisare();

	cout << endl;
	cout << "Sirurile sortate sunt: ";
	sir1.sortare_sir();
	sir1.afisare();
	sir2.sortare_sir();
	sir2.afisare();
	
	matrice.citire();
	matrice.afisare();
	cout << "Norma finala este: ";
	matrice.comparare_matrici();
}