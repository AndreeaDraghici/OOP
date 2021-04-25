#pragma once
#include <string>
#include <iostream>
using namespace std;
class CCaine
{
protected:

	string nume;
	int inaltime;
	int greutate;
	int varsta;
	string culoare;

public:

	virtual void Citire();
	virtual void Afisare();
};

