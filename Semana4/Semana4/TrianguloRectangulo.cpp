#include <iostream>
#include <cmath>
#include "TrianguloRectangulo.h"
//mary2312blue@yahoo.com
using namespace std;


TrianguloRectangulo::TrianguloRectangulo() : base(0), altura(0)
{}

TrianguloRectangulo::TrianguloRectangulo(float b, float a)
{
	setAltura(a);
	setBase(b);
}

void TrianguloRectangulo::setBase(float b)
{
	if (b > 0)
		this->base = b;
	else
		cout << "Error en ingreso de base!" << endl;
}

void TrianguloRectangulo::setAltura(float a)
{
	if (a > 0)
		this->altura = a;
	else
		cout << "Error en ingreso de altura" << endl;
}

float TrianguloRectangulo::getBase()
{
	return this->base;
}

float TrianguloRectangulo::getAltura()

{
	return this->altura;
}
//FORMULA?
float TrianguloRectangulo::getArea()
{
	return (base*altura) / 2;

}

float TrianguloRectangulo::getPerimetro()
{
	return base + altura + (sqrt(altura *altura + base *base));
}
float TrianguloRectangulo::getHipotenusa()
{
	return (sqrt(altura*altura + base * base));


}

int TrianguloRectangulo::getTipo()
{
	return 2;//TriangRecta
}
void TrianguloRectangulo::imprimirFigura()
{
	cout << "TriánguloRectángulo: {Base: " << getBase() << "{Altura: " << getAltura() << "}" << endl;
	cout << "Área: " << getArea() << "Perímetro " << getPerimetro() << endl;
}

