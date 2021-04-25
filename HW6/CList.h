#include"CNod.h"

class CList
{
public:
    CNod* prim;
    CNod* ultim;

    CList();
    ~CList();

    void adaugareElement(int n);
    void stergereElement(int valoare);
    void afisare();
    void eliminare(int val);
    float media_aritmetica();
};