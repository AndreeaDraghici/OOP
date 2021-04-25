#include "CCaineCuPete.h"
#include"CCaine.h"
#include<iostream>

using namespace std;

void CCaineCuPete::Citire()
{
	cout << "Introduceti nr pete: " << endl;
	cin >> nr_pete;
	cout << endl;
	CCaine::Citire();
}

void CCaineCuPete::Afisare()
{
	cout << "Numarul de pete al cainelui este: " << nr_pete << endl;
	CCaine::Afisare();
}