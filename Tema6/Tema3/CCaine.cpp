#include "CCaine.h"
#include<iostream>
using namespace std;

void CCaine::Citire()
{
	cout << "Dati numele cainelui: " << endl;
	cin >> nume;

	cout << "Dati inaltimea cainelui: " << endl;
	cin >> inaltime;

	cout << "Dati greutatea cainelui: " << endl;
	cin >> greutate;

	cout << "Dati varsta cainelui: " << endl;
	cin >> varsta;

	cout << "Dati culoarea cainelui: " << endl;
	cin >> culoare;
	cout << endl;
}

void CCaine::Afisare()
{
	cout << "Numele este: " << nume << endl;;
	cout << "Inaltimea este: " << inaltime << endl;
	cout << "Greutatea este: " << greutate << endl;
	cout << "Varsta este: " << varsta << endl;
	cout << "Culoarea este: " << culoare << endl;
	cout << endl;
}