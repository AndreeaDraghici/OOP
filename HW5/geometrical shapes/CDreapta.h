#pragma once
#include"CPunct.h"

class CDreapta :public CPunct
{
protected:

	CPunct m_punct1;

public:

	CDreapta();
	~CDreapta();

	CDreapta(float x0, float y0, float x1, float x2);
	
	float getDreapta1();
	float getDreapta2();

};