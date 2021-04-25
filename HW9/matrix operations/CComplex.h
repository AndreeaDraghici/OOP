#pragma once

template <class T>
class CComplex
{
protected:

	int n;
	T m_real[5][5];
	T m_imaginar[5][5];

public:

	void citire();
	void afisare();

	CComplex <T> operator+(CComplex<T>);
	CComplex <T> operator-(CComplex<T>);
	CComplex <T> operator*(CComplex<T>);
	CComplex <T> operator^(CComplex<T>);
};