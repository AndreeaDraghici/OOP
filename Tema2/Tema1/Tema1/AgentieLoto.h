#pragma once
#include "Bila.h"

class AgentieLoto
{
	int vectori_cu_bile[3][6];
	Bila bile[49];

public:

	AgentieLoto()
{
		for (int i = 0; i < 49; i++)
		{
			bile[i].setNumar(i + 1);
		}
}
	void simulareLoto();
	void afisareBilet();
	void verificareBilet();
};

