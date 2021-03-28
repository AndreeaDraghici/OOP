#pragma once
#include"CPunct.h"


class CCerc:public CPunct
{
protected:

	CPunct m_punct1;

public:

	CCerc();
	~CCerc();

	CCerc(double raza, float x, float y);

	float getPerimetru();
	float getArie();

	
};

