#pragma once
#include<iostream>
#include"CAnimalIerbivor.h"

using namespace std;
class CCaprioara:public CAnimalIerbivor
{
protected:
	int nr_pui;
public:
	void read();
	void print();
};

