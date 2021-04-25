#include "Class_ISBN.h"
#include "Class_Carte.h"
#include  <iostream>

using namespace std;

void Class_ISBN::citeste_isbn() 
{
	cout << "Introduceti numarul ISBN:";
	cin.get();
	cin >> isbn;
	cout << endl;
}

void Class_ISBN::afiseaza_isbn() 
{
	cout << "Numarul ISBN este: " << isbn << endl;
}

int verifica_unicitatea(Class_ISBN sir[], char* isbn) 
{
	for (int i = 0; i < 40; i++) 
	{
		
		if (!(strcmp(sir[i].isbn, isbn) == 0))

			return 0;
	}
	return 1;
}