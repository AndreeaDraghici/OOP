#include "CCerc.h"
#include <math.h>
#include <iostream>
using namespace std;

CCerc::CCerc() :CPunct(), m_punct1()
{
	
}

CCerc::~CCerc()
{  

}

CCerc::CCerc(double raza, float x, float y) :CPunct(x, y)
{
	int a, b;
	float r;

	a = x;
	b = y;
	r = raza;
}

float CCerc::getArie()
{
	CPunct punct;
    float p1,p2,y1,y2;

	p1 = 2;
	p2 = 3;
	y1 = 3;
	y2 = 7;

	punct.SetCoordonate(p1, p2);

	float r;
	r = sqrt((p2 - p1) * (p2 - p1) + (y2 - y1) * (y2 - y1));

	return 3.14 * r * r;
}

float CCerc::getPerimetru()
{
	CPunct punct;
	float p1, p2,y1,y2;

	p1 = 2;
	p2 = 3;
	y1 = 3;
	y2 = 7;

	punct.SetCoordonate(p1, p2);

	float r;
	r = sqrt((p2 - p1) * (p2 - p1) + (y2 - y1) * (y2 - y1));

	return 2*3.14*r;
}