#pragma once
#include"CPunct.h"
class CPatrat: public CPunct
{
protected:

	CPunct m_punct1;

public:

	CPatrat();
	~CPatrat();

	float getAriePatrat();
	float getPerimetruPatrat();
};