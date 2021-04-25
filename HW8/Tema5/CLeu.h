#pragma once
#include"CAnimalCarnivor.h"
#include<string>
#include<iostream>
class CLeu : public CAnimalCarnivor
{
protected:
	int temperatura_minima;
	string tara_de_provenienta;
public:
	void read();
	void print();
};

