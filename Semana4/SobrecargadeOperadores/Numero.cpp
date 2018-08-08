#include "Numero.h"
#include <iostream>

using namespace std;


Numero::Numero(): num(0){}

Numero::Numero(double numero)
{

	setNumero(numero);
}

void Numero::setNumero(double numero)
{
	this->num = numero;
}

double Numero::getNumero()
{
	return this->num;
}

//ostream extracción de flujo
std::ostream& operator<<(ostream &out, const Numero&numeo)
{
	out << numeo.num;
	return out;
}

std::istream& operator>>(istream &in, Numero&numeo)
{
	in>> numeo.num;
	return in;
}

Numero operator+(const Numero &numero1, const Numero &numero2)
{
	Numero resultado;
	resultado.num = numero1.num + numero2.num;
	return resultado.num;
}