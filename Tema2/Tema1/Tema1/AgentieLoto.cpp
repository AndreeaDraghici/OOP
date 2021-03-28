#include "AgentieLoto.h"
#include"Bila.h"
#include <iostream>
using namespace std;

void AgentieLoto::simulareLoto()
{
	Bila bila;
	cout << "--- rezultatul extragerii este ---" << endl;
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		int nr = bila.Extrage();;
		cout << "valoarea bilei " << i + 1 << " extrase este " <<  nr << endl;
		bile[nr - 1].Extrage();
	}
}

void AgentieLoto::afisareBilet()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "biletul " << i + 1 << " este ";
		for (int j = 0; j < 6; j++)
		{
			vectori_cu_bile[i][j] = rand() % 49;
			cout << vectori_cu_bile[i][j] << " ";
		}
		cout << endl;
	}
}

void AgentieLoto::verificareBilet()
{
    int bilet = 0;
	for (int i = 0; i < 3; i++)
	{
		bilet = 1;
	    for (int j = 0; j < 6; j++)
		{
			if (bile[vectori_cu_bile[i][j]].getExtrasa() == true)
			bilet = 0;
		}
		if (bilet == 1)
		{
			cout << "biletul este castigator"<<endl;
		}
		else
		{
			cout << "biletul nu este castigator"<<endl;
		}
	}
}