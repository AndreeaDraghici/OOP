#include "Class_Carte.h"
#include<iostream>

using namespace std;

void Class_Carte::citeste_carte()	                                                       
{
	cout<<"Introduceti titlul cartii:";
	cin>>titlu;

	cout<<"Introduceti prenumele autorului:";
	cin>>autor1;

	cout<<"Introduceti numele autorului:";
	cin>>autor2;

	cout<<"Introduceti editura:";
	cin>>editura;

	cout<<"Introduceti numarul ISBN:";
	cin>>nr_ISBN;

	cout<<"Introduceti anul aparitiei:";
	cin>>anul_aparitiei;

	cout<<"Introduceti pretul:";
	cin >> pret;

	cout<< endl;
}


void Class_Carte::afiseaza_carte()
{
	cout << "Titlul cartii este: " << titlu << endl;

	cout << "Penumele autorului este: " << autor1 << endl ;

	cout << "Numele autorului este: " << autor2 << endl;

	cout << "Editura este: " << editura << endl;

	cout << "Numarul ISBN este: " << nr_ISBN <<endl;

	cout << "Anul aparitiei este: " << anul_aparitiei << endl;

	cout << "Pretul este: " << pret<<endl;
	cout << endl;
}