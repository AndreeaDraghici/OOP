#include "CDreapta.h"
#include<math.h>
#include<iostream>

using namespace std;

CDreapta::CDreapta() :CPunct(),m_punct1()
{
	
}

CDreapta::~CDreapta()
{

}

CDreapta::CDreapta(float x0, float y0, float x1, float y1) :CPunct(x0, y0), m_punct1(x1, y1)
{
	int xA, yA, xB, yB;

	xA = x0;
	yA = y0;

	xB = x1;
	yB = y1;
}

float CDreapta::getDreapta1() 
{
	CPunct punct1, punct2;

	float a1 = 5;
	float a2 = 3;
	float b1 = 4;
	float b2 = 2;
		
	punct1.SetCoordonate(a1, b1);
	punct2.SetCoordonate(a2, b2);
		
	float dreapta1;

	dreapta1 = sqrt((a1-b1)*(a1-b1) +  (a2 -b2)*(a2-b2));
	
	return dreapta1;
}


float CDreapta::getDreapta2()
{
	CPunct punct3, punct4;

	float c1 = 5;
	float c2 = 3;
	float d1 = 3;
	float d2 = 1;

	punct3.SetCoordonate(c1, d1);
	punct4.SetCoordonate(c2, d2);

	float dreapta2;

	dreapta2 = sqrt((c1-d1)*(c1-d1) + (c2-d2)*(c2-d2));

	return dreapta2;
}