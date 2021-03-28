#include "CAnimalIerbivor.h"
#include "CAnimal.h"


void CAnimalIerbivor::read()
{
	CAnimal::read();
}

void CAnimalIerbivor:: print()
{
	cout << nume << " este un animal ierbivor"<<endl;
	CAnimal::print();
}