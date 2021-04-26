#pragma once
class CComplex
{
public:

	float re;
	float im;

	CComplex(float a = 0, float b = 0)
	{
		re = a;
		im = b;
	}
	void afiseaza();

	CComplex operator=(CComplex);

	CComplex operator +(CComplex);
	CComplex operator -(CComplex);
	CComplex operator *(CComplex);
	CComplex operator /(CComplex);

	CComplex operator ~();
	CComplex operator ^(const int& index);

};

