#include "CCaine.h"
#include<iostream>
using namespace std;

void CCaine :: Citire() 
{
		cout << "Numele cainelui este: " << endl;
		cin >> nume;
		cin.get();
		cout << "Inaltimea cainelui este: " << endl;
		cin >> inaltime;
		cout << "Greutatea cainelui este: " << endl;
		cin >> greutate;
		cout << "Varsta cainelui este: " << endl;
		cin >> varsta;
		cout << "Culoarea cainelui este: " << endl;
		cin >> culoare;
		cin.get();
}

void CCaine :: Afisare() 
{
		cout << "Numele este: " << nume << endl;;
		cout << "Inaltimea este: " << inaltime <<endl;
		cout << "Greutatea este: " << greutate<< endl;
		cout << "Varsta este: " << varsta <<endl;
		cout << "Culoarea este: " << culoare<<endl;
}