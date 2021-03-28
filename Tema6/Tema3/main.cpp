#include<iostream>
#include "CCaine.h"
#include "CCaineCuPete.h"
#include "CCaineFaraPete.h"

using namespace std;

int main()
{
	CCaine* caine1 = new CCaineCuPete;
	CCaine* caine2 = new CCaineFaraPete;

	caine1->Citire();
	caine1->Afisare();
	delete caine1;

	caine2->Citire();
	caine2->Afisare();
	delete caine2;
}