#include<iostream>
#include"CPunct.h"
#include"CDreapta.h"
#include"CCerc.h"
#include"CDreptunghi.h"
#include"CPatrat.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{    

	CDreapta dreapta1;

	cout << "Lungimea dreptei = " << dreapta1.getDreapta1() << endl;
	cout << "Latimea dreptei= " << dreapta1.getDreapta2() << endl;
	cout << endl;

	CCerc cerc1;

	cout << "Arie cerc = " << cerc1.getArie() << endl;
	cout << "Perimetru cerc = " << cerc1.getPerimetru() << endl;

	CDreptunghi dreptunghi1;

	cout << endl;
	cout << "Arie dreptunghi = " << dreptunghi1.getArieDreptunghi() << endl;
	cout << "Perimetru dreptunghi = "<<dreptunghi1.getPerimetruDreptunghi()<<endl;
	cout << endl;

	CPatrat patrat1;

	cout << "Arie patrat = " << patrat1.getAriePatrat() << endl;
	cout << "Perimetru patrat = " << patrat1.getPerimetruPatrat() << endl;

	return 0;
}