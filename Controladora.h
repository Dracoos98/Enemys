#pragma once
#include "Enemy.h"
#include <vector>
#include <iostream>
using namespace std;

class Controladora
{
private:
	vector<Enemy*>enemigos;
public:
	Controladora();
	~Controladora();
	void Dibujar_Enemigos(Graphics^ g, Bitmap^ bmp);
};

