#include "CPatrat.h"
#include <iostream>

using namespace std;

CPatrat::CPatrat()
{
	//cout << endl;
    //cout << "s-a apelat constructorul CPatrat";
	//cout << endl;
}

CPatrat::~CPatrat()
{
	//cout << "s-a apelat destructorul clasei CPatrat";
	//cout << endl;
}

float CPatrat::getAriePatrat()
{
	CPunct punct1, punct2, punct3, punct4;

	float a1 = 5;
	float a2 = 3;
	float b1 = 4;
	float b2 = 2;
	
	punct1.SetCoordonate(a1, b1);
	punct2.SetCoordonate(a2, b2);

	float dreapta, aria;

	dreapta = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));

	aria = dreapta * dreapta;

	return aria;
}

float CPatrat::getPerimetruPatrat()
{
	CPunct punct1, punct2, punct3, punct4;

	float a1 = 5;
	float a2 = 3;
	float b1 = 4;
	float b2 = 2;

	punct1.SetCoordonate(a1, b1);
	punct2.SetCoordonate(a2, b2);

	float dreapta, perimetru;

	dreapta = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));

	perimetru = 4 * dreapta;

	return perimetru;
}