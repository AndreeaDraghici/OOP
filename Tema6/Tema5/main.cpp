#include <iostream>
#include "CAnimal.h"
#include "CRezervatie.h"
//#include "CIepure.h"
//#include "CLeu.h"
//#include "CUrs.h"
//#include "CVulpe.h"
//#include "CCaprioara.h"

using namespace std;

// am adaugat si implementat si clasa CRezervatie 

int main()
{
	CRezervatie rezervatie_animale;

	int alegere;
	do
	{
		cout << "----Populeaza rezervatia cu animale----";
		cout << endl;
		cout << "1.Citeste date despre animale: " << endl;
		cout << "2.Afiseaza date despre animale: " << endl;
		cout << "3.Exit";
		cout << endl;
		cout << "Alegerea dorita este: ";
		cin >> alegere;
		cout << endl;
		switch (alegere)
		{
		case 1:
			rezervatie_animale.read();
			break;
		case 2:
			rezervatie_animale.print();
			break;
		case 3:exit(1);

		} 
	} while (1);
}



/*
		CAnimal* animal1 = new CIepure;
		CAnimal* animal2 = new CLeu;
		CAnimal* animal3 = new CUrs;
		CAnimal* animal4 = new CVulpe;
		CAnimal* animal5 = new CCaprioara;
		int alegere;
		do
		{
			cout << endl;
			cout << "1.Informatii despre Iepure" << endl;
			cout << "2.Informatii despre Leu" << endl;
			cout << "3.Informatii despre Urs" << endl;
			cout << "4.Informatii despre Vulpe" << endl;
			cout << "5.Informatii despre Caprioara" << endl;
			cout << "6.Exit" << endl;
			cout << endl;

			cout << "Alegerea dorita este: ";
			cin >> alegere;
			cout << endl;
			switch (alegere)
			{
			case 1:
				animal1->read();
				animal1->print();
				break;
			case 2:
				animal2->read();
				animal2->print();
				break;
			case 3:
				animal3->read();
				animal3->print();
				break;
			case 4:
				animal4->read();
				animal4->print();
				break;
			case 5:
				animal5->read();
				animal5->print();
				break;
			case 6:exit(1);
			}
		} while (1);
	
}*/