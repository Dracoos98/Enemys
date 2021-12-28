#pragma once
#include "Base.h"
#include <iostream>
using namespace std;
class Enemy :
    public Base
{
public:
    Enemy();
    ~Enemy();
    Enemy(int px, int py, int pw, int ph);
    void Mover(Graphics^ g);
};

