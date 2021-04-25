#include<iostream>
#include "Class_Carte.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
	Class_Carte carte[50] ;
	int alegere, numar;
	do
	{   
		cout << endl;
		cout << "1.Citeste datele cartii" << endl;
		cout << "2.Afiseaza datele cartii" << endl;
		cout << "3.Cauta cartea" << endl;
		cout << "4.Exit" << endl;
		cout << endl;

		cout << "--Introduceti alegerea dorita: --"<<endl;
		cin >> alegere;
		cout << endl;

		switch (alegere)
		{
		case 1:
			cout <<endl;
			cout << "--Introduceti numarul de carti: --"<<endl;
			cin >> numar;
			cout << endl;
			for (int i = 0; i < numar; i++)
				carte[i].citeste_carte();
			break;
		case 2:
			for (int i = 0; i < numar; i++)
				carte[i].afiseaza_carte();
			break;
		case 3:
			char denumire[40], editura[40], nr[40];
			cout << "Cauta dupa denumire: ";
			cin>>denumire;
			cout << "Cauta dupa editura: ";
			cin>>editura;
			cout << "Cauta dupa nr ISBN: ";
			cin >> nr;
			cout << endl;

			for (int i = 0; i < numar; i++)
			{
				if (strcmp(denumire, carte[i].titlu) == 0 || strcmp(editura, carte[i].editura)==0 || strcmp(nr,carte[i].nr_ISBN)==0)

				{
					cout << "--Cartile disponibile sunt--" <<endl;
					cout << endl;
					cout <<"Nume carte: "<< carte[i].titlu<<endl;
					cout<< "Editura este: "<< carte[i].editura<<endl;
					cout << "Nr ISBN este: " << carte[i].nr_ISBN << endl;
					cout << endl;
					break;
				}
                else
				{
					cout <<"Alegerea dorita nu exista"<<endl;
					break;
				}
			}
			break;
		    default:cout << "Introduceti o alegere valida: "<<endl;
				break;
		case 4: exit(1);
		}
	} while (1);
}