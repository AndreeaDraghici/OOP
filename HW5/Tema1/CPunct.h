#pragma once
#include"CPunct.h"

class CPunct 
{
protected: 

	float m_x;
	float m_y;

public:

	void SetCoordonate(float x, float y)
	{
		m_x = x;
		m_y = y;
	}

	CPunct(float x = 0, float y = 0)

	{
		SetCoordonate(x, y);
	}

	float getCoordonatePunct1();
	float getCoordonatePunct2();
};

