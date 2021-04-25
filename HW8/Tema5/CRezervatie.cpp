#include "CRezervatie.h"
#include<iostream>
using namespace std;

void CRezervatie::read()
{
	cout << "Nr de ursi este: ";
	cin >> u;
	cout << "Nr de iepuri este: ";
	cin >> i;
	cout << "Nr de vulpi este: ";
	cin >> v;
	cout << "Nr de lei este: ";
	cin >> l;
	cout << "Nr de caprioare este: ";
	cin >> c;
	for (int i = 0; i < u; i++)
	{
		urs[i].read();
	}
	for (int i = 0; i < i; i++)
	{
		iepure[i].read();
	}
	for (int i = 0; i < v; i++)
	{
		vulpe[i].read();
	}
	for (int i = 0; i < l; i++)
	{
		leu[i].read();
	}
	for (int i = 0; i < c; i++)
	{
		caprioara[i].read();
	}
}

void CRezervatie::print()
{
	for (int i = 0; i < u; i++)
	{
		urs[i].print();
	}
	for (int i = 0; i < i; i++)
	{
		iepure[i].print();
	}
	for (int i = 0; i < v; i++)
	{
		vulpe[i].print();
	}
	for (int i = 0; i < l; i++)
	{
		leu[i].print();
	}
	for (int i = 0; i < c; i++)
	{
		caprioara[i].print();
	}

}