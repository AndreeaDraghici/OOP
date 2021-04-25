#include "CComplex.h"
#include<iostream>
#include<math.h>

using namespace std;

void CComplex::afiseaza()
{
	if(re == 0 && im != 0 )
	{
		cout << im << "i";
	}
	else if (im > 0)
	{
		cout << re << "+" << im << "i";
	}
	else
	{
		cout << re;
	}

}

CComplex CComplex::operator =(CComplex z)
{
	re = z.re;
	im = z.im;

	return z;
}

CComplex  CComplex::operator +(CComplex numar)
{
	CComplex suma;

	suma.re = re + numar.re;
	suma.im = im + numar.im;

	return suma;
}


CComplex CComplex::operator -(CComplex numar)
{
	CComplex diferenta;

	diferenta.re = re - numar.re;
	diferenta.im = im - numar.im;

	return diferenta;
}


CComplex CComplex::operator *(CComplex numar)
{
	CComplex inmultire;

	inmultire.re = re * numar.re - im * numar.im;
	inmultire.im = im * numar.re + re * numar.im;

	return inmultire;
}


CComplex CComplex::operator /(CComplex numar)
{
	CComplex impartire;

	float z = numar.re * numar.re + numar.im * numar.im;

	impartire.re = (re * numar.re + im * numar.im) / z;
	impartire.im = (im * numar.re + re * numar.im) / z;

	return impartire;
}

CComplex CComplex::operator ~()
{
	return sqrt(pow(re, 2) + pow(im, 2));
}

CComplex CComplex :: operator ^(const int& index)
{
	CComplex r;

	r.re = pow(re, index);
	r.im = pow(im, index);

	return r;
}