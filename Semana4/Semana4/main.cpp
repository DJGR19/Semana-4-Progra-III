#include <iostream>
using namespace std;

#include"Rectangulo.h"
#include "TrianguloRectangulo.h"
#include <conio.h>


void imprimir(Figura2D *figura)
{
	if (figura->getTipo() == 2)
	{
		TrianguloRectangulo *tr = (TrianguloRectangulo*)figura;

			cout << "Hipotenusa: " << tr->getHipotenusa()<<endl;
	}


}

int main()
{

	Figura2D *figuras[4];
	figuras[0] = new Rectangulo(8, 6);
	figuras[1] = new TrianguloRectangulo(8, 6.34);
	figuras[2] = new Rectangulo(2.1, 7.3);
	figuras[3] = new TrianguloRectangulo(8, 6);
	
	for (int i = 0; i < 4; i++)
	{
		figuras[i]->imprimirFigura();
	}

	_getch();
}