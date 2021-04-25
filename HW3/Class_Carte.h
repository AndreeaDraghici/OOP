#pragma once

class Class_Carte
{
  public:

	char titlu[40];
	char autor1[40];
	char autor2[40];
	char editura[40];
	char nr_ISBN[40];
    char anul_aparitiei[40];
	float pret;

	void citeste_carte();
	void afiseaza_carte();
};