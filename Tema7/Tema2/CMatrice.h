#pragma once
template <class T>
class CMatrice
{
protected:

	int n,norma;
	T m1[5][5];
	T m2[5][5];

public:

	void citire();
	void afisare();
	void comparare_matrici();
};