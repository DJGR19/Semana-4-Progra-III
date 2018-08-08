#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo() : base(0), altura(0)
{


} //Definición del ámbito{}

Rectangulo::Rectangulo(float b, float a)
{
	//Para implementar
	setBase(b);
	setAltura(a);


}

void Rectangulo::setBase(float b)
{
	if (b >= 0)
		this->base = b;
	else
		cout << "Error de ingreso en base" << endl;
}

void Rectangulo::setAltura(float a)
{
	if (a >= 0)
		this->altura = a;
	else
		cout << "Error de ingreso en altura" << endl;
}

float Rectangulo::getBase()
{
	return this->base;
}

float Rectangulo::getAltura()

{
	return this->altura;
}

float Rectangulo::getArea()
{
	return base * altura;

}

float Rectangulo::getPerimetro()
{
	return (2 * (base + altura));
}

void Rectangulo::imprimirFigura()
{
	cout << "Rectángulo: {Base: " << getBase() << "{Altura: " << getAltura() << "}" << endl;
	cout << "Área: " << getArea() << "Perímetro " << getPerimetro() << endl;
}

int Rectangulo::getTipo()
{
	return 1; //Tipo Rectángulo
}


