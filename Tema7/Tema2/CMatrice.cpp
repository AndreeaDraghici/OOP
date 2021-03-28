#include "CMatrice.h"
#include<iostream>
using namespace std;

template <class T>
void CMatrice<T>::citire()
{
	cout << "introduceti gradul matricei: ";
	cin >> n;
	cout << endl;
	cout << "introduceti elementele matricelor: " << endl;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "m1[" << i << "][" << j << "]=";
			cin >> m1[i][j];
		}
		cout << endl;
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "m2[" << i << "][" << j << "]=";
			cin >> m2[i][j];
		}
		cout << endl;
	}
}
template class CMatrice<int>;


template <class T>
void CMatrice<T>::afisare()
{
	cout << endl;
	cout << "matricele sunt: " << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << m1[i][j] << "   ";
		}
		cout << endl;
	}

	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << m2[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}
template class CMatrice<int>;


template <class T>
void CMatrice<T>::comparare_matrici()
{
	cout << endl;
	norma = 0;
	for (int i = 1; i <= n; i++)
	{ 
		float suma1,suma2;
		suma1=0;
		suma2=0;
		for (int j = 1; j <= n; j++)
		{
			suma1 = suma1 + m1[i][j];
			suma2 = suma2 + m2[i][j];
			if (norma < suma1)
			{
				norma = suma1;
			}
			else
			{
				norma = suma2;
			}
		}
	}
	cout << norma;
	cout << endl;
}
template class CMatrice<int>;