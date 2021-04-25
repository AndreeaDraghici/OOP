#include "CComplex.h"
#include<iostream>

using namespace std;

template <class T>
void CComplex<T>::citire()
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
			cout << "m_real[" << i << "][" << j << "]= ";
			cin >> m_real[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "m_imaginar[" << i << "][" << j << "]= ";
			cin >> m_imaginar[i][j];
		}
	}

}
template class CComplex<int>;



template <class T>
void CComplex<T>::afisare()
{
	cout << endl;
	cout << "matricea este: " << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << m_real[i][j] <<"    ";
		}
		cout << endl;
	}
	cout << endl;


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << m_imaginar[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}
template class CComplex<int>;



template <class T>
CComplex <T> CComplex <T> :: operator+(CComplex <T> A)
{
	CComplex <T> C;
	C.n = A.n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			C.m_real[i][j] = A.m_real[i][j] + m_real[i][j];
			C.m_imaginar[i][j] = A.m_imaginar[i][j] + m_imaginar[i][j];
		}
	return C;
}
template class CComplex<int>;



template <class T>
CComplex <T> CComplex <T>::operator-(CComplex<T> A)
{
	CComplex <T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			C.m_real[i][j] = A.m_real[i][j] - m_real[i][j];
			C.m_imaginar[i][j] = A.m_imaginar[i][j] - m_imaginar[i][j];
		}
	return C;
}
template class CComplex<int>;



template <class T>
CComplex <T> CComplex <T>::operator*(CComplex<T> A)
{
	CComplex<T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C.m_real[i][j] = 0;
			C.m_imaginar[i][j] = 0;
			for (int k = 1; k <= n; k++)
			{
				C.m_real[i][j] = C.m_real[i][j] + (A.m_real[i][k] * m_real[k][j]);
				C.m_imaginar[i][j] = C.m_imaginar[i][j] + (A.m_imaginar[i][k] * m_imaginar[k][j]);
			}
		}
	}
	return C;
}
template class CComplex<int>;



template <class T>
CComplex <T> CComplex <T>::operator^(CComplex<T> A)
{
	CComplex <T> C;
	C.n = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C.m_real[i][j] = 0;
			C.m_imaginar[i][j] = 0;
			for (int k = 1; k <= A.n; k++)
			{
				C.m_real[i][j] = C.m_real[i][j] + (A.m_real[i][k] * A.m_real[k][j]);
				C.m_imaginar[i][j] = C.m_imaginar[i][j] + (A.m_imaginar[i][k] * A.m_imaginar[k][j]);
			}
		}
	}
	return C;
}
template class CComplex<int>;