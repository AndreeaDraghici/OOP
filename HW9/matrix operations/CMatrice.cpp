#include "CMatrice.h"
#include<iostream>
using namespace std;

template <class T>
void CMatrice<T>::citire()
{
	cout << "introduceti gradul matricei: ";
	cin >> n;
	cout << endl;
	cout << "introduceti elementele matricei: " << endl;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "m[" << i << "][" << j << "]=";
			cin >> m[i][j];
		}
	}

}
template class CMatrice<int>;
template class CMatrice<float>;



template <class T>
void CMatrice<T>::afisare()
{
	cout << endl;
	cout << "matricea este: " << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << m[i][j] << "   ";
		cout << endl;
	}
	cout << endl;
}
template class CMatrice<int>;
template class CMatrice<float>;



template <class T>
CMatrice <T> CMatrice <T> :: operator+(CMatrice <T> A)
{
	CMatrice <T> C;
	C.n = A.n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			C.m[i][j] = A.m[i][j] + m[i][j];
	return C;
}
template class CMatrice<int>;
template class CMatrice<float>;



template <class T>
CMatrice <T> CMatrice <T>::operator-(CMatrice<T> A)
{
	CMatrice <T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			C.m[i][j] = A.m[i][j] - m[i][j];
	return C;
}
template class CMatrice<int>;
template class CMatrice<float>;



template <class T>
CMatrice <T> CMatrice <T>::operator*(CMatrice<T> A)
{
	CMatrice <T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C.m[i][j] = 0;
			for (int k = 1; k <= n; k++)
			{
				C.m[i][j] = C.m[i][j] + (A.m[i][k] * m[k][j]);
			}
		}
	}
	return C;
}
template class CMatrice<int>;
template class CMatrice<float>;



template <class T>
CMatrice <T> CMatrice <T>::operator ^ (CMatrice<T> A)
{
	CMatrice <T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C.m[i][j] = 0;
			for (int k = 1; k <= A.n; k++)
			{
				C.m[i][j] = C.m[i][j] + (A.m[i][k] * A.m[k][j]);
			}
		}
	}
	return C;
}
template class CMatrice<int>;
template class CMatrice<float>;