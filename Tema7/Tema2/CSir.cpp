#include "CSir.h"
#include<iostream>
using namespace std;


template<typename T>
void CSir<T>::citire()
{
	cout << "Introduceti nr de elemente ale sirurlui: ";
	cin >> nr;
	cout << "Introduceti elementele sirului: ";
	for (int i = 0; i < nr; i++)
	{
		cin >> sir[i];
	}
	cout << endl;
}
template class CSir<int>;
template class CSir<char>;


template<typename T>
void CSir<T>::afisare()
{
	for (int i = 0; i < nr; i++)
	{
		cout << sir[i] << " ";
	}
	cout << endl;
}
template class CSir<int>;
template class CSir<char>;


template<typename T>
void CSir<T>::sortare_sir()
{
	int aux;
	for (int i = 0; i < nr; i++)
		for (int j = i + 1; j < nr; j++)
			if (sir[j] < sir[i])
			{
				aux = sir[i];
				sir[i] = sir[j];
				sir[j] = aux;
			}
	cout << endl;
}
template class CSir<int>;
template class CSir<char>;