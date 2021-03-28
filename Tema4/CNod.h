#pragma once
#ifndef _CNod
#define _CNod
#include <iostream>

using namespace std;

class CList;
class CNod
{
    int key;
    CNod* next;

    friend class CList;
};
#endif // !_CNod
