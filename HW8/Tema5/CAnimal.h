#pragma once
#include<iostream>
#include<string>
using namespace std;

class CAnimal
{
protected:
	string nume;
	int greutate;
	string hrana;
	int cantitate_hrana;
public:	
	virtual void read()=0;
	virtual void print()=0;
};

