#include "CAnimalCarnivor.h"
#include "CAnimal.h"

void CAnimalCarnivor::read()
{
	CAnimal::read();
}

void CAnimalCarnivor::print()
{
	cout << nume << " este un animal carnivor" << endl;
	CAnimal::print();
}