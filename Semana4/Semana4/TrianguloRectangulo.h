#pragma once
#ifndef TRIANGULORECTANGULO_H
#define TRIANGULORECTANGULO_H
#include "Figura2D.h"

class TrianguloRectangulo : public Figura2D
{

private:
	float base, altura;


public:

	TrianguloRectangulo();
	TrianguloRectangulo(float, float);

	void setBase(float);
	void setAltura(float);

	float getBase();
	float getAltura();

	float getArea();
	float getPerimetro();

	void imprimirFigura();

	int getTipo();
	float getHipotenusa();

};

#endif // !TRIANGULORECTANGULO_H
