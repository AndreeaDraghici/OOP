#pragma once
#include"CIepure.h"
#include"CUrs.h"
#include"CVulpe.h"
#include"CLeu.h"
#include"CCaprioara.h"
class CRezervatie : public CAnimal
{
protected:
	CIepure iepure[50];
	CVulpe vulpe[50];
	CUrs urs[50];
	CLeu leu[50];
	CCaprioara caprioara[50];

	int i, v, u, l, c; 
public:
	void read();
	void print();
};

