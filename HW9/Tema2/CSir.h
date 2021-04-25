#pragma once
template<typename T>
class CSir
{
protected:

	T sir[100];
	int nr;

public:

	void citire();
	void afisare();
	void sortare_sir();
};