#pragma once

template <class T>
class CMatrice
{
protected:

	int n;
	T m[5][5];

public:

    void citire();
    void afisare();

	CMatrice <T> operator+(CMatrice<T>);
	CMatrice <T> operator-(CMatrice<T>);
	CMatrice <T> operator*(CMatrice<T>);
	CMatrice <T> operator^(CMatrice<T>);
};