#include"CCaineCuPete.h"
#include"CCaine.h"
#include<iostream>

using namespace std;

void CCaineCuPete :: Citire_nr_pete()
{
	cout << "Introduceti nr pete: " << endl;
	cin >> nr_pete;
}

void CCaineCuPete::Verificare()
{
	if (nr_pete == 0)
	{
		cout << "cainele nu are pete" << endl;
	}
	else
	{
		cout << "cainele are pete" << endl;
	}
}