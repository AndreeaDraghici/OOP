#include "CMatrice.h"
#include "CComplex.h"
#include <iostream>

using namespace std;

int main()
{
	CMatrice<int>mat1, mat2, mat3;
	CMatrice<float>mat4, mat5, mat6;
	CComplex<int>mat7, mat8, mat9;

	int optiune;
    do
	{
		cout << endl;
		cout << "1. Citeste matricele " << endl;
		cout << "2. Afiseaza matricele " << endl;
		cout << "3. Operatii cu nr intregi " << endl;
		cout << "4. Operatii cu nr reale " << endl;
		cout << "5. Operatii cu nr complexe " << endl;
		cout << "6. Exit" << endl;

		cout << "Introduceti optiunea dorita: ";
		cin >> optiune;
		cout << endl;

		switch (optiune)
		{

		case 1:
			mat1.citire();
			mat2.citire();
			mat5.citire();
			mat6.citire();
			mat8.citire();
			mat9.citire();
			break;
		case 2:
			mat1.afisare();
			mat2.afisare();
			mat5.afisare();
			mat6.afisare();
			mat8.afisare();
			mat9.afisare();
			break;
		case 3:
			mat3 = mat1 + mat2;
			mat3.afisare();

			mat3 = mat1 - mat2;
			mat3.afisare();

			mat3 = mat1 * mat2;
			mat3.afisare();

			mat3 = mat1 ^ mat1;
			mat3.afisare();
			break;
		case 4:
			mat4 = mat5 + mat6;
			mat4.afisare();

			mat4 = mat5 - mat6;
			mat4.afisare();

			mat4 = mat5 * mat6;
			mat4.afisare();

			mat4 = mat5 ^ mat5;
			mat4.afisare();
			break;
		case 5:
			mat7 = mat8 + mat9;
			mat7.afisare();

			mat7 = mat8 - mat9;
			mat7.afisare();

			mat7 = mat8 * mat9;
			mat7.afisare();

			mat7 = mat8 ^ mat8;
			mat7.afisare();
			break;;
		default:
			cout << "Introduceti o alta optiune " << endl;
			break;
		case 6:exit(1);
		}
	
	} while (1);
}