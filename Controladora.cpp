#include "Controladora.h"

Controladora::Controladora()
{
	for (int i = 0; i < 5; i++)
	{
		int posx,posy;
		posx= rand() % (501);
		posy = rand() % (301);
		enemigos.push_back(new Enemy(posx, posy, 1, 1));
	}
}

Controladora::~Controladora()
{
	for (int i = 0; i < enemigos.size(); i++)
	{
		delete enemigos.at(i);
	}
}

void Controladora::Dibujar_Enemigos(Graphics^ g, Bitmap^ bmp)
{
	for (int i = 0; i < enemigos.size(); i++)
	{
		enemigos.at(i)->Dibujar_desImagen(g,bmp);
		enemigos.at(i)->Mover(g);
	}
}

