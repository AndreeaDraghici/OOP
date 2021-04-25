#include<iostream>
#include"CList.h"

using namespace std;

CList::CList()
{
    prim = ultim = 0;
}


CList::~CList()
{
    CNod* p = prim;
    CNod* q;
    while (p != 0)
    {
        q = p;
        p = p->next;
        delete q;
    }
    prim = ultim = 0;
}


void CList::adaugareElement(int n)
{
    CNod* p;
    CNod* iterator = prim;
    p = new CNod;
    p->key = n;
    p->next = NULL;

    if (prim == NULL)
    {
        prim = p;
    }
    else
    {
        while (iterator->next != NULL)
        {
            iterator = iterator->next;
        }
        iterator->next = p;
    }
}


void CList::stergereElement(int valoare)
{
    CNod* iterator, * temp, * index = NULL;
    iterator = prim;
    temp = prim;

    while (iterator != NULL && iterator->key != valoare)
    {
        temp = iterator;
        iterator = iterator->next;
    }
    if (iterator == NULL)
    {
        cout << endl;
        cout << "Elementul nu exista in lista " << endl;
        delete index;
    }
    else
    {
        index = iterator;
        iterator = iterator->next;
        temp->next = iterator;
        if (index == prim)
        {
            prim = prim->next;
            temp = NULL;
        }
        delete index;
    }
}


void CList::afisare()
{
    CNod* aux;
    aux = prim;
    cout << "Elementele listei sunt: ";
    while (aux != NULL)
    {
        cout << aux->key << " ";
        aux = aux->next;
    }
    cout << endl;
}


void CList::eliminare(int val)
{
    CNod* aux;
    aux = prim;

    while (aux != NULL)
    {
        if (aux->key < val)
        {
            stergereElement(aux->key);
        }
        aux = aux->next;
        break;
    }
}


float CList::media_aritmetica()
{
    float suma = 0, numar = 0;
    float media;
    CNod* aux;
    aux = prim;
    while (aux != NULL)
    {
        suma = suma + aux->key;
        numar = numar + 1;
        aux = aux->next;
    }
    media = suma / numar;
    return media;
    cout << endl;
}

