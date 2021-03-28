#include<iostream>
#include"CList.h"

using namespace std;
int nr;
int main()
{
    CList List;
    int alegere, numar;

    do
    {
        cout << endl;
        cout << "1.Adaugati element" << endl;
        cout << "2.Stergeti element " << endl;
        cout << "3.Media aritmetica a elementelor " << endl;
        cout << "4.Eliminare element cu valoare mai mica decat o valoare data" << endl;
        cout << "5.Afisati lista" << endl;
        cout << "6.Exit" << endl;
        cout << endl;
        cout << "Introduceti alegerea dorita" << endl;
        cin >> alegere;
        cout << endl;

        switch (alegere)
        {
        case 1:
            cout << "Introduceti numarul de elemente: " << endl;
            cin >> numar;
            for (int i = 1; i <= numar; i++)
            {
                cout << "Elementul " << i << " este: ";
                cin >> nr;
                List.adaugareElement(nr);
            }
            break;
        case 2:
            int nr;
            cout << "Introduceti elementul pe care doriti sa-l stergeti: ";
            cin >> nr;
            List.stergereElement(nr);
            break;
        case 3:
            cout << "Media aritmetica este: " << endl;
            cout << List.media_aritmetica();
            cout << endl;
            break;
        case 4:
            cout << "Valoarea este: ";
            cin >> numar;
            List.eliminare(numar);
            break;
        case 5:
            List.afisare();
            break;
        case 6: exit(1);
            break;
        }

    } while (1);
}