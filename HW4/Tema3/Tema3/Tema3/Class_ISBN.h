#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Class_ISBN
{
public:
		char isbn[40];
		void citeste_isbn();
		void afiseaza_isbn();
};
int verifica_unicitatea(Class_ISBN sir[], char* nr_isbn);


