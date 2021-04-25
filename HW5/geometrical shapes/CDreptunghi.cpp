#include "CDreptunghi.h"
#include <math.h>
#include <iostream>

using namespace std;

CDreptunghi::CDreptunghi()
{

}

CDreptunghi::~CDreptunghi()
{
	
}

float CDreptunghi::getArieDreptunghi()
{
	CPunct punct1, punct2, punct3, punct4;

	float a1 = 5;
	float a2 = 3;
	float b1 = 4;
	float b2 = 2;
	float c1 = 5;
	float c2 = 3;
	float d1 = 3;
	float d2 = 1;

	punct1.SetCoordonate(a1, b1);
	punct2.SetCoordonate(a2, b2);

	punct3.SetCoordonate(c1, d1);
	punct4.SetCoordonate(c2, d2);

	float dreapta1, dreapta2,aria;

	dreapta1 = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
	dreapta2 = sqrt((c1 - d1) * (c1 - d1) + (c2 - d2) * (c2 - d2));

	aria = dreapta1 * dreapta2;

	return aria;
}


float CDreptunghi::getPerimetruDreptunghi() 
{
	CPunct punct1, punct2, punct3, punct4;

	float a1 = 10;
	float a2 = 3;
	float b1 = 7;
	float b2 = 2;
	float c1 = 5;
	float c2 = 7;
	float d1 = 3;
	float d2 = 2;

	punct1.SetCoordonate(a1, b1);
	punct2.SetCoordonate(a2, b2);

	punct3.SetCoordonate(c1, d1);
	punct4.SetCoordonate(c2, d2);

	float dreapta1, dreapta2, perimetru;

	dreapta1 = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
	dreapta2 = sqrt((c1 - d1) * (c1 - d1) + (c2 - d2) * (c2 - d2));

	perimetru= 2*dreapta1+2*dreapta2;

	return perimetru;
}


