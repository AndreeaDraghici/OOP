#pragma once
#include"CPunct.h"
class CDreptunghi:public CPunct
{
protected:

	CPunct m_punct1;

public:

	 CDreptunghi();
	~CDreptunghi();

	float getArieDreptunghi();
	float getPerimetruDreptunghi();
};

