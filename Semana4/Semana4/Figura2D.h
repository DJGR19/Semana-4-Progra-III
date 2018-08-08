#pragma once
#ifndef FIGURA2D_H
#define FIGURA2D_H

class Figura2D
{

public:

	//Overwriting
	//virtual sobre escribe los datos de las funciones
	//=0 crea la necesidad de implementar forzosamente la función
	virtual float getArea() = 0;
	virtual float getPerimetro() = 0;
	virtual int getTipo() = 0;
	virtual void imprimirFigura() = 0;

};




#endif // !FIGURA2D_H

