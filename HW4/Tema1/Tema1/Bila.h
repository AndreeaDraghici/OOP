#pragma once
#include<iostream>
#include<time.h>

using namespace std;

class Bila
{
 private:
	int numar;
	bool extrasa;

 public:
	Bila()
	{
		numar = 0;
		extrasa = false;
	}
	void setNumar(int m)
	{
		numar = m;
	}
	int Extrage();
	bool getExtrasa() const
	{
		return extrasa;
	}
};

