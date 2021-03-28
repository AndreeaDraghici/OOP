#pragma once
#include"CAnimalCarnivor.h"
#include"CAnimalIerbivor.h"
#include"CAnimal.h"

class CUrs : public CAnimalIerbivor, CAnimalCarnivor
{
protected:
	int perioada_de_hibernare;
public:
	void read();
	void print();
};

