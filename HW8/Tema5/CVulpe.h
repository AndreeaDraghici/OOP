#pragma once
#include"CAnimalCarnivor.h"
#include<string>

class CVulpe:public CAnimalCarnivor
{
protected:
	int temperatura_maxima;
	string tipul;
public:
	void read();
	void print();
};